/*
- Questão 3.38 - Imprime 100 asteriscos e após cada décimo asterisco imprime um
caractere de nova linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int contador = 1, resto;

  /* fase de processamento de dados e finalização */
  while ( contador <= 100 )
  {
    printf( "*" );
    resto = contador % 10;
    if ( resto == 0 )
      printf( "\n" );

    ++contador;
  } /* fim do while */

  system( "pause" );
  return 0;
} /* fim da função main */
