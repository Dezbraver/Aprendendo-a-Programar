/*
- Questão 3.22 - Mostrar a diferença de pré-decremento e pós decremento
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main (execução principal do programa) */
int main( void )
{
  /* declaração e inicialização de variáveis */
  int x = 1, y = 10;

  /* muda a página de código do console para UTF-8 possibilitando a visualização
  de caracteres com acentuação gráfica */
  system( "chcp 65001 > NUL" );

  /* apresenta os valores de x e y */
  printf( "valores normais de x e y\n" );
  printf( "x = %d\ty = %d\n\n", x, y );
  /* pré decrementa x e pós decrementa y fazendo com que seja apresentado o
  valor de x - 1, ou seja x = 0, enquanto o y é decrementado mas seu novo valor
  só poderá ser usado após a instrução atual ou seja o valor de y apresentado
  permanescerá y = 10 nesta instrução e y = 9 nas instruções seguintes */
  printf( "x pré-decrementado e y pós-decrementado\n" );
  printf( "x = %d\ty = %d\n\n", --x, y-- );
  /* o valor de x permanesce o mesmo que já foi pré-decrementado na instrução
  anterior, ou seja, x = 0. Apresenta o novo valor de y, ou seja y = 9 pois ele foi pós-decrementado na
  instrução anterior.  */
  printf( "novo valor para x e y\n" );
  printf( "x = %d\ty = %d\n", x, y );

  /* pausa a execução do programa para que seja possível a visualização dos
  resultados no modo de execução stadalone*/
  system( "pause" );
  /* indica ao sistema operacional que o programa foi executado completamente */
  return 0;
} /* fim da função main */
