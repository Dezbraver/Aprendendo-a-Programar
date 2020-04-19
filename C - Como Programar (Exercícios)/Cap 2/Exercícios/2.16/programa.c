/*
Recebe dois números do usuário e imprime a soma, a o produto, a diferença,
o quociente e o módulo referentes a esses dois números.
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf() e scanf() */
#include <stdlib.h> /* necessária para função system( "pause" ) */

/* inicio da função main */
int main( void )
{
  int x, y; /* números a serem recebidos pelo usuário */
  int soma, produto, diferenca, quociente, modulo; /* armazenam os valores referentes as
  operações matemáticas realizadas */

  printf( "Digite dois numeros inteiros: " ); /* prompt */
  scanf( "%d %d", &x, &y ); /* lê dois inteiros do teclado */

  soma = x + y; /* calcula a soma de x e y */
  produto = x * y; /* calcula o produto de x e y */
  diferenca = x - y; /* calcula a diferença de x e y */
  quociente = x / y; /* calcula a divisão inteira de x e y */
  modulo = x % y; /* calcula o resto da divisião inteira de x e y */

  /* área de impressão na tela - imprime os valores das operações respectivas */
  printf( "Soma: %d\n", soma );
  printf( "Produto: %d\n", produto );
  printf( "Diferenca: %d\n", diferenca );
  printf( "Quociente: %d\n", quociente );
  printf( "Modulo: %d\n", modulo );

  system( "pause" ); /* pausa a execução para a visualização dos resultados */
  return 0; /* informa ao sistema que a execução do programa foi um sucesso */
} /* final da função main */
