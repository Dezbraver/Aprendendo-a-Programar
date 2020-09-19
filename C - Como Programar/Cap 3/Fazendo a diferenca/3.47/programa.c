/*
- Questão 3.47 - Lê a população mundial atual e sua taxa de crecimento anual,
depois apresenta a estimativa da população mundial daqui a um, dois, três,
quatro e cinco anos.
*/
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int current_pop, count = 1;
  float growth_rate;

  printf( "Enter the current world population: " );
  scanf( "%d", &current_pop );

  printf( "Enter the current growth rate per year (only numbers): " );
  scanf( "%f", &growth_rate );

  growth_rate /= 100;
  growth_rate *= (float) current_pop;

  while ( count <= 5 )
  {
    printf( "Estimation for %d year(s) is %.0f\n", count,
    (float) current_pop + growth_rate * count );
    ++count;
  }

  system( "pause" );
  return 0;
} /* fim da função main */
