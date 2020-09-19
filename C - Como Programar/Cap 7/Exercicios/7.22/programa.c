/* - Questão 7.22 - */

#include <stdio.h>
#include <stdlib.h>

void mazeTraverse( char m[ 12 ][ 12 ], char *p );

int main()
{
    char m[ 12 ][ 12 ] = { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',

                           '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#',

                           '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#',

                           '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#',

                           '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.',

                           '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#',
                           
                           '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#',

                           '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#',

                           '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#',

                           '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#',

                           '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#',

                           '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', };
    
    mazeTraverse( m, &m[ 2 ][ 0 ] );

    system( "pause" );
    return 0;
}

void mazeTraverse( char m[ 12 ][ 12 ], char *p )
{
    int x, i, j, k; /* contadores */
    static int b = 0; /* controle de inversão de direção */
    int c = 0; /* controle de execução das tentativas de movimento */
    char sim = '.'; /* símbolo a ser procurado durante a movimentação */
    static char *l; /* endereço da posição anterior */
    static unsigned int dp; /* valor direcional da posição anterior (para qual direção estava indo) */
    unsigned int v = sizeof( m[ 0 ] ); /* tamanho de um linha (usado para movimentação vertical) */
    unsigned int h = sizeof( char ); /* tamanho de um caractere (usado para movimentação horizontal) */
    char *d[ 4 ] = { ( p + h ), ( p + v ), ( p - h ), ( p - v ) }; /* array de endereços contendo as 4 posições adjacentes em formato de cruz */
    int pos; /* posição do array d para onde vai mover */
    int cont = 0; /* contador de movimentos nas bordas do labirinto/movimentos possíveis */
    int dd[ 4 ] = { 0 }; /* array que terá 1 como valor nas direções possíveis e zero nas impossíveis */
    int front = 0; /* controle de movimento para frente */
    int right = 0; /* controle de movimento logo à direita */
    unsigned int temp; /* armazena a direção anterior para caso se necessário utilizar seu valor */

    *p = 'o'; /* iguala a posição atual no labirinto à o para melhor vizualização de onde o algorítmo está */

    /* imprime o Labirinto */
    for ( i = 0; i < v; ++i )
    {
        for ( j = 0; j < v; ++j )
            printf( "%2c", m[ i ][ j ] );
        
        printf( "\n" );
    } /* fim do for */

    printf( "\n" );

    *p = 'X'; /* iguala a posição atual no labirinto à X para ser mais cômodo verificar se escapamos do labirinto e para se enquadrar no que a questão pede */

    /* verifica se existem 2 posições nas bordas do labirinto preenchidas determinando se escapamos do labirinto */
    for ( i = 0; i < v; ++i )
    {
        if ( m[ i ][ 11 ] == 'X' )
            ++cont;
        if ( m[ 11 ][ i ] == 'X' )
            ++cont;
        if ( m[ i ][ 0 ] == 'X' )
            ++cont;
        if ( m[ 0 ][ i ] == 'X' )
            ++cont;
    } /* fim do for */

    if ( cont == 2 )
        return;
    else
        cont = 0; /* reutilizamos este contador por isso zeramos */

    /* realiza a movimentação pelo labirinto */
    while ( c == 0 )
    {
        /* verifica quais direções são possíveis. O for é circular começa da próxima direção e volta à direção atual */
        for ( x = dp + 1 < 4? dp + 1: 0; ; x += x + 1 < 4? 1: -3 )
        {
            /* para ser possível precisa ir para um endereço diferente da anterior e ter o caractere especificado como valor */
            if ( d[ x ] != l && *d[ x ] == sim )
            {
                if ( sim == '.' ) /* permite a inversão de direção quando chegar a um beco sem saída */
                    b = 0;

                dd[ x ] = 1;

                if ( x == dp )
                    front = 1;

                if ( *d[ dp + 1 < 4? dp + 1: 0 ] == sim ) /* se a posição logo à direita for possível */
                    right = 1;

                ++cont; /* conta as posições possíveis */
            } /* fim do if */

            if ( x == dp ) /* depois de testar o movimento com a direção atual o for acaba */
                break;
        } /* fim do for */

        /* verifica se existe alguma direção possível */
        if ( cont > 0 )
        {
            c = 1; /* determina que o laço encerrará na próxima execução */
            l = p; /* atribui ao endereço da posição anterior o endereço da posição atual pois logo a função será chamada recursivamente */

            /* define como direção a ser seguida a primeira direção possível começando a partir da primeira
            direção virando logo a direita e no mais retornando para a direção que ja se estava seguindo */
            for ( i = dp + 1 < 4? dp + 1: 0; ; i += i + 1 < 4? 1: -3 )
            {
                if ( dd[ i ] == 1 || i == dp )
                {
                    pos = i;
                    break;
                } /* fim do if */
            } /* fim do for */

            temp = dp;
            dp = pos;

            if ( cont > 1 ) /* verifica se há mais de uma direção possível */
                if ( front ) /* verifica se alguma das direções possíveis é direção para qual já estava indo */
                    if ( right ) /* verifica se dentre as direções possíveis a direção logo à direita é possível */
                        mazeTraverse( m, d[ pos ] ); /* vira à direita */
                    else
                    {
                        dp = temp; /* recupera o valor da direção que ja estava sendo seguida */
                        mazeTraverse( m, d[ dp ] ); /* continua em frente */
                    } /* fim do else mais aninhado */
                else
                    mazeTraverse( m, d[ pos ] ); /* vira à direita */
            else
                mazeTraverse( m, d[ pos ] ); /* vira à direita */
        } /* fim do if */
        else
        {
            /* tira a restrição de não poder se movimentar para o endereço anterior */
            if ( b == 0 )
            {
                l = p; /* a posição anterior será a posição atual */
                for ( k = 1; k <= 2; ++k ) /* inverte a direção que estava seguindo */
                    dp += dp + 1 < 4? 1 : -3;
            } /* fim do if aninhado */
            b = 1; /* coloca novamente a restrição de não poder se movimentar para o endereço anterior */
            sim = 'X'; /* o símbolo a ser procurado se torna o X */
        } /* fim do else */
    } /* fim do while */
} /* fim da função mazeTraverse */