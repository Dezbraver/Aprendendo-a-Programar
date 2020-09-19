/* - Questão 10.8 - */

#include <stdio.h>
#include <stdlib.h>

union integer {
    char c;
    short s;
    int i;
    long b;
};

typedef union integer Integer;

int main( void )
{
    Integer caractere;
    Integer pInteiro;
    Integer inteiro;
    Integer lInteiro;

    scanf( "%c", &caractere );
    printf( "%c\n%hd\n%d\n%ld\n\n", caractere.c, caractere.s, caractere.i, caractere.b );

    scanf( "%hd", &pInteiro );
    printf( "%c\n%hd\n%d\n%ld\n\n", pInteiro.c, pInteiro.s, pInteiro.i, pInteiro.b );

    scanf( "%d", &inteiro );
    printf( "%c\n%hd\n%d\n%ld\n\n", inteiro.c, inteiro.s, inteiro.i, inteiro.b );

    scanf( "%ld", &lInteiro );
    printf( "%c\n%hd\n%d\n%ld\n", lInteiro.c, lInteiro.s, lInteiro.i, lInteiro.b );

    system( "pause" );
    return 0;
} /* fim da função main */

/* Não pois quando inserimos valores muito altos podemos acabar extrapolando o
limite de valor de certos tipos obtendo assim resultados indesejados */