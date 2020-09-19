/* - Questão 5.17 - */

#include <stdio.h>
#include <stdlib.h>

int multiple( int a, int b );

int main( void )
{
  int i, j;

  for ( i = 1; i <= 10; ++i )
    for ( j = 1; j <= 10; ++j )
    {
      printf( "%d ", j );

      if ( multiple( i, j ) )
        printf( "%s", "é multiplo" );
      else
        printf( "%s", "não é multiplo" );

      printf( " de %d\n", i );
    }

  system( "pause" );
  return 0;
} /* fim [main] */

int multiple( int a, int b )
{
  return b % a ? 0 : 1;
} /* fim [multiple] */
