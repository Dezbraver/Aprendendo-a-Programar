/*
Imprime os números de 1 a 4 na mesma linha utilizando 3 métodos diferentes
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  /* a */
  printf("1 2 3 4\n"); /* sem especificadores de conversão */

  /* b */
  printf("%d %d %d %d\n", 1, 2, 3, 4); /* com quatro especificadores de conversão */

  /* c */
  /* quatro instruções printf  */
  printf("1 ");
  printf("2 ");
  printf("3 ");
  printf("4\n");

  system( "pause" ); /* pausa a execução do programa para a visualização dos resultados */
  return 0; /* informa ao sistema que a execução do programa foi um sucesso */
} /* fim da função main */
