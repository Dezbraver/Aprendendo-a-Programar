/*
- Questão 4.19 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i;
  int nProduto, quantVendida;
  float soma1, soma2, soma3, soma4, soma5, somaTotal;

  somaTotal = 0;

  system( "chcp 65001 > NUL" );

  for ( i = 1; i <= 7; ++i ) {
    nProduto = 0;
    soma1 = soma2 = soma3 = soma4 = soma5 = 0;

    while ( nProduto != -1 ) {
      printf( "(-1 em qualquer um dos dois números encerra as entradas para o dia)\n" );
      printf( "Digite nº Produto Quantidade vendida 1 dia (ex.: 2 10): " );
      scanf( "%d%d", &nProduto, &quantVendida );

      if ( nProduto == -1 || quantVendida == -1 ) {
        printf( "Entradas para o dia %d completas.\n\n", i );
        break;
      } /* fim (if) */

      switch ( nProduto ) {
        case 1:
          soma1 = 2.98 * (float) quantVendida;
          break;
        case 2:
          soma2 = 4.50 * (float) quantVendida;
          break;
        case 3:
          soma3 = 9.98 * (float) quantVendida;
          break;
        case 4:
          soma4 = 4.49 * (float) quantVendida;
          break;
        case 5:
          soma5 = 6.87 * (float) quantVendida;
          break;
        default:
          printf( "Número do produto inválido!\n" );
      } /* fim (switch) */
    } /* fim (while) */
    somaTotal += soma1 + soma2 + soma3 + soma4 + soma5;
  } /* fim (for) */

  printf( "O total de revenda da semana é: %.2f\n", somaTotal );

  system( "pause" );
  return 0;
} /* fim [main] */
