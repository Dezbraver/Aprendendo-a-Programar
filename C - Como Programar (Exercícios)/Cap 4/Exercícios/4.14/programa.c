/*
- Questão 4.14 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  system( "chcp 65001 > NUL" );

  int i, j, produto;

  for ( i = 1; i <= 5; ++i ) {
    produto = 1;

    for ( j = 1; j <= i; ++j ) {
      produto *= j;
    } /* fim do ((for)) */

    printf( "%12d!\t%12d\n", i, produto );
  } /* fim do (for) */

  system( "pause" );
  return 0;
} /* fim [main] */
