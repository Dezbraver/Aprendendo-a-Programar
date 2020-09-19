/* - Question 5.32 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { RUNNING, FINISHED };

int main( void )
{
  enum Status gameStatus = RUNNING;
  int programNumber;
  int playerNumber;
  char again;

  system( "chcp 65001 > NUL" );

  srand( time( NULL ) );

  do {
    programNumber = 1 + rand() % 1000;

    printf( "Eu tenho um número entre 1 e 1000.\n" );
    printf( "Você consegue descobrir qual é?\n" );
    printf( "Digite sua primeira tentativa.\n" );

    do {
      scanf( "%d", & playerNumber );

      if ( playerNumber > programNumber )
        printf( "Muito Alto. Tente novamente.\n" );
      else if ( playerNumber < programNumber )
        printf( "Muito Baixo. Tente novamente.\n" );
      else
      {
        printf( "Excelente! Você descobriu o número!\n" );
        printf( "Gostaria de jogar novamente (s ou n)? " );

        do {
          again = getchar();
        } while ( again != 's' && again != 'n' );

        printf( "\n" );

        if ( again == 's' )
          break;
        else
        {
          gameStatus = FINISHED;
          break;
        } /* end ((else)) */
      } /* end (else) */
    } while ( playerNumber > programNumber || playerNumber < programNumber );
  } while ( gameStatus == RUNNING );

  system( "pause" );
  return 0;
} /* end [main] */
