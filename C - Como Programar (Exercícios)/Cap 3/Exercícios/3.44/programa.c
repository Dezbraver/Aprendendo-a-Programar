/*
- Questão 3.44 - Recebe 3 valores float diferentes de zero, determina e imprime
se eles poderiam representar os lados de um triângulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int contador = 1;
  float numero, a, b, c, maior, soma;

  /* fase de processamento de dados e finalização */
  system( "chcp 65001 > NUL" );

  while ( contador <= 3 )
  {
  printf( "Informe o %dº lado do triângulo: ", contador );
  scanf( "%f", &numero );
  if ( contador == 1 )
    a = numero;
  if ( contador == 2 )
    b = numero;
  if ( contador == 3 )
    c = numero;

  if ( numero != 0 )
    ++contador;
  }

  maior = a;
  soma = b + c;
  if ( b > maior )
  {
      maior = b;
      soma = a + c;
  } /* fim do if */
  if ( c > maior )
  {
    maior = c;
    soma = a + b;
  } /* fim do if */

  if ( maior < soma )
    printf( "Sim, esses números formam um triângulo.\n" );
  else
    printf( "Não, esses números não formam um triângulo.\n" );

  system( "pause" );
  return 0;
} /* fim da função main */
