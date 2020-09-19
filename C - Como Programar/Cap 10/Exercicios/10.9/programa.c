/* - Questão 10.9 - */

#include <stdio.h>
#include <stdlib.h>

union pontoFlutuante {
    float f;
    double d;
    long double x;
};

typedef union pontoFlutuante PontoFlutuante;

int main( void )
{
    int c = 97;
    PontoFlutuante f;
    PontoFlutuante d;
    PontoFlutuante x;

    scanf( "%f", &f );
    printf( "%f\n%lf\n%Lf\n\n", f.f, f.d, f.x );

    scanf( "%lf", &d );
    printf( "%f\n%lf\n%Lf\n\n", d.f, d.d, d.x );

    scanf( "%Lf", &x );
    printf( "%f\n%lf\n%Lf\n\n", x.f, x.d, x.x );

    system( "pause" );
    return 0;
} /* fim da função main */

/* Não pelo mesmo motivo da questão passada, porém, nas versões mais novas do compilador gcc
o tipo double e long double são equivalentes, então o tipo que vier antes na união será
escolhido e consequentemente o tipo que vier depois (juntamente com sua variável correspondente)
será desprezado */