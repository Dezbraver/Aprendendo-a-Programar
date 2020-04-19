/*
- Questão 3.35 - Lê um número inteiro de cinco dígitos e determinar se ele é ou
não um palíndromo.
*/

/* diretivas ao pré-processador */
#include <stdio.h>
#include <stdlib.h>

/* início da função main */
int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int numero, a, b, c , d, e;

  /* fase de processamento de dados */
  system( "chcp 65001 > NUL" );

  printf( "Informe um inteiro de cinco dígitos: " );
  scanf( "%d", &numero );

  a = numero / 10000;
  numero %= 10000;
  b = numero / 1000;
  numero %= 1000;
  c = numero / 100;
  numero %= 100;
  d = numero / 10;
  e = numero % 10;

  printf( "%d %d %d %d %d\n", a, b, c, d, e );

  if ( a == e )
    if ( b == d )
      printf( "É palíndromo!\n" );
    else
      printf( "Não é palíndromo!\n" );
  else
    printf( "Não é palíndromo!\n" );


  /* fase de finalização */


  system( "pause" );
  return 0;
} /* fim da função main */
