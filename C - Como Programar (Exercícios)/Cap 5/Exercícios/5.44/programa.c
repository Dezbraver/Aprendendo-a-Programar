/* - Questão 5.44 - */

#include <stdio.h>
#include <stdlib.h>

int mystery( int a, int b );

int main( void )
{
  int x;
  int y;

  system( "chcp 65001 > NUL" );

  printf( "Digite dois inteiros: " );
  scanf( "%d%d", &x, &y );

  printf( "O resultado é %d\n", mystery( x, y ) );

  system( "pause" );
  return 0;
} /* end [main] */

int mystery( int a, int b )
{
  if ( b < 0 ) {
    a = -a;
    b = -b;
  }

  if ( b == 1 )
    return a;
  else
    return a + mystery( a, b - 1 );
} /* end [mystery] */
