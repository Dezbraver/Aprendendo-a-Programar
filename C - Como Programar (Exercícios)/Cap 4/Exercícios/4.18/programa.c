/*
- Questão 4.18 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i, j;
  int valor;

  system( "chcp 65001 > NUL" );

  i = 1;
  while ( i <= 5 )
  {
    printf( "(%d) Digite um inteiro entre 1 e 30: ", i );
    scanf( "%d", &valor );

    if ( valor < 1 || valor > 30 ) {
      printf( "Valor inválido. Tente novamente.\n" );
      continue;
    } /* fim do (if) */

    for ( j = 1; j <= valor; ++j )
      printf( "*" );

    printf( "\n" );

    ++i;
  } /* fim (while) */

  system( "pause" );
  return 0;
} /* fim [main] */
