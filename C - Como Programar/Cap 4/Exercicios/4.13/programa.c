/*
- Questão 4.13 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int produto;
  int i;

  system( "chcp 65001 > NUL" );

  produto = 1;

  for ( i = 1; i <= 15; i += 2 )
    produto *= i;

  printf( "Produto = %d\n", produto );

  system( "pause" );
  return 0;
} /* fim [main] */
