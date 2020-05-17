/* - Questão 5.24 - */

#include <stdio.h>
#include <stdlib.h>

float celsius( float f );
float fahrenheit( float c );

int main( void )
{
  int i, j;

  system( "chcp 65001 > NUL" );

  printf( "Celsius para Fahrenheit\n" );
  printf( "==========================\n" );

  for ( i = 0; i <= 9; ++i )
  {
    for ( j = 0; j <= 100; j += 10 )
    {
        if ( j + i > 100 )
          break;
        printf( "%4d°C = %6.2f°F   | ", j + i, fahrenheit( j + i ) );
    } /* fim ((for)) */

    printf( "\n" );
  } /* fim (for) */

  printf( "\nFahrenheit para Celsius\n" );
  printf( "==========================\n" );

  for ( i = 0; i <= 19; ++i )
  {
    for ( j = 32; j <= 212; j += 20 )
    {
      if ( j + i > 212 )
        break;
      printf( "%4d°F = %6.2f°C | ", j + i, celsius( j + i ) );
    } /* fim ((for)) */

    printf( "\n" );
  } /* fim (for) */

  system( "pause" );
  return 0;
} /* fim [main] */

float celsius( float f )
{
  return ( f - 32 ) * 5 / 9;
} /* fim [celsius] */

float fahrenheit( float c )
{
  return ( c * 9 / 5 ) + 32;
} /* fim [fahrenheit] */
