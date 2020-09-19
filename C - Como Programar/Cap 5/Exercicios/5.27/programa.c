/* - Question 5.27a - */

#include <stdio.h>
#include <stdlib.h>

int primo( int n );

int main( void )
{
  int i;
  int count = 0;

  for ( i = 1; i <= 10000; ++i )
    if ( primo( i ) )
    {
      ++count;
      printf( "%4d ", i );
      if ( !( count % 30 ) )
        printf( "\n" );
    } /* end (if) */

  printf( "\n\n" );
  system( "pause" );
  return 0;
} /* end [main] */

int primo( int n )
{
  int i;

  for ( i = 2; i < n; ++i )
    if ( !( n % i ) )
      return 0;

  if ( n != 1 )
    return 1;
  else
    return 0;
} /* end [primo] */
