/*
- Questão 3.39 - Lê um número inteiro e conta quantos dígitos nele são
algarismos 7.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int numero, numero_Separado, contador = 0, resto;

  /* fase de processamento de dados */
  system( "chcp 65001 > NUL" );

  printf( "Informe um número inteiro: " );
  scanf( "%d", &numero );

  while ( numero > 0 )
  {
    numero_Separado = numero % 10;
    resto = numero_Separado % 7;
    if ( resto == 0 )
      ++contador;
    numero /= 10;
  } /* fim do while */

  /* fase de finalização do programa */
  printf( "Existe(m) %d ocorrências do algarismo 7 no inteiro informado.\n",
          contador );

  system( "pause" );
  return 0;
} /* fim da função main */
