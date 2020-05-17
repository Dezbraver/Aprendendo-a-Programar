/* - Questão 5.47 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { CONTINUE, WON, LOST };

int rollDice( void );

int main( void )
{
  int sum;
  int myPoint;
  double saldoBanca = 1000.0;
  double aposta;

  enum Status gameStatus;

  system( "chcp 65001 > NUL" );

  srand( time( NULL ) );

  while ( saldoBanca > 0 )
  {
    printf( "\nSaldo da banca R$%.2f\n", saldoBanca );
    do {
      printf( "Digite um valor para a aposta: " );
      scanf( "%lf", &aposta );

      if ( aposta == saldoBanca )
        printf( "\nEi, assim você quebra!\n\n" );

      if ( aposta > saldoBanca || aposta < 1 )
        printf( "\nInsira um valor válido!\n" );
    } while ( aposta > saldoBanca || aposta < 1 );

    sum = rollDice();

    switch ( sum )
    {
      case 7:
      case 11:
        gameStatus = WON;
        break;

      case 2:
      case 3:
      case 12:
        gameStatus = LOST;
        break;

      default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf( "Ponto é %d\n", myPoint );
        break;
    } /* end (switch) */

    while ( gameStatus == CONTINUE )
    {
      sum = rollDice();

      if ( sum == myPoint )
        gameStatus = WON;
      else
        if ( sum == 7 )
          gameStatus = LOST;
    } /* end ((while)) */

    if ( gameStatus == WON ) {
      printf( "Jogador vence\n" );
      printf( "\nVocê está ganhando. Agora é hora de aproveitar suas fichas!\n" );
      saldoBanca += aposta;
    } /* end (if) */
    else
    {
      printf( "Jogador perde\n" );
      saldoBanca -= aposta;
      if ( saldoBanca == 0 )
        printf( "\nSinto muito. Você está quebrado!\n" );
      else
        printf( "\nVamos lá, continue tentando!\n" );
    } /* end (else) */
  } /* end (while) */


  system( "pause" );
  return 0;
} /* end [main] */

int rollDice( void )
{
  int die1;
  int die2;
  int workSum;

  die1 = 1 + rand() % 6;
  die2 = 1 + rand() % 6;
  workSum = die1 + die2;

  printf( "Jogador rolou %d + %d = %d\n", die1, die2, workSum );

  return workSum;
} /* end [rollDice] */
