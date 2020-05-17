/* - Question 5.26 - */

#include <stdio.h>
#include <stdlib.h>

int perfect( int number );

int main( void )
{
  int i, j;

  system( "chcp 65001 > NUL" );

  for ( i = 1; i <= 10000; i++ )
  {
    if ( perfect( i ) )
    {
      printf( "%d é perfeito pois ", i );
      for ( j = 1; j < i; ++j )
        if ( !( i % j ) )
          printf( "%d ", j );

      printf( "= %d\n", i );
    } /* end (if) */
  } /* end (for) */

  system( "pause" );
  return 0;
} /* end [main] */

int perfect( int number )
{
  int i;
  int sum = 0;
  for ( i = 1; i < number ; ++i )
    if ( !( number % i ) )
      sum += i;

  if ( sum == number )
    return 1;
  else
    return 0;
} /* end [perfect] */
