/*
Lê dois números inteiros, determina e imprime se o primeiro número é
múltiplo do segundo.
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  int x, y; /* armazenam os números inteiros que seram digitados pelo usuário */
  int resto; /* armazena o valor do resto da divisão inteira entre x e y */

  printf( "Digite dois numeros inteiros: " ); /* prompt */
  scanf( "%d %d", &x, &y ); /* lê dois números inteiro do teclado */

  resto = x % y; /* calcula o resto da divisão inteira entre x e y */

  /* determina se x é ou não, multiplo de y */
  if( resto > 0 )
    printf( "%d nao eh multiplo de %d\n", x, y );

  if( resto == 0 )
    printf( "%d eh multiplo de %d\n", x, y );

  system( "pause" ); /* pausa a execução do programa para que seja pssível visualizar os resultados */
  return 0; /* informa ao sistema operacional que a execução do programa foi um sucesso */
} /* fim da função main */
