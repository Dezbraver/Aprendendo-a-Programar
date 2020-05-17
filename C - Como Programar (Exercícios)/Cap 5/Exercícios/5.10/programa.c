/* - Questão 5.10 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
  double x, y;

  system( "chcp 65001 > NUL" );

  do
  {
    printf( "Digite um número (0 para sair): " );
    scanf( "%lf", &x );

    y = floor( x + .5 );

    printf( "%.1f = %.1f\n", x, y );
  } while ( y != 0 );

  system( "pause" );
  return 0;
} /* fim [main] */
