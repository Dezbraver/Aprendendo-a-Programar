/*
Calculadora de IMC (Índice de Massa Corporal)
Fórmula:
                pesoEmQuilos
IMC = ---------------------------------
       alturaEmMetros x alturaEmMetros
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  int pesoEmQuilos, alturaEmMetros; /* armazenam os valores do peso em quilos e a
  altura em metros digitados pelo usuário */

  printf( "Digite o valor do seu peso em quilos, e tecle (Enter): " ); /* prompt */
  scanf( "%d", &pesoEmQuilos ); /* lê um número inteiro a partir do teclado */

  printf( "Digite o valor da sua altura em metros, e tecle (Enter): " ); /* prompt */
  scanf( "%d", &alturaEmMetros ); /* lê um número inteiro a partir do teclado */

  /* Imprime na tela as informações do Ministério da Saúde para que o usuário
  possa avaliar seu IMC */
  printf( "VALORES DE IMC\n" );
  printf( "Abaixo do peso:\tmenor que 18,5\n" );
  printf( "Normal:\t\tentre 18,5 e 24,9\n" );
  printf( "Acima do peso:\tentre 25 e 29,9\n" );
  printf( "Obeso:\t\t30 ou mais\n\n" );

  /* calcula o valor do IMC do usuário e imprime na tela  */
  printf( "Seu IMC = %d\n", pesoEmQuilos / (alturaEmMetros * alturaEmMetros) );

  system( "pause" ); /* pausa a execução do programa para possibilitar
  a visualização dos resultados durante a execução standalone (sem depender do cmd) */
  return 0; /* informa ao sistema operacional que a execução do programa foi
  concluída com sucesso */
} /* fim da função main */
