/*
Programa que calcula x elevado a potência y. Deve ter uma estrutura de controle while.
*/

/* diretivas ào pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main (execução principal do programa) */
int main( void )
{
  /* fase de declaração das variáveis */
  int x, y, i, potencia; /* declaração das variáveis inteiras */

  /* fase de inicialização das variáveis */
  i = 1; /* inicia 'i' com o valor 1 */
  potencia = 1; /* inicia 'potencia' com o valor 1 */

  /* fase de leitura de valores */
  printf( "Insira o valor de x: " ); /* prompt x */
  scanf( "%d", &x ); /* lê o inteiro x */
  printf( "Insira o valor de y: " ); /* prompt y */
  scanf( "%d", &y ); /* lê o inteiro y */

  /* fase de processamento dos valores */
  while( i <= y ) /* verifica de 'i' é menor ou igual a y */ {
    potencia *= x; /* multiplica 'potencia' por 'x' e atribui o resultado à 'potencia' */
    ++i; /* incrementa 'i' */
  }

  /* fase de finalização */
  printf( "%d elevado a potencia %d eh igual a %d\n", x, y, potencia );

  system( "pause" ); /* pausa a execução do programa para ser possível a visualização dos resultados (standalone) */
  return 0; /* informa ao sistema que a execução do programa foi completa */
} /* fim da função main */
