/*
- Questão 3.24 - Programa q recebe uma série de 10 números e determina qual deles
é o maior.
*/

#include <stdio.h>
#include <stdlib.h>

/* início da função main */
int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int contador = 1;
  float numero, maior;

  system( "chcp 65001 > NUL" );

  /* fase de processamento de dados */
  /* lê 10 números a partir do teclado determinando se cada número é o maior até
  o momento */
  while( contador <= 10 )
  {
    /* número de unidades vendidas, prompt + leitura a partir do teclado */
    printf( "Informe o %dº número inteiro: ", contador );
    scanf( "%f", &numero );

    /* determina se o número é maior ou não */
    if( contador == 1 )
      maior = numero;
    else
      if( numero > maior )
        maior = numero;

    ++contador;
  } /* fim da estrutura de controle de repetição while */

  /* fase de finalização */
  /* apresenta o maior número dentre os 10 inseridos */
  printf( "O maior número informado foi %.2f\n", maior );

  system( "pause" );
  return 0;
} /* fim da função main */
