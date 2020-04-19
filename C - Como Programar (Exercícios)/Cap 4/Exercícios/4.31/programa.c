/*
- Questão 4.31 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i, j;
  int espacos, asteriscos;

  asteriscos = 1;

  for ( i = -4; i <= 4; ++i )
  {
    if ( i < 0 )
      espacos = -i;
    else
      espacos = i;

    for ( ; espacos > 0; --espacos )
      printf( " " );

    for ( j = asteriscos; j > 0; --j )
      printf( "*" );

    printf( "\n" );

    if ( i < 0 )
      asteriscos += 2;
    else
      asteriscos -= 2;
  } /* fim (for) */

  system( "pause" );
  return 0;
} /* fim [main] */
