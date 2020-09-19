/* - Questão 6.19 - */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 11
#define PLAYS 36000
#define APROX 100

int d6( void );
void printResults( const int a[], int size, int aprox );
int fair( int a, int scale, int aprox );

int main( void )
{
    int i;
    int results[ SIZE ] = { 0 };
    int f[ SIZE ] = { 0 };
    int sum;

    srand( time( NULL ) );

    system( "chcp 65001 > NUL" );

    for ( i = 1; i <= PLAYS; ++i )
    {
        sum = d6() + d6();
        ++results[ sum - 2 ];
    } /* end (for) */

    printResults( results, SIZE, APROX );

    system( "pause" );
    return 0;
} /* end [main] */

int d6( void )
{
    return 1 + rand() % 6;
} /* end [d6] */

void printResults( const int a[], int size, int aprox )
{
    int i;
    int scale;

    printf( "%12s%14s%15s\n", "Combinação", "Ocorrências", "Razoabilidade" );

    for ( i = 0, scale = -5; i < size; ++scale, ++i )
    {
        printf( "%10d%13d", i + 2, a[ i ] );

        if ( fair( a[ i ], fabs( scale ), aprox ) )
            printf( "%16s\n", "é justo" );
        else
            printf( "%17s\n", "não é justo" );
        
    } /* end (for) */
} /* end [printResults] */

int fair( int a, int scale, int aprox )
{
    int average = ( 6 - scale ) * 1000;
    int min = average - aprox;
    int max = average + aprox;

    if ( a >= min && a <= max )
        return 1;
    else
        return 0;
} /* end [fair] */