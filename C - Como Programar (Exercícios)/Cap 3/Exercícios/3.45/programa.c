/*
- Questão 3.45 - Recebe 3 valores float diferentes de zero, determina e imprime
se eles poderiam representar os lados de um triângulo retângulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int contador = 1;
  float numero, a, b, c, hipotenusa, soma_catetos;

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

  a *= a;
  b *= b;
  c *= c;
  hipotenusa = a;
  soma_catetos = b + c;
  if ( b > hipotenusa )
  {
      hipotenusa = b;
      soma_catetos = a + c;
  } /* fim do if */
  if ( c > hipotenusa )
  {
    hipotenusa = c;
    soma_catetos = a + b;
  } /* fim do if */

  if ( hipotenusa == soma_catetos )
    printf( "Sim, esses números formam um triângulo retângulo.\n" );
  else
    printf( "Não, esses números não formam um triângulo retângulo.\n" );

  system( "pause" );
  return 0;
} /* fim da função main */
