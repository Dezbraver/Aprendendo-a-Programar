/*
- Questão 4.37 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int x;

  system( "chcp 65001 > NUL" );

  for ( x = 1; x <= 10; x++ )
  {
    if ( x == 5 );
    else
      printf( "%d", x );
  } /* fim (for) */

  printf( "\nUsou \"continue\" para pular a exibição do valor 5\n" );

  system( "pause" );

  return 0;
} /* fim [main] */
