/* - Questão 8.13 - */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printLatinWord( char *tokenPtr );

int main( void ) {
    char *frase;
    char *tokenPtr;

    printf( "Digite uma frase: " );
    fgets( frase, 80, stdin );
    
    tokenPtr = strtok( frase, " \n" );

    while ( tokenPtr != NULL ) {
        printLatinWord( tokenPtr );
        putchar( ' ' );
        tokenPtr = strtok( NULL, " \n" );
    }

    printf( "\n" );

    system( "pause" );
    return 0;
} /* fim da função main */

void printLatinWord( char *tokenPtr ) {
    char copia[ 80 ];

    strcat( strncat( strcpy( copia, tokenPtr + 1 ), tokenPtr, 1 ), "ei" );
    printf( "%s", copia );
} /* fim da função printLatinWord */