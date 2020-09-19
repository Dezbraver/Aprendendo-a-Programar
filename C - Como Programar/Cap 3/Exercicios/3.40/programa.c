/*
- Questão 3.40 - Apresenta o seguinte padrão de tabuleiro de xadrez:
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
O programa deve utilizar somente três instruções de saída,uma de cada das
seguintes formas:
printf( "* " );
printf( " " );
printf( "\n" );
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int contador_1 = 1, contador_2 = 1, resto;

  /* fase de processamento de dados */
  while ( contador_1 <= 8 )
  {
    resto = contador_1 % 2;
    if ( resto == 0 )
      printf( " " );

    while ( contador_2 <= 8 )
    {
      printf( "* " );
      ++contador_2;
    } /* fim do while de dentro */

    printf( "\n" );
    contador_2 = 1;
    ++contador_1;
  } /* fim do while de fora */

  system( "pause" );
  return 0;
} /* fim da função main */
