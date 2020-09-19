/* - Questão 11.12 - */

#include <stdio.h>
#include <stdlib.h>

unsigned iniciaArquivo( FILE *hfPtr );
char opcaoErroCriacao( void );
unsigned opcaoMenuPrincipal( void );
void listarDados( FILE *hfPtr );
void inserirDados( FILE *hfPtr );
void atualizarDados( FILE *hfPtr );
void excluirDados( FILE *hfPtr );

struct item {
    int registro;
    char nomeFerramenta[ 30 ];
    unsigned quantidade;
    double custo;
};

typedef struct item Item;

int main( void ) {
    FILE *hfPtr;
    unsigned i;
    unsigned end = 0;
    unsigned opcao;
    char c;

    system( "chcp 65001 > NUL" );

    if ( ( hfPtr = fopen( "hardware.dat", "ab+" ) ) == NULL )
        printf( "Entre em contato com o administrador de sistemas pois não tenho permissão de leitura/gravação do arquivo.\n" );
    else {
        if ( fgetc( hfPtr ) == EOF ) {
            if ( iniciaArquivo( hfPtr ) ) {
                printf( "O arquivo foi iniciado com sucesso!\n" );
            } /* fim do if */
            else {
                printf( "O arquivo não foi inicializado corretamente! Delete o arquivo \"hardware.dat\" e execute o programa novamente.\n" );
                end = 1;
            } /* fim do else */
        }

        if ( end == 0 ) {
            hfPtr = fopen( "hardware.dat", "rb+" );

            while ( ( opcao = opcaoMenuPrincipal() ) != 5 ) {
                switch ( opcao ) {
                    case 1:
                        listarDados( hfPtr );
                        break;
                    case 2:
                        inserirDados( hfPtr );
                        break;
                    case 3:
                        atualizarDados( hfPtr );
                        break;
                    case 4:
                        excluirDados( hfPtr );
                        break;
                    default:
                        printf( "Opção Inválida! Tente novamente\n" );
                        break;
                } /* fim do switch */
            } /* fim do while */
        } /* fim do if */
    } /* fim do else */
    
    fclose( hfPtr );
    printf( "Encerrando a execução do programa.\n" );
    system( "pause" );
    return 0;
} /* fim da função main */

unsigned iniciaArquivo( FILE *hfPtr ) {
    Item blankItem = { 0, "", 0, 0.0 };
    unsigned i;

    for ( i = 1; i <= 100; ++i )
        if ( fwrite( &blankItem, sizeof( Item ), 1, hfPtr ) < 1 )
            return 0;

    fclose( hfPtr );
    return 1;
} /* fim da função iniciaArquivo */

unsigned opcaoMenuPrincipal( void ) {
    unsigned opcao;
    
    printf( "\n1 - Listar todas as ferramentas\n"
            "2 - Inserir ferramenta\n"
            "3 - Atualizar ferramenta\n"
            "4 - Excluir ferramenta\n"
            "5 - Encerrar o programa\n"
            "Digite o número de uma opção\n? " );
    scanf( "%u", &opcao );

    return opcao;
} /* fim da função opcaoMenuPrincipal */

void listarDados( FILE *hfPtr ) {
    Item ferramenta;
    unsigned ferramentas = 0;

    printf( "%11s%30s%13s%12s\n", "Registro", "Nome", "Quantidade", "Custo" );

    while( fread( &ferramenta, sizeof( Item ), 1, hfPtr ) == 1 ) {
        if ( ferramenta.registro != 0 ) {
            printf( "%11u%30s%13u%12.2f\n",
                ferramenta.registro, ferramenta.nomeFerramenta, ferramenta.quantidade, ferramenta.custo );
            ++ferramentas;
        }
    }

    if ( !ferramentas )
        printf( "Você não possui nenhuma ferramenta cadastrada.\n" );
    else
        printf( "Você possui %u ferramenta(s) cadastrada(s).\n", ferramentas );

    rewind( hfPtr );
} /* fim da função listarDados */

void inserirDados( FILE *hfPtr ) {
    Item ferramenta = { 0, "", 0, 0.0 };
    int numFerramenta;

    printf( "Digite o número da ferramenta a inserir (1-100): " );
    do {
        scanf( "%d", &numFerramenta );
    } while ( numFerramenta < 1 || numFerramenta > 100 );

    fseek( hfPtr, ( numFerramenta - 1 ) * sizeof( Item ), SEEK_SET );
    fread( &ferramenta, sizeof( Item ), 1, hfPtr );

    if ( ferramenta.registro != 0 )
        printf( "Esta ferramenta já está cadastrada.\n" );
    else {
        printf( "Digite o nome, a quantidade e o custo da ferramenta.\n? " );
        scanf( "%s%u%lf", &ferramenta.nomeFerramenta, &ferramenta.quantidade, &ferramenta.custo );

        ferramenta.registro = numFerramenta;

        fseek( hfPtr, ( ferramenta.registro - 1 ) * sizeof( Item ), SEEK_SET );
        fwrite( &ferramenta, sizeof( Item ), 1, hfPtr );
        printf( "Registro inserido com sucesso!\n" );
    }

    rewind( hfPtr );
} /* fim da função inserirDados */

void atualizarDados( FILE *hfPtr ) {
    Item ferramenta;
    unsigned numFerramenta;

    printf( "Digite o número da ferramenta a atualizar (1-100): " );
    do {
        scanf( "%u", &numFerramenta );
    } while ( numFerramenta < 1 || numFerramenta > 100 );

    fseek( hfPtr, ( numFerramenta - 1 ) * sizeof( Item ), SEEK_SET );
    fread( &ferramenta, sizeof( Item ), 1, hfPtr );

    if ( ferramenta.registro == 0 )
        printf( "Esta ferramenta não está cadastrada.\n" );
    else {
        printf( "Digite o nome, a quantidade e o custo da ferramenta.\n? " );
        scanf( "%s%u%lf", &ferramenta.nomeFerramenta, &ferramenta.quantidade, &ferramenta.custo );

        ferramenta.registro = numFerramenta;

        fseek( hfPtr, ( numFerramenta - 1 ) * sizeof( Item ), SEEK_SET );
        fwrite( &ferramenta, sizeof( Item ), 1, hfPtr );
        printf( "Registro atualizado com sucesso!\n" );
    }

    rewind( hfPtr );
} /* fim da função atualizarDados */

void excluirDados( FILE *hfPtr ) {
    Item ferramenta;
    Item ferramentaVazia = { 0, "", 0, 0.0 };
    unsigned numFerramenta;

    printf( "Digite o número da ferramenta a excluir (1-100): " );
    do {
        scanf( "%u", &numFerramenta );
    } while ( numFerramenta < 1 || numFerramenta > 100 );

    fseek( hfPtr, ( numFerramenta - 1 ) * sizeof( Item ), SEEK_SET );
    fread( &ferramenta, sizeof( Item ), 1, hfPtr );

    if ( ferramenta.registro == 0 )
        printf( "Esta ferramenta não está cadastrada.\n" );
    else {
        ferramenta = ferramentaVazia;

        fseek( hfPtr, ( numFerramenta - 1 ) * sizeof( Item ), SEEK_SET );
        fwrite( &ferramenta, sizeof( Item ), 1, hfPtr );
        printf( "Registro excluído com sucesso!\n" );
    }

    rewind( hfPtr );
} /* fim da função excluirDados */