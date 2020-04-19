/*
- Questão 4.35 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int x, b;

  for ( x = 1, b = 0; x <= 10 && b == 0; )
  {
    if ( x == 5 )
      b = 1;
    else
    {
      printf( "%d ", x );
      x++;
    } /* fim (else) */
  } /* fim (for) */

  printf( "\nSaiu do loop em x == %d\n", x );

  system( "pause" );
  return 0;
} /* fim [main] */
