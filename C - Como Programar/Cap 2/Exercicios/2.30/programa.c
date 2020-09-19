/*
Lê um número inteiro de cinco dígitos e separa o número em dígitos individuais,
separados um do outro por três espaços cada um. Exemplo, ao digitar 42139, o
programa deverá exibir:
4   2   1   3   9
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  int num; /* armazena o número inteiro de cinco digitos digitado */
  int v, w, x, y, z; /* armazenam os 5 dígitos inteiros separados */
  int a, b, c; /* armazenam os valores do resto para usar em calculos posteriores */

  printf( "Digite um numero inteiro de cinco digitos: " ); /* prompt */
  scanf( "%d", &num ); /* lê um inteiro a partir do teclado */

  /* separa os números na variáveis v, w, x, y, z, usando divisões inteiras e módulos */
  v = num / 10000;
  a = num % 10000;
  w = a / 1000;
  b = a % 1000;
  x = b / 100;
  c = b % 100;
  y = c / 10;
  z = c % 10;

  /* imprime na tela cada dígito do inteiro, separados por três espaços */
  printf( "%d   %d   %d   %d   %d\n", v, w, x, y, z );

  system( "pause" ); /* pausa a execução do programa para tornar possível a visualização dos resultados em execução standalone (sem depender do cmd) */
  return 0; /* informa ao sistema operacional que a execução do programa foi concluída com sucesso */
} /* fim da função main */
