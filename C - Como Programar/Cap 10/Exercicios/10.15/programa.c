/* - Questão 10.15 - */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

void displayUBits( unsigned n );
unsigned compactaCaracteres( char c[], unsigned size );

int main( void )
{
    unsigned cont;
    char c[ SIZE ];
    unsigned compacto;

    for ( cont = 0; cont < SIZE; ++cont ) {
        scanf( "%c", &c[ cont ] );
        
        printf( "%8c%s", c[ cont ], " = " );
        displayUBits( c[ cont ] );
        printf( " = %u\n", c[ cont ] );
    }

    compacto = compactaCaracteres( c, SIZE );
    
    printf( "%11s", "Compacto = " );
    displayUBits( compacto );
    printf( " = %u\n", compacto );

    system( "pause" );
    return 0;
} /* fim da função main */

unsigned compactaCaracteres( char c[], unsigned size )
{
    unsigned cont = 0;
    unsigned compacto;

    compacto = c[ cont ];
    for ( cont = 1; cont < size; ++cont ) {
        compacto <<= 8;
        compacto |= c[ cont ];
    }

    return compacto;
} /* fim da função compactaCaracteres */

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