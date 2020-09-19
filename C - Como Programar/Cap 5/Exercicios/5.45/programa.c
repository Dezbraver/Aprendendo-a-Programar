/* - Questão 5.45 - */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
  int x, y;
  double rad;
  double z;
  double abs = -4.5;

  system( "chcp 65001 > NUL" );

  printf( "%2s\t%12s\t%12s\t%12s\t%12s\n",
    "n", "sqrt", "exp", "log", "log10" );

  for ( x = 1; x <= 10; ++x )
    printf( "%2d\t%12f\t%12f\t%12f\t%12f\n",
      x, sqrt( x ), exp( x ), log( x ), log10( x ) );

  printf( "\n%4s\t%12s\t%12s\t%12s\n",
    "n", "fabs", "ceil", "floor" );

  for ( y = 1; y <= 10; ++y ) {
    printf( "%4.1f\t%12.1f\t%12.1f\t%12.1f\n",
      abs, fabs( abs ), ceil( abs ), floor( abs ) );
    ++abs;
  } /* end (for) */

  printf( "\n%4s%8s\t%12s\n",
    "x", "y", "pow(x, y)" );

  for ( x = 0, y = 9; x <= 9; ++x, --y ) {
    printf( "%4d%8d\t%12.1f\n",
      x, y, pow( x, y ) );
  } /* end (for) */

  printf( "\n%4s%8s\t%12s\n",
    "x", "z", "fmod(x, z)" );

  for ( x = 0, z = 0.5; x <= 9; ++x, z += 0.5 )
    printf( "%4d%8.1f\t%12.1f\n",
      x, z, fmod( x, z ) );

  printf( "\n%2s\t%12s\t%12s\t%12s\n",
    "n", "sin", "cos", "tan" );

  for ( x = 30; x <= 60; x += 15 )
  {
    /* M_PI é a constante com o valor de pi da biblioteca math */
    rad = M_PI / ( 180 / x );
    printf( "%2d°\t%12f\t%12f\t%12f\n",
      x, sin( rad ), cos( rad ), tan( rad ) );
  } /* end (for) */
} /* end [main] */
