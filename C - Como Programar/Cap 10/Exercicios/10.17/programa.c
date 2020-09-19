/* - Questão 10.17 - */

#include <stdio.h>
#include <stdlib.h>

void displayUBits( unsigned n );
void reverseBits( unsigned n );

int main( void )
{
    unsigned n;

    scanf( "%u", &n );

    printf( "%9u = ", n );
    displayUBits( n );

    printf( "Invertido = " );
    reverseBits( n );

    system( "pause" );
    return 0;
} /* fim da função main */

void reverseBits( unsigned n )
{
    displayUBits( ~n );
} /* fim da função reverseBits */

void displayUBits( unsigned n )
{
    unsigned c;
    unsigned mask = 1 << CHAR_BIT * sizeof( unsigned ) - 1;

    for ( c = 1; c <= CHAR_BIT * sizeof( unsigned ); ++c ) {
        putchar( n & mask? '1': '0' );
        n <<= 1;

        if ( !( c % 8 ) )
            putchar( ' ' );
    }

    printf( "\n" );
} /* displayUBits */