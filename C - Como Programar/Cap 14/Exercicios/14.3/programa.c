/* - Questão 14.3 - */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {
    int i;

    for ( i = 0; i < argc; ++i )
        printf( "%s%s", argv[ i ], i < argc - 1? ", ": "\n" );

    system( "pause" );
    return 0;
} /* main */