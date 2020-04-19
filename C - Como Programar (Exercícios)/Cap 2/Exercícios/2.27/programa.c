/*
Imprime o seguinte padrão de asteriscos alternados com oito instruções printf
e depois com o mínimo de instruções printf possível.
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  /* imprime o padrão utilizando oito instruções if */
  printf( "* * * * * * * *\n" );
  printf( " * * * * * * * *\n" );
  printf( "* * * * * * * *\n" );
  printf( " * * * * * * * *\n" );
  printf( "* * * * * * * *\n" );
  printf( " * * * * * * * *\n" );
  printf( "* * * * * * * *\n" );
  printf( " * * * * * * * *\n\n" );

  /* imprime o padrão utilizando o mínimo de instruções if possível */
  printf( "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n" );

  system( "pause" ); /* pausa a execução do programa para possibilitar a visualização dos resultados */
  return 0; /* informa ao sistema operacional que a execução do programa foi um sucesso */
} /* fim da função main */
