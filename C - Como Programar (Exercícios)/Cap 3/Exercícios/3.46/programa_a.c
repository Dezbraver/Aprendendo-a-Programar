/*
- Questão 3.46 - Lê um inteiro não negativo, calcula e imprime seu fatorial.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração de variáveis */
  int numero, contador, fatorial;

  /* fase de processamento de dados */
  system( "chcp 65001 > NUL" );

  printf( "Informe um inteiro positivo: " );
  scanf( "%d", &numero );


  if ( numero == 0 )
  {
    fatorial = 1;
    contador = 0;
  } /* fim do if */
  else
  {
    fatorial = numero;
    contador = numero - 1;
  } /* fim do else */

  while ( contador > 0 )
  {
    fatorial *= contador;
    --contador;
  } /* fim do while */

  /* fase de finalização */
  printf( "O valor de %d! é %d.\n", numero, fatorial );

  system( "pause" );
  return 0;
} /* fim da função main */
