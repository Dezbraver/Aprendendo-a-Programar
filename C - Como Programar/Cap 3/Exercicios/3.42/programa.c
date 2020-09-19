/*
- Questão 3.42 - Lê o raio de um círculo (como um valor float) calcula e imprime
o diâmetro, a circunferência e a área. Use o valor 3.14159 para 'pi'.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  float raio, diametro, circunferencia, area, pi = 3.14159;

  /* fase de processamento de dados */
  system( "chcp 65001 > NUL" );

  printf( "Informe o raio do círculo: " );
  scanf( "%f", &raio );

  diametro = raio * 2;
  circunferencia = pi * diametro;
  area = pi * (raio * raio);
  /* fase de finalização */

  printf( "O diâmetro é %.2f\nA circunferência é %.2f\nA área é %.2f\n",
          diametro, circunferencia, area );

  system( "pause" );
  return 0;
} /* fim da função main */
