/*
- Questão 4.17 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i;
  int numeroConta;
  float limiteCredito;
  float saldoAtual;
  float novoLimiteCredito;

  system( "chcp 65001 > NUL" );

  for ( i = 1; i <= 3; ++i )
  {
    printf( "Digite o número da conta: " );
    scanf( "%d", &numeroConta );

    printf( "Digite o limite de crédito: " );
    scanf( "%f", &limiteCredito );

    printf( "Digite o saldo atual: " );
    scanf( "%f", &saldoAtual );

    novoLimiteCredito = limiteCredito / (float) 2;

    if ( novoLimiteCredito >= saldoAtual )
      printf( "Cliente %d tem novo limite de crédito de %.2f\n",
      numeroConta, novoLimiteCredito );
    else
      printf( "Cliente %d tem saldo superior ao novo limite de %.2f\n",
      numeroConta, novoLimiteCredito );

    printf( "\n" );
  }

  system( "pause" );
  return 0;
} /* fim [main] */
