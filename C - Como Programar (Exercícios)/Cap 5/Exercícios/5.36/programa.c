/* - Questão 5.36 - */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hanoi( int n, int p1, int p2, int p3 );

int main( void )
{
  hanoi( 8, 1, 3, 2 );

  system( "pause" );
  return 0;
} /* end [main] */

void hanoi( int n, int pi, int pd, int pm )
{
  if ( n > 0 )
  {
    hanoi( n - 1, pi, pm, pd );
    printf( "%d --> %d\n", pi, pd );
    hanoi( n - 1, pm, pd, pi );
  }
} /* end [hanoi] */
