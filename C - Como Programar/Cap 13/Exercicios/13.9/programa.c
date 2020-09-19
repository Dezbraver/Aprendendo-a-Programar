/* - Questão 13.9 - */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define PRINTARRAY( a, s ) \
for ( int i = 0; i < s; i += 1 )\
    printf( "%d%c", a[ i ], i != s - 1? ' ': '\n' );\

int main( void ) {
    int array[ SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    PRINTARRAY( array, SIZE );

    system( "pause" );
    return 0;
} /* main */