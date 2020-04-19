/*
Programa que calcula a soma dos inteiros de 1 a 10 usando a estrutura de controle de repetição while.
Usando as instruções do exercício 3.4.
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main (execução principal do programa) */
int main( void )
{
  /* declarações */
  int soma, x; /* 'soma' irá armazenar o total da soma de 1 a 10 enquanto 'x' irá controlar o laço */

  /* fase de inicialização */
  soma = 0; /* iniciando 'soma' com o valor zero para evitar erros */
  x = 1; /* iniciando 'x' com 1 para evitar erros*/
  /* o erro que poderia ser causado pela não inicialização seria devido a um valor anteriormente armazenado na posição da memória representada pela variável
  para sanar este problema atribuímos um valor a variável causando uma operação destrutiva. */

  /* fase de processamento */
  while( x <= 10 ) /* loop de 'x' = 1 à 'x' = 10 */
    soma += x++; /* 'soma' somado ào valor de 'x' é atribuído á 'soma', após isso o valor de x é incrementado */

  /* fase de finalização */
  printf( "%d\n", soma ); /* imprime na tela o valor total da soma */

  system( "pause" ); /* pausa a execução do programa para possibilitar a visualização dos resultados */
  return 0; /* indica ao sistema operacional que o programa executou completamente */
} /* fim da função main */
