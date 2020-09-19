/*
Programa que lê um inteiro determina e imprime se ele é par ou ímpar
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  int num; /* armazena o número inteiro que o usuário vai digitar */
  int resto; /* armazena o valor da divisão inteira (módulo) por 2 */

  printf( "Digite um numero inteiro: " ); /* prompt */
  scanf( "%d", &num ); /* lê um número inteiro do teclado */

  resto = num % 2; /* calcula o resto da divisão inteira por 2 */

  /* determina se o número é ímpar */
  if( resto > 0 )
    printf( "%d eh impar\n", num );

  if( resto < 0 )
    printf( "%d eh impar\n", num );

  /* determina se o número é par */
  if( resto == 0 )
    printf( "%d eh par\n", num );

  system( "pause" ); /* pausa a execução do programa para a visualização dos resultados */
  return 0; /* informa ao sistema operacional que a execução do programa foi um sucesso */
} /* fim da função main */
