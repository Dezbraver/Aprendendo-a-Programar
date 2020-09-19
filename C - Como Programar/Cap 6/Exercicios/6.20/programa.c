/* - Questão 6.20 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 21

enum Status { CONTINUE, WON, LOST };

int rollDice( void );
void craps( int w[], int l[], int m[] );

int main( void )
{
    int i;
    int wons[ SIZE ] = { 0 };
    int sumWons = 0;
    int losts[ SIZE ] = { 0 };
    int sumLosts = 0;
    int media[ 1 ] = { 0 };
    double atFirst, prolonged;

    /*srand( time( NULL ) );*/

    system( "chcp 65001 > NUL" );

    for ( i = 1; i <= 1000; ++i )
        craps( wons, losts, media );

    printf( "a) e b)\n" );
    printf( "%12s%10s%10s\n", "Nº Jogadas", "Vitórias", "Derrotas" );

    for ( i = 1; i < SIZE; ++i )
        printf( "%11d%9d%10d\n", i, wons[ i ], losts[ i ] );

    printf( "%11s%9d%10d\n", "> 20", wons[ 0 ], losts[ 0 ] );
    
    for ( i = 0; i < SIZE; ++i )
        sumWons += wons[ i ];

    for ( i = 0; i < SIZE; ++i )
        sumLosts += losts[ i ];

    atFirst = (double) wons[ 1 ] / 10;
    prolonged = ( (double) sumWons - wons[ 1 ] ) / 10;

    printf( "\nc)\n" );
    printf( "A chance de se ganhar de primeira foi de %.2f%c\n",
       atFirst, '%' );

    printf( "A chance de se ganhar por ponto é %.2f%c\n",
       prolonged, '%' );

    printf( "A chance total de se ganhar é %.2f%c\n", atFirst + prolonged, '%' );

    printf( "\nd)\n" );
    printf( "A média de lançamentos é %.3f\n", (double) media[ 0 ] / 1000 );

    printf( "\ne)\n" );
    printf( "As chances de se vencer" );

    if ( prolonged > atFirst )
        printf( " aumentam " );
    else if ( prolonged == atFirst )
        printf( " são iguais " );
    else
        printf( " diminuem " );

    printf( "se o jogo se prolongar\n" );

    system( "pause" );
    return 0;
} /* end [main] */

void craps( int w[], int l[], int m[] )
{
    int sum;
    int myPoint;
    int count = 1;

    enum Status gameStatus;

    sum = rollDice();

    switch ( sum )
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        /*printf( "Ponto é %d\n", myPoint );*/
        break;
    } /* end (switch) */

    while ( gameStatus == CONTINUE )
    {
        ++count;
        sum = rollDice();

        if ( sum == myPoint )
            gameStatus = WON;
        else
            if ( sum == 7 )
                gameStatus = LOST;
    } /* end (while) */

    if ( gameStatus == WON )
    {
        if ( count > 20 )
            ++w[ 0 ];
        else
            ++w[ count ];

        /*printf( "Jogador Vence\n" );*/
    } /* end (if) */
    else
    {
        if ( count > 20 )
            ++l[ 0 ];
        else
            ++l[ count ];

        /*printf( "Jogador Perde\n" );*/
    } /* end (else) */

    m[ 0 ] += count; /* armazena a soma para calcular a média posteriormente */
} /* end [craps] */

int rollDice( void )
{
    int die1;
    int die2;
    int workSum;

    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    workSum = die1 + die2;

    /*printf( "Jogador rolou %d + %d = %d\n", die1, die2, workSum );*/

    return workSum;
} /* end [rollDice] */