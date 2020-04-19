/*
- Questão 3.34 - Modifique o programa 3.33 para que ele exiba um quadrado vazio.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int sentinela = 0, lado, contador_1 = 0, contador_2;
  int lado_fim;

  system( "chcp 65001 > NUL" );

  while ( sentinela == 0 )
  {
    printf( "Informe um número inteiro para o lado do quadrado ");
    printf("(entre 1 e 20, -1 para terminar): " );
    scanf( "%d", &lado );

    if ( lado >= 1 )
    {
      if ( lado <= 20 )
      {
        lado_fim = lado - 1;
        while ( contador_1 < lado )
        {
          contador_2 = 0;

          while ( contador_2 < lado )
          {
            if ( contador_1 == 0 )
              printf( "* " );
            else if ( contador_1 == lado_fim )
              printf( "* " );
            else if ( contador_2 == 0 )
              printf( "* " );
            else if ( contador_2 == lado_fim )
              printf( "* " );
            else
              printf( "  " );

            ++contador_2;
          } /* fim do 2º while interno */

          printf( "\n" );
          ++contador_1;
          sentinela = 1;
        } /* fim do 1º while interno */
      } /* fim do 1º if de dentro */
    } /* fim do if externo */
    else if ( lado == -1 )
      sentinela = 1;
  } /* fim do while */

  system( "pause" );
  return 0;
} /* fim da função main */
