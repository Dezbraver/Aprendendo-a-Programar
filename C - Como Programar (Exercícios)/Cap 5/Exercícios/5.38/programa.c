/* - Questão 5.38 - */

#include <stdio.h>
#include <stdlib.h>

long factorial( long number, int show );

int main( void )
{
  int i;

  for ( i = 0; i <= 10; ++i )
  {
    printf( "%2d! = %d\n", i, factorial( i, 0 ) );
    factorial( i, 1 );
    printf( "\n" );
  }

  system( "pause" );
  return 0;
} /* end [main] */

long factorial( long number, int show )
{
  static int spaces;
  int i;

  if ( show < 0 || show > 1 )
    return -1;

  for ( i = 1; i <= spaces; ++i  )
    printf( "  " );

  if ( number <= 1 )
  {
    if ( show == 1 )
    {
      printf( "%2d\n", 1 );
      spaces = 0;
    }
    return 1;
  }
  else
  {
    if ( show == 1 )
    {
      printf( "%2d * %d!\n", number, number - 1 );
      ++spaces;
    }
    return number * factorial( number - 1, show );
  }
} /* end [factorial] */
