/* - Questão 13.5 - */

#include <stdio.h>
#include <stdlib.h>

#define SUM( x, y ) ( ( x ) + ( y ) )

int main( void ) {
    system( "chcp 65001 > NUL" );

    printf( "A soma de x e y é %d\n", SUM( 6, 7 ) );

    system( "pause" );
    return 0;
} /* main */