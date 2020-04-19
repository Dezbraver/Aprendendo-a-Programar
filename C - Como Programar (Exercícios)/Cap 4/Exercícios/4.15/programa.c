/*
- Questão 4.15 -
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
  double valor;
  double principal = 1000.0;
  int taxa;
  int ano;

  system( "chcp 65001 > NUL" );

  for ( taxa = 5; taxa <= 10; ++taxa ) {
    printf( "Taxa de %d%c\n", taxa, '%' );
    printf( "%4s%21s\n", "Ano", "Valor na conta" );

    for ( ano = 1; ano <= 10; ++ano )
    {
        valor = principal * pow( 1.0 + taxa * .01, ano );

        printf( "%4d%21.2f\n", ano, valor );
    } /* fim do ((for)) */
  } /* fim do (for) */

  system( "pause" );
  return 0;
} /* fim [main] */
