/* - Questão 5.15 - */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hipotenusa( double b, double c );

int main( void )
{
  int i;
  double lado_1, lado_2;

  for ( i = 1; i <= 3; ++i )
  {
    printf( "Digite o lado 1: " );
    scanf( "%lf", &lado_1 );
    printf( "Digite o lado 2: " );
    scanf( "%lf", &lado_2 );
    printf( "Hipotenusa = %.2f\n\n", hipotenusa( lado_1, lado_2 ) );
  } /* fim (for) */

  system( "pause" );
  return 0;
} /* fim [main] */

double hipotenusa( double b, double c )
{
  return sqrt( pow( b, 2 ) + pow( c, 2 ) );
} /* fim [hipotenusa] */

/*
Digite o lado 1: 3
Digite o lado 2: 4
Hipotenusa = 5.00

Digite o lado 1: 5
Digite o lado 2: 12
Hipotenusa = 13.00

Digite o lado 1: 8
Digite o lado 2: 15
Hipotenusa = 17.00
*/
