/*
- Questão 4.12 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i, soma;

  soma = 0;

  system( "chcp 65001 > NUL" );

  for ( i = 2; i <= 30; i += 2 )
    soma += i;

  printf( "Soma = %d\n", soma );

  system( "pause" );
  return 0;
} /* fim [main] */
