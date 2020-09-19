/* - Questão 9.14 - */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    printf( "\'\n" );
    printf( "\"\n" );
    printf( "\?\n" );
    printf( "\\\n" );
    printf( "\a\n" );
    printf( "%s\b%c\n", "aqui", 'b' );
    printf( "%c\f%c\n", 'a', 'b' );
    printf( "\n\n" );
    printf( "%c\r%c\n", 'a', 'b' );
    printf( "%c\t%c\n", 'a', 'b' );
    printf( "%c\v%c\n", 'a', 'b' );
    
    system( "pause" );
    return 0;
} /* fim da função main */