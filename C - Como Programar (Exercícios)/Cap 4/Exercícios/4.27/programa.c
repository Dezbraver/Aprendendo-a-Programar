/*
- Questão 4.27 -
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
  int h, c1, c2;

  system( "chcp 65001 > NUL" );

  printf( "Triplas de Pitágoras\n" );

  for ( h = 1; h <= 500; ++h )
    for ( c1 = 1; c1 <= 500; ++c1 )
      for ( c2 = 1; c2 <= 500; ++c2 )
        if ( pow( h, 2 ) == pow( c1, 2 ) + pow( c2, 2 ) )
          printf( "H = %d, C1 = %d, C2 = %d\n", h, c1, c2 );

  system( "pause" );
  return 0;
} /* fim [main] */
