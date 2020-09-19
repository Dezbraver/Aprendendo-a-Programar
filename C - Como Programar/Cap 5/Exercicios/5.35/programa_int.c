/* - Question 5.35a - */

#include <stdio.h>
#include <stdlib.h>

int fibonacci( int n );

int main( void )
{
  int i;
  for ( i = 1; i <= 48; ++i )
  {
    printf( "%12d", fibonacci( i ) );

    if ( !( i % 8 ) )
      printf( "\n" );
  } /* end (for) */

  system( "pause" );
  return 0;
} /* end [main] */

int fibonacci( int n )
{
  int f1 = 0;
  int f2 = 1;
  int aux;

  if ( n >= 3 )
  {
    for ( ; n - 2 >= 1; --n )
    {
      aux = f1 + f2;
      f1 = f2;
      f2 = aux;
    } /* end (for) */

    return f2;
  } /* end (if) */
  else if ( n == 2 )
    return f2;
  else
    return f1;
} /* end [fibonacci] */
