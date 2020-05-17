/* - Question 5.35b - */

#include <stdio.h>
#include <stdlib.h>

double fibonacci( int n );

int main( void )
{
  int i;
  for ( i = 1; i <= 80; ++i )
  {
    printf( "%25.0f", fibonacci( i ) );

    if ( !( i % 8 ) )
      printf( "\n" );
  } /* end (for) */

  printf( "\n" );
  system( "pause" );
  return 0;
} /* end [main] */

double fibonacci( int n )
{
  double f1 = 0;
  double f2 = 1;
  double aux;

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
