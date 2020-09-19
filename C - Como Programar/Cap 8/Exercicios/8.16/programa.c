/* - Questão 8.16 - */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ) {
    char linhaTexto[ 80 ];
    char stringPesquisa[ 80 ];
    char *searchPtr;

    printf( "Digite uma linha de texto: " );
    fgets( linhaTexto, 80, stdin );

    printf( "Digite uma string para pesquisa: " );
    fgets( stringPesquisa, 80, stdin );

    searchPtr = strstr( linhaTexto, strtok( stringPesquisa, "\n" ) );

    while ( searchPtr != NULL ) {
        printf( "%s", searchPtr );
        searchPtr = strstr( searchPtr + 1, stringPesquisa );
    }

    system( "pause" );
    return 0;
} /* fim da função main */