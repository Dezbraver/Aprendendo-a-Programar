/*
Imprime os equivalentes inteiros de algumas letras maiúsculas, minúsculas,
dígitos e símbolos especiais.
No mínimo determine os equivalentes inteiros de:
A B C a b c 0 1 2 $ * + / e o caractere de espaço em branco.
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  /* Imprime os equivalentes inteiros dos respectivos caracteres */
  printf( "A = %d\nB = %d\nC = %d\n", 'A', 'B', 'C' );
  printf( "a = %d\nb = %d\nc = %d\n", 'a', 'b', 'c' );
  printf( "0 = %d\n1 = %d\n2 = %d\n", '0', '1', '2' );
  printf( "$ = %d\n* = %d\n+ = %d\n", '$', '*', '+' );
  printf( "/ = %d\nespaco em branco = %d\n", '/', ' ' );
  printf( "w = %d\ns = %d\na = %d\nd = %d\n", 'w', 's', 'a', 'd' );

  system( "pause" ); /* pausa a execução do programa para possibilitar a visualização dos resultados em execução standalone (sem depender do cmd) */
  return 0; /* informa ao sistema operacional que a execução do programa foi concluída com sucesso */
} /* fim da função main */
