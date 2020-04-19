/*
- Questão 3.33 - Programa que lê o lado de um quadrado e exibe esse quadrado a
partir de asteriscos. O programa deverá funcionar para quadrados de todos os
tamanhos de lado entre 1 e 20.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int sentinela = 0, lado, contador_1 = 0, contador_2;

  system( "chcp 65001 > NUL" );

  while ( sentinela == 0 )
  {
    printf( "Informe um número inteiro para o lado do quadrado (entre 1 e 20, -1 para terminar): " );
    scanf( "%d", &lado );

    if ( lado >= 1 )
    {
      if ( lado <= 20 )
      {
        while ( contador_1 < lado )
        {
          contador_2 = 0;

          while ( contador_2 < lado )
          {
            printf( "* " );
            ++contador_2;
          } /* fim do 2º while interno */

          printf( "\n" );
          ++contador_1;
          sentinela = 1;
        } /* fim do 1º while interno */
      } /* fim do if de dentro */
    } /* fim do if externo */
    else
      if ( lado == -1 )
        sentinela = 1;
  } /* fim do while */

  system( "pause" );
  return 0;
} /* fim da função main */
