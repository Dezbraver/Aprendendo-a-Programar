/*
- Questão 3.23 - Imprime os números de 1 a 10 lado a lado na mesma linha com 3
espaços entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

/* início da função main */
int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int num = 0;

  /* fase de processamento de dados e finalização */
  /* imprime de 1 a 10 com 3 espaços entre os números, no final, quebra a
  linha */
  while( num <= 10 )
  {
    printf( "%d", num++ );

    if(num <= 10)
    {
      printf( "   " );
    }
    else
    {
      printf( "\n" );
    } /* fim da estrutura de controle de seleção if...else */
  } /* fim da estrutura de controle de repetição while */

  system( "pause" );
  return 0;
} /* fim da função main */
