/*
- Questão 4.29 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int a, b, g, i, j, x, y;

  system( "chcp 65001 > NUL" );

  printf( "\n%30s%30s\n", "!( x < 5 ) && !( y >= 7 )", "!( x < 5 || y >= 7 )" );
  for ( x = 4; x <= 5; ++x )
    for ( y = 6; y <= 7; ++y )
    {
      printf( "%18d\t\t", !( x < 5 ) && !( y >= 7 ) );
      printf( "%19d\n", !( x < 5 || y >= 7 ) );
    } /* fim ((for)) */

  printf( "\n" );

  printf( "%30s%30s\n", "!( a == b ) || !( g != 5 )", "!( a == b && g != 5 )" );
  for ( a = 1, b = 1; a <= 2; ++a )
    for ( g = 5; g <= 6; ++g )
    {
      printf( "%18d\t\t", !( a == b ) || !( g != 5 ) );
      printf( "%19d\n", !( a == b && g != 5 ) );
    } /* fim ((for)) */

  printf( "\n" );

  printf( "%30s%30s\n", "!( ( x <= 8 ) && ( y > 4 ) )", "!( x <= 8 ) || !( y > 4 )" );
  for ( x = 8; x <= 9; ++x )
    for ( y = 4; y <= 5; ++y )
    {
      printf( "%18d\t\t", !( ( x <= 8 ) && ( y > 4 ) ) );
      printf( "%19d\n", !( x <= 8 ) || !( y > 4 ) );
    } /* fim ((for)) */

  printf( "\n" );

  printf( "%30s%30s\n", "!( ( i > 4 ) || ( j <= 6 ) )", "!( i > 4 ) && !( j <= 6 )" );
  for ( i = 4; i <= 5; ++i )
    for ( j = 6; j <= 7; ++j )
    {
      printf( "%18d\t\t", !( ( i > 4 ) || ( j <= 6 ) ) );
      printf( "%19d\n", !( i > 4 ) && !( j <= 6 ) );
    } /* fim ((for)) */

  printf( "\n" );

  system( "pause" );
  return 0;
} /* fim [main] */
