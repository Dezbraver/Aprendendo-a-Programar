/*
Recebe dois inteiros e informa o número maior ou se os dois são iguais
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* inicio da função main */
int main( void )
{
  int x, y; /* Os dois números a serem recebidos através do usuário */

  printf("Digite dois numeros inteiros: "); /* prompt */
  scanf("%d %d", &x, &y); /* lê dois números inteiros */

  if( x > y ) /* verifica se x é maior que y */
    printf("%d eh maior\n", x);

  if( x < y ) /* verifica se y é maior que x */
    printf("%d eh maior\n", y);

  if( x == y ) /* verifica se x é igual a y */
    printf("Esses numeros sao iguais\n");

  system( "pause" ); /* pausa a execução do programa para a visualização dos resultados */
  return 0; /* informa ao sistema que a execução do programa foi um sucesso */
} /* fim da função main */
