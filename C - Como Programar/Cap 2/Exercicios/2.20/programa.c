/*
Lê o raio de um círculo e informa o diâmetro, a circunferência e a área do círculo.
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* inicio da função main */
int main( void )
{
  int raio; /* raio do círculo informado pelo usuário */

  printf( "Digite o raio do circulo: " ); /* prompt */
  scanf("%d", &raio); /* lê o raio de um círculo (inteiro) */

  printf( "O diametro eh %d\n", 2 * raio ); /* calcula e imprime na tela o diâmetro */
  printf( "A circunferencia eh %f\n", 2 * 3.14159 * raio ); /* calcula e imprime na tela a circunferência */
  printf( "A area do circulo eh %f\n", 3.14159 * raio * raio ); /* calcula e imprime na tela a área do círculo */

  system( "pause" ); /* pausa a execução do programa para visualização dos resultados */
  return 0; /* informa ao sistema operacional que a execução do programa foi um sucesso */
} /* fim da função main */
