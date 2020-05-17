/* - Questão 5.11 - */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double arredInteiro( double numero );
double arredDecimos( double numero );
double arredCentesimos( double numero );
double arredMilesimos( double numero );

int main( void )
{
  double x;

  system( "chcp 65001 > NUL" );

  do
  {
    printf( "Digite um valor para ser arredondado (0 para sair): " );
    scanf( "%lf", &x );

    printf( "\nArredondamentos:\n" );
    printf( "Inteiro: %f = %f\n", x, arredInteiro( x ) );
    printf( "Décimos: %f = %f\n", x, arredDecimos( x ) );
    printf( "Centésimos: %f = %f\n", x, arredCentesimos( x ) );
    printf( "Milésimos: %f = %f\n", x, arredMilesimos( x ) );
  } while ( x != 0 );

  system( "pause" );
  return 0;
} /* fim [main] */

double arredInteiro( double numero )
{
  return floor( numero + .5 );
} /* fim [arredInteiros] */

double arredDecimos( double numero )
{
  return floor( numero * 10 + .5 ) / 10;
} /* fim [arredDecimos] */

double arredCentesimos( double numero )
{
  return floor( numero * 100 + .5 ) / 100;
} /* fim [arredCentesimos] */

double arredMilesimos( double numero )
{
  return floor( numero * 1000 + .5 ) / 1000;
} /* fim [arredMilesimos] */
