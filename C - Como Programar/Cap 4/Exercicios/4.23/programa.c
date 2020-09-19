/*
- Questão 4.23 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int valor;
  int principal = 1000;
  int reais = 0;
  int centavos = 0;
  int ano;
  int i;

  printf( "%4s%21s\n", "Ano", "Valor na conta" );

  for ( ano = 1; ano <= 10; ++ano )
  {
    valor = principal * 100;

    for ( i = 1; i <= ano; ++i )
      valor = valor + ( valor / 20 );

    reais = valor / 100;
    centavos = valor % 100;

    printf( "%4d%18d,", ano, reais );

    if ( centavos / 10 )
      printf( "%d\n", centavos );
    else
      printf( "0%d\n", centavos );
  } /* fim (for) */

  system( "pause" );
  return 0;
} /* fim [main] */
