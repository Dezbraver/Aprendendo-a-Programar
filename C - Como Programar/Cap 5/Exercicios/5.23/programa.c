/* - Questão 5.23 - */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int timeSeconds( int h, int m, int s );

int main( void )
{
  printf( "resultado ( %d - %d ) = %.0f segundos\n", timeSeconds( 18, 28, 37 ),
                                          timeSeconds( 4, 58, 15 ),
         fabs( timeSeconds( 18, 28, 37 ) - timeSeconds( 4, 58, 15 ) ) );

  system( "pause" );
  return 0;
} /* fim [main] */

int timeSeconds( int h, int m, int s )
{
  if ( h >= 0 || h <= 23 || m >= 0 || m <= 59 || s >= 0 || s <= 59 )
  {
    if ( h >= 12 )
      h -= 12;

    return ( h * 60 + m ) * 60 + s;
  } /* fim (if) */
  else
    return -1;
} /* fim [timeSeconds] */
