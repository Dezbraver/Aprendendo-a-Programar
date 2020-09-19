/* - Questão 9.8 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main( void ) {
    int i;
    int number[ SIZE ];
    int s;
    int total = 0;

    srand( time( NULL ) );

    for ( i = 0; i < SIZE; ++i )
        number[ i ] = 1 + rand() % 1000;

    for ( i = 0; i < SIZE; ++i ) {
        printf( "%d%n", number[ i ], &s );
        total += s;
        printf( " %d\n", total );
    }
    
    system( "pause" );
    return 0;
} /* fim da função main */