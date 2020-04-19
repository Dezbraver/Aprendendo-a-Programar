/*
- Questão 4.26 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i, j, par_impar;
  float pi;
  int max;

  for ( i = 1; i <= 1000000000; ++i ) {
    pi = 4.0;
    max = 1;

    max += 2 * i;

    for ( j = 3, par_impar = 1; j <= max; ++par_impar, j += 2 ) {
      if ( par_impar % 2 ) {
        pi -= 4.0 / (float) j; }
      else {
        pi += 4.0 / (float) j; }
    } /* fim ((for)) */

    printf( "%d termos = %f\n", i, pi );

  } /* fim (for) */

  system( "pause" );
  return 0;
} /* fim [main] */

/* 117 já que 118 = 3.149996 */
/* 1692 já que 1693 = 3.141000 */
/* 10136 já que 10137 = 3.141500 */
/* 153918 já que 153919 = 3.141590 */
