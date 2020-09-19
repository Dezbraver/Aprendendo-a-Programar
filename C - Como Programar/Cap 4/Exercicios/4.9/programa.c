/*
- Questão 4.9 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int contMax, i, valor, soma;

  soma = 0;

  system( "chcp 65001 > NUL" );

  printf( "Digite o número de inteiros a serem lidos seguido da sequência de inteiros: " );
  scanf( "%d", &contMax );

  for ( i = 1 ; i <= contMax; ++i )
  {
    scanf( "%d", &valor );
    soma += valor;
  } /* fim (for) */

  printf( "%d\n", soma );

  system( "pause" );
  return 0;
} /* fim da função main */
