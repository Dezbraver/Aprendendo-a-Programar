/*
Calcula os quadrados e os cubos dos números 0 a 10, e usa tabulações para
imprimir a seguinte tabela de valores:
número      quadrado      cubo
0           0             0
1           1             1
2           4             8
3           9             27
4           16            64
5           25            125
6           36            216
7           49            343
8           64            512
9           81            729
10          100           1000
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  /* imprime na tela uma tabela com os numeros de 0 a 10,
  juntamente com seus respectivos quadrados e cubos */
  printf( "numero\t\tquadrado\tcubo\n" );
  printf( "%d\t\t%d\t\t%d\n", 0, 0 * 0, 0 * 0 * 0 );
  printf( "%d\t\t%d\t\t%d\n", 1, 1 * 1, 1 * 1 * 1 );
  printf( "%d\t\t%d\t\t%d\n", 2, 2 * 2, 2 * 2 * 2 );
  printf( "%d\t\t%d\t\t%d\n", 3, 3 * 3, 3 * 3 * 3 );
  printf( "%d\t\t%d\t\t%d\n", 4, 4 * 4, 4 * 4 * 4 );
  printf( "%d\t\t%d\t\t%d\n", 5, 5 * 5, 5 * 5 * 5 );
  printf( "%d\t\t%d\t\t%d\n", 6, 6 * 6, 6 * 6 * 6 );
  printf( "%d\t\t%d\t\t%d\n", 7, 7 * 7, 7 * 7 * 7 );
  printf( "%d\t\t%d\t\t%d\n", 8, 8 * 8, 8 * 8 * 8 );
  printf( "%d\t\t%d\t\t%d\n", 9, 9 * 9, 9 * 9 * 9 );
  printf( "%d\t\t%d\t\t%d\n", 10, 10 * 10, 10 * 10 * 10 );

  system( "pause" ); /* pausa a execução do programa para
  possibilitar a visualização dos resultados na execução
  standalone (sem depender do cmd) */
  return 0; /* informa ao sistema operacional que a execução
  do programa foi concluída com sucesso */
} /* fim da função main */
