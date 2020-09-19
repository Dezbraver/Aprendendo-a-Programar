/* - Questão 6.23 - */
/* Fiz de forma que o usuário dá os comandos em vez de ler
eles a partir de um array achei que assim ficava mais
interativo */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

float receberComando( int c, int d );
int pesquisaComando( int comando );
void mover( int nC, int p[], int floor[][ 50 ], int size,
            int d, int c );
void imprimirArray( const int floor[][ 50 ], int size );

int main( void )
{
    int floor[ 50 ][ 50 ] = { 0 };
    float comando;
    int numeroCasas;
    int p[2] = { 0 };
    int caneta = 0;
    int direcao = 2;

    system( "chcp 65001 > NUL" );

    while ( ( comando = receberComando( caneta, direcao ) ) != 9 )
    {
        if ( (int) comando == 8 )
            caneta = 0;
        else if ( (int) comando == 2 )
            caneta = 1;
        else if ( (int) comando == 0 )
            caneta = 2;
        else if ( (int) comando == 6 )
            if ( direcao == 3 )
                direcao = 0;
            else
                ++direcao;
        else if ( (int) comando == 4 )
            if ( direcao == 0 )
                direcao = 3;
            else
                --direcao;
        else if ( (int) comando == 5 )
        {
            numeroCasas = (int) ( comando * 100 ) % 100;

            mover( numeroCasas, p, floor, SIZE, direcao, caneta );
        } /* fim do else if */
        else
            imprimirArray( floor, SIZE );
    } /* fim do while */

    system( "pause" );
    return 0;
} /* fim da função main */

float receberComando( int c, int d )
{
    float comando;

    printf( "\n\n======CANVAS 50x50\n" );

    printf( "Lápis: " );

    if ( c == 0 )
        printf( "Levantado" );
    else if ( c == 1 )
        printf( "Grafite" );
    else
        printf( "Borracha" );

    printf( " | Direção: " );

    if ( d == 0 )
        printf( "Esquerda" );
    else if ( d == 1 )
        printf( "Cima" );
    else if ( d == 2 )
        printf( "Direita" );
    else
        printf( "Baixo" );

    printf( "\n" );
    
    
    printf( "8   - Levantar lápis\n"
            "2   - Lápis (modo grafite)\n"
            "0   - Lápis (modo borracha)\n"
            "4   - Virar à esquerda\n"
            "6   - Virar à direita\n"
            "5.x - Mover lápis à frente x casas (incluindo a atual)\n"
            "1   - Imprimir Canvas\n"
            "9   - Fechar programa\n" );

    while ( 1 )
    {
        printf( "Digite um comando: " );
        scanf( "%f", &comando );

        if ( pesquisaComando( comando ) )
            return comando;
        else
            printf( "Comando inválido. Tente novamente.\n" );
    } /* fim do while */
} /* fim da função receberComando */

int pesquisaComando( int comando )
{
    int comandos[ 8 ] = { 0, 1, 2, 4, 5, 6, 8, 9 };
    int menor = 0;
    int maior = 7;
    int mid;

    while ( menor <= maior )
    {
        mid = ( menor + maior ) / 2;
        
        if ( comando == comandos[ mid ] )
            return 1;
        else if ( comando > comandos[ mid ] )
            menor = mid + 1;
        else
            maior = mid - 1;
    } /* fim do while */

    return 0;
} /* fim da função pesquisaComando */

void mover( int nC, int p[], int floor[][ 50 ], int size,
            int d, int c )
{
    int i;
    int x, y, z;

    x = d % 2? p[ 0 ]: p[ 1 ];
    y = d <= 1? -1: 1;
    z = d <= 1? -2: size + 1;

    for ( i = 1; i <= nC; ++i )
    {
        if ( x + y == z )
            break;
        else
        {
            if ( d % 2 )
                p[ 0 ] = x;
            else
                p[ 1 ] = x;

            if ( c == 1 )
                floor[ p[ 0 ] ][ p[ 1 ] ] = 1;

            if ( c == 2 )
                floor[ p[ 0 ] ][ p[ 1 ] ] = 0;

            d <= 1? --x: ++x;
        } /* fim do else externo */
    } /* fim do for */

    /*floor[ p[ 0 ] ][ p[ 1 ] ] = 1;*/
} /* fim da função mover */

void imprimirArray( const int floor[][ 50 ], int size )
{
    int i;
    int l, c;

    for ( i = 0; i < size; ++i )
    {
        printf( "%2s", "_" );
    }

    printf( "\n" );

    for ( l = 0; l < size; ++l )
    {
        for ( c = 0; c < size; ++c )
            if ( !floor[ l ][ c ] )
                printf( "%2s", " " );
            else if ( floor[ l ][ c ] == 1 )
                printf( "%2s", "*" );
            else
                printf( "%2s", "#" );
        printf( "|\n" );
    } /* fim do for externo */

    for ( i = 0; i < size; ++i )
    {
        printf( "%2s", "|" );
    }

    printf( "\n" );
} /* fim da função imprimirArray */