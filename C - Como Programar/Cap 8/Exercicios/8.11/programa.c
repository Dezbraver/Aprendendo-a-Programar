/* - Questão 8.11 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define SEQ 6

int main( void )
{
    int i;
    int r;
    char *artigo[] = { "o", "a", "um", "uma", "algum", "alguma" };
    char *substantivo[] = { "menino", "menina", "cão", "cidade", "carro" };
    char *verbo[] = { "dirigiu", "saltou", "correu", "caminhou", "saltou" };
    char *preposicao[] = { "para", "de", "sobre", "sob", "em" };
    char sentenca[ 38 ];

    system( "chcp 65001 > NUL" );

    srand( time( NULL ) );

    for ( i = 1; i <= 20; ++i ) {
        r = rand() % 6;
        strcat( strcat( sentenca, artigo[ r ] ), " " );
        r = rand() % 5;
        strcat( strcat( sentenca, substantivo[ r ] ), " " );
        r = rand() % 5;
        strcat( strcat( sentenca, verbo[ r ] ), " " );
        r = rand() % 5;
        strcat( strcat( sentenca, preposicao[ r ] ), " " );
        r = rand() % 6;
        strcat( strcat( sentenca, artigo[ r ] ), " " );
        r = rand() % 5;
        strcat( sentenca, substantivo[ r ] );
        r = rand() % 3;
        
        if ( r == 1 )
            strcat( sentenca, ", " );
        else if ( r == 2 )
            strcat( sentenca, ".\n" );
        else
            strcat( sentenca, " " );
        sentenca[ 0 ] = toupper( sentenca[ 0 ] );
        printf( "%s", sentenca );
        strcpy( sentenca, "" );
    }

    system( "pause" );
    return 0;
} /* fim da função main */