/* - Questão 5.18 - */

#include <stdio.h>
#include <stdlib.h>

int even( int n );

int main( void )
{
  int i;

  for ( i = 1; i <= 10; ++i )
  {
    printf( "%d é ", i );
    if ( even( i ) )
      printf( "par\n" );
    else
      printf( "ímpar\n" );
  }

  system( "pause" );
  return 0;
} /* fim [main] */

int even( int n )
{
  return n % 2 ? 0 : 1;
} /* fim [even] */
