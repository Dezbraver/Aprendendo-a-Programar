/* - Questão 9.11 - */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int i;

    for ( i = 1; i <= 5; ++i )
        printf( "%.*f\n", i, 100.453627 );

    system( "pause" );
    return 0;
} /* fim da função main */