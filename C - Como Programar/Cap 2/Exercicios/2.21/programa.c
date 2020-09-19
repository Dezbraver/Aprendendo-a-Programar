/*
Programa que imprime as seguintes formas com asteriscos:
* * * * * * * * *       * * *           *               *
*               *     *       *       * * *           *   *
*               *   *           *   * * * * *       *       *
*               *   *           *       *         *           *
*               *   *           *       *       *               *
*               *   *           *       *         *           *
*               *   *           *       *           *       *
*               *     *       *         *             *   *
* * * * * * * * *       * * *           *               *
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void ) {
  /* imprime na tela as formas pedidas */
  printf( "* * * * * * * * *       * * *           *               *           \n" );
  printf( "*               *     *       *       * * *           *   *         \n" );
  printf( "*               *   *           *   * * * * *       *       *       \n" );
  printf( "*               *   *           *       *         *           *     \n" );
  printf( "*               *   *           *       *       *               *   \n" );
  printf( "*               *   *           *       *         *           *     \n" );
  printf( "*               *   *           *       *           *       *       \n" );
  printf( "*               *     *       *         *             *   *         \n" );
  printf( "* * * * * * * * *       * * *           *               *           \n" );

  system( "pause" ); /* pausa a execeição do programa para a visualização dos resultados */
  return 0; /* informa ao sistema que a execução do programa foi um sucesso */
} /* fim da função main */
