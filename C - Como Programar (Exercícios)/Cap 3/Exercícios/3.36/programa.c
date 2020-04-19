/*
- Questão 3.36 - Lê um número inteiro contendo apenas 0s e 1s e imprime seu
equivalente decimal.
*/

#include <stdio.h>
#include <stdlib.h>

/* início da função main */
int main( void )
{
  /* fase de inicialização de variáveis */
  int numero, numero_Separado, decimal = 0, multiplicador = 1;

  system( "chcp 65001 > NUL" );

  /* fase de processamento de dados */
  printf( "Informe um número inteiro contendo apenas 0s e 1s: " );
  scanf( "%d", &numero );

  while ( numero > 0 )
  {
    numero_Separado = numero % 10;
    numero /= 10;
    decimal += numero_Separado * multiplicador;

    multiplicador *= 2;
  } /* fim do while */

  printf( "O equivalente decimal é %d\n", decimal );
  system( "pause" );
  return 0;
} /* fim da função main */
