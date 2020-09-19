/*
- Questão 3.25 - Imprimir uma tabela de valores usando a sequência de escape de
tabulação \t para tal.
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
  printf( "N\t\t10 * N\t\t100 * N\t\t1000 * N\n\n" );

  while( contador <= 10 )
  {
    printf( "%d\t\t%d\t\t%d\t\t%d\n", contador, contador * 10,
                                contador * 100, contador * 1000 );

    ++contador;
  } /* fim da estrutura de controle de repetição while */

  system( "pause" );
  return 0;
} /* fim da função main */
