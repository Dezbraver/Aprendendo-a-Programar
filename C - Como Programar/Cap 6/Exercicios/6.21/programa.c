/* - Questão 6.21 - */

#include <stdio.h>
#include <stdlib.h>

/* nº assentos + 1, pois a posição 0 do array será desprezada */
#define TAMANHO 11

void quadroDeAssentos( const int assentos[], int tamanho );
int menu( void );
int subMenu( int classe );
void imprimirBilhete( const char secao[], int assento );

int main( void )
{
    int assentos[ TAMANHO ] = { 0 };
    int primeiraClasse = 1;
    int classeEconomica = 6;

    system( "chcp 65001 > NUL" );

    do
    {
        quadroDeAssentos( assentos, TAMANHO );

        switch ( menu() )
        {
            case 1:
                if ( primeiraClasse <= 5 )
                {
                    ++assentos[ primeiraClasse ];
                    imprimirBilhete( "primeira classe", primeiraClasse++ );
                } /* fim do if */
                else
                    if ( subMenu( 1 ) == 1 )
                    {
                        ++assentos[ classeEconomica ];
                        imprimirBilhete( "classe econômica", classeEconomica++ );
                    } /* fim do if */
                    else
                        printf( "\nO próximo voo sairá em 3 horas.\n\n" );
                break;
            case 2:
                if( classeEconomica <= 10 )
                {
                    ++assentos[ classeEconomica ];
                    imprimirBilhete( "classe econômica", classeEconomica++ );
                } /* fim do if */
                else
                    if ( subMenu( 2 ) == 1 )
                    {
                        ++assentos[ primeiraClasse ];
                        imprimirBilhete( "primeira classe", primeiraClasse++ );
                    } /* fim do if */
                    else
                        printf( "\nO próximo voo sairá em 3 horas.\n\n" );
                break;
        } /* fim do switch */
    } while ( primeiraClasse <= 5 || classeEconomica <= 10 );
    
    quadroDeAssentos( assentos, TAMANHO );

    printf( "\nOs assentos para este voo foram esgotados!\n" );

    system( "pause" );
    return 0;
} /* fim da função main */

void quadroDeAssentos( const int assentos[], int tamanho )
{
    int i;

    printf( "   1  2  3  4  5  6  7  8  9 10\n" );

    printf( "[" );

    for ( i = 1; i < tamanho; ++i )
        printf( "%3d", assentos[ i ] );
        
    printf( "  ]\n" );
} /* fim da função quadroDeAssentos */

int menu( void )
{
    int op;

    /* prompt */
    printf( "Favor digitar 1 para \"primeira classe\"\n"
            "Favor digitar 2 para \"econômica\"\n" );
    scanf( "%d", &op );

    return op;
} /* fim da função menu */

int subMenu( int classe )
{
    int op;

    printf( "Assentos na %s esgotados!\n",
        classe == 1? "primeira classe": "classe econômica" );

    printf( "Você aceita ser colocado(a) na %s?\n",
        classe == 1? "classe econômica": "primeira classe" );

    /* prompt */
    printf( "Favor digitar 1 para \"sim\"\n"
            "Favor digitar 2 para \"não\"\n" );
    scanf( "%d", &op );

    return op;
} /* fim da função subMenu */

void imprimirBilhete( const char secao[], int assento )
{
    printf( "\n%s\n%20s\n%s\n\n", 
        "=====================",
        "BILHETE DE EMBARQUE",
        "=====================" );

    printf( "Seção: %s\n", secao );
    printf( "Assento: %d\n\n", assento );
} /* fim da função imprimirBilhete */