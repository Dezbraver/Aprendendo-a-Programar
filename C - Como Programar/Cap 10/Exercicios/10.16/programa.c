/* - Questão 10.16 - */

#include <stdio.h>
#include <stdlib.h>

void displayUBits( unsigned n );
void descompactaCaracteres( unsigned n, char desc[] );

int main( void )
{
    unsigned c;
    unsigned n;
    char *desc;

    scanf( "%u", &n );
    printf( "Compacto = " );
    displayUBits( n );
    printf( "= %c\n", n );

    descompactaCaracteres( n, desc );

    for ( c = 0; c < sizeof( unsigned ); ++c ) {
        printf( "%8u = ", desc[ c ] );
        displayUBits( desc[ c ] );
        printf( "= %c\n", desc[ c ] );
    }

    system( "pause" );
    return 0;
} /* fim da função main */

void descompactaCaracteres( unsigned n, char desc[] )
{
    unsigned c;
    unsigned mask = 255;

    for ( c = 0; c < sizeof( unsigned ); ++c )
        desc[ c ] = ( n & mask << CHAR_BIT * c ) >> CHAR_BIT * c;
} /* fim da função descompactaCaracteres */

void displayUBits( unsigned n )
{
    int c;
    unsigned mask = 1 << CHAR_BIT * sizeof( unsigned ) - 1;

    for ( c = 1; c <= CHAR_BIT * sizeof( unsigned ); ++c ) {
        putchar( n & mask? '1': '0' );
        n <<= 1;

        if ( !( c % 8 ) )
            putchar( ' ' );
    }
} /* fim da função displayUBits */