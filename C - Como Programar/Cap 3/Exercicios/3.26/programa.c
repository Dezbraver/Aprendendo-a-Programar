/*
- Questão 3.26 - Usar um loop para produzir a tabela apresentada no livro.
*/

#include <stdio.h>
#include <stdlib.h>

/* início da função main */
int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int contador = 1;

  /* fase de processamento de dados e finalização */
  /* imprime a tabela de valores */
  printf( "A\t\tA + 2\t\tA + 4\t\tA + 6\n" );
  while( contador <= 5 )
  {
    printf( "%d\t\t%d\t\t%d\t\t%d\n", contador * 3, contador * 3 + 2,
                                      contador * 3 + 4, contador * 3 + 6 );

    ++contador;
  } /* fim da estrutura de controle de repetição while */

  system( "pause" );
  return 0;
} /* fim da função main */
