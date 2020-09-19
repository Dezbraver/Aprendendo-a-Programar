/*
- Questão 4.32 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i, j;
  int espacos, asteriscos;
  int tamanho;

  tamanho = 0;
  asteriscos = 1;

  system( "chcp 65001 > NUL" );
  
  do {
    printf( "Digite um número ímpar (entre 1 e 19) para o tamanho do losango: " );
    scanf( "%d", &tamanho );
  } while ( !( tamanho % 2 ) || tamanho < 1 || tamanho > 19 );

  for ( i = -tamanho / 2; i <= tamanho / 2; ++i )
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
