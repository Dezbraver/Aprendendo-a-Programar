/*
- Questão 3.48 - Lê a data de nascimento do usuário e a data atual e exibe a
idade em anos sua frequência cardíaca máxima e sua frequência cardíaca normal.
*/
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int bir_day, bir_mon, bir_yea, cur_day, cur_mon, cur_yea;
  int age_day, age_mon, age_yea, max_freq;

  /* fase de processamento de dados */
  printf( "Enter your birth date (dd mm yyyy): " );
  scanf( "%d %d %d", &bir_day, &bir_mon, &bir_yea );

  printf( "Enter the current date (dd mm yyyy): " );
  scanf( "%d %d %d", &cur_day, &cur_mon, &cur_yea );

  age_day = cur_day - bir_day;
  if( age_day < 0 ) {
    cur_day += 31;
    --cur_mon;
    age_day = cur_day - bir_day;
  }

  age_mon = cur_mon - bir_mon;
  if( age_mon < 0 ) {
    cur_mon += 12;
    --cur_yea;
    age_mon = cur_mon - bir_mon;
  }

  age_yea = cur_yea - bir_yea;

  max_freq = 220 - age_yea;

  /* fase de finalização */
  printf( "Your age in years is %d\n", age_yea );
  printf( "Your max heart rate is %d\n", max_freq );
  printf( "Your normal heart rate is between %.2f and %.2f bpm\n",
  (float) max_freq * 0.5, (float) max_freq * 0.85 );

  system( "pause" );
  return 0;
} /* fim da função main */
