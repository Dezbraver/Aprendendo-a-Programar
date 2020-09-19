/* - Questão 8.21 - */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

void alphabetSort( char **array, int size );

int main( void ) {
    char *cidades[ SIZE ] =
        { "Cerro Corá", "Tangará", "Afonso Bezerra", "Natal", "Caicó", "Passa e Fica", "Bodó", "Mossoró", "Macaíba", "Rio do Fogo" };
    int i;

    system( "chcp 65001 > NUL" );

    alphabetSort( cidades, SIZE );

    printf( "cidades = { " );
    for ( i = 0; i < SIZE; ++i )
        printf( "%s%s", cidades[ i ], i != SIZE - 1? ", ": " }\n" );

    system( "pause" );
    return 0;
} /* fim da função main */

void alphabetSort( char **array, int size ) {
    int passada;
    int troca;
    int i;
    unsigned int n;
    char *auxiliar;
    char caractere1[ 2 ];
    char caractere2[ 2 ];

    for ( passada = 1; passada < size; ++passada ) {
        troca = 0;
        
        for ( i = 0; i < size - passada; ++i ) {
            n = 0;

            do {
                caractere1[ 0 ] = array[ i ][ n ];
                caractere2[ 0 ] = array[ i + 1 ][ n ];
                caractere1[ 1 ] = caractere2[ 1 ] = '\0';
                ++n;
            } while( strcmp( caractere1, caractere2 ) == 0 );
            
            if ( strcmp( caractere1, caractere2 ) > 0 ) {
                auxiliar = array[ i ];
                array[ i ] = array[ i + 1 ];
                array[ i + 1 ] = auxiliar;
                troca = 1;
            }
        }

        if ( !troca )
            break;
    }
} /* fim da função alphabetSort */