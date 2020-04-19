/* Calcula o produto de três números inteiros */

/* diretivas ao pré-processador */
#include <stdio.h>
#include <stdlib.h> /* inclui cabeçalho necessário para a compilação de referência a função system( "pause" ) */

/* início da função/bloco main */
int main( void )
{
  int num1, num2, num3; /* números inteiros a serem digitados pelo usuário */
  int resultado; /* resultado do produto dos três inteiros num1, num2 e num3 */

  printf( "Digite 3 numeros inteiros: " ); /* prompt */
  scanf( "%d%d%d", &num1, &num2, &num3 ); /* lê três números inteiros a partir do teclado */

  /*resultado = num1 * num2 * num3;*/ /* cálculo do produto dos três inteiros */
  resultado = num1 * num2 * num2 * num2 + 7;
  printf( "O Produto dos 3 numeros eh: %d\n", resultado ); /* imprime o resultado */

  system( "pause" ); /* pausa a execução do programa para visualização do resultado */
  return 0; /* informa ao sistema operacional que o programa foi executado com sucesso */
} /* fim da função/bloco main */
