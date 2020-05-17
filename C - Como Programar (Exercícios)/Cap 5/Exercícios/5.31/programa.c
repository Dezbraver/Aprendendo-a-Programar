/* - Question 5.31 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip( void );

int main( void )
{
  int i;

  srand( time( NULL ) );

  for ( i = 1; i <= 100; ++i )
  {
    if ( flip() )
      printf( "%7s", "Coroa" );
    else
      printf( "%7s", "Cara" );

    if( !( i % 10 ) )
      printf( "\n" );
  }
  system( "pause" );
  return 0;
} /* end [main] */

int flip( void )
{
  return rand() % 2;
} /* end [flip] */
