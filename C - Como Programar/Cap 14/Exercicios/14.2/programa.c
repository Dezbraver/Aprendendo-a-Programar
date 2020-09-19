/* - Questão 14.2 - */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int product( int i, ... );

int main( void ) {
    system( "chcp 65001 > NUL" );

    printf( "O produto é %d\n", product( 3, 1, 2, 3 ) );
    printf( "O produto é %d\n", product( 2, 5, 5 ) );
    printf( "O produto é %d\n", product( 1, 0 ) );

    system( "pause" );
    return 0;
} /* main */

int product( int i, ... ) {
    unsigned j;
    int multiply = 1;
    va_list m;

    va_start( m, i );

    for ( j = 1; j <= i; ++j )
        multiply *= va_arg( m, int );
        
    va_end( m );

    return multiply;
} /* product */