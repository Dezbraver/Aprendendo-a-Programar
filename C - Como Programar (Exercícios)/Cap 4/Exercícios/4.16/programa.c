/*
- Questão 4.16 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i;
  int j;
  int k;
  int esp;

  system( "chcp 65001 > NUL" );

  for ( i = 1; i <= 10; ++i ) {
    for ( j = 1; j <= i; ++j )
      printf( "*" );
    printf( "\n" );
  } /* fim do (for) */

  printf( "\n" );

  for ( i = 10; i >= 1; --i ) {
    for ( j = 1; j <= i; ++j )
      printf( "*" );
    printf( "\n" );
  } /* fim do (for) */

  printf( "\n" );

  for ( i = 10; i >= 1; --i ) {
    esp = 10 - i;
    for ( k = 1; k <= esp; ++k )
      printf( " " );
    for ( j = 1; j <= i; ++j )
      printf( "*" );
    printf( "\n" );
  } /* fim do (for) */

  printf( "\n" );

  for ( i = 1; i <= 10; ++i ) {
    esp = 10 - i;
    for ( k = 1; k <= esp; ++k )
      printf( " " );
    for ( j = 1; j <= i; ++j )
      printf( "*" );
    printf( "\n" );
  } /* fim do (for) */

  system( "pause" );
  return 0;
} /* fim [main] */
