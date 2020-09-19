/* - Questão 9.13 - */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int fahrenheit;
    float celsius;

    system( "chcp 65001 > NUL" );

    printf( "%10s%10s\n", "Fahrenheit", "Celsius" );
    for ( fahrenheit = 0; fahrenheit <= 212; ++fahrenheit ) {
        celsius = 5.0 / 9.0 * ( fahrenheit - 32 );
        printf( "%10d%+10.3f\n", fahrenheit, celsius );
    }
    
    system( "pause" );
    return 0;
} /* fim da função main */