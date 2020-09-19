/* - Questão 5.21 - */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void retangulo( int height, int width, char fillCharacter );
void losango( int height, char fillCharacter );
void octagono( int height, char fillCharacter );
void triangulo( int side, char fillCharacter );
void triRet( int height, char fillCharacter );

int main( void )
{
  retangulo( 3, 6, '#' );
  printf( "\n" );
  losango( 7, '$' );
  printf( "\n" );
  octagono( 5, '*' );
  printf( "\n" );
  triangulo( 6, '%' );
  printf( "\n" );
  triRet( 10, '@' );

  system( "pause" );
  return 0;
} /* fim [main] */

void retangulo( int height, int width, char fillCharacter )
{
  int i, j;

  for ( i = height; i >= 1; --i )
  {
    for ( j = width; j >= 1; --j )
      printf( "%c  ", fillCharacter );

    printf( "\n" );
  } /* fim (for) */
} /* fim [retangulo] */

void losango( int height, char fillCharacter )
{
  int i, j, k , l;
  int asteriscos = 1;
  int par = height % 2;
  int zeros;

  if ( par == 0 )
    --height;

  for ( i = -height / 2; i <= height / 2; ++i )
  {
    for ( j = fabs( i ); j >= 1; --j )
      printf( "   " );

    if ( i == 0 && par == 0 )
      zeros = 2;
    else
      zeros = 1;

    for ( ; zeros >= 1; --zeros )
    {
      for ( l = 1; l <= asteriscos; ++l )
        printf( "%c  ", fillCharacter );

      printf( "\n" );
    } /* fim ((for)) */

    if ( i < 0 )
      asteriscos += 2;
    else
      asteriscos -= 2;
  } /* fim (for) */
} /* fim [losango] */

void octagono( int height, char fillCharacter )
{
  int i, j, k, l;
  int simbolos = height;
  int zeros;

  for ( i = -height / 2; i <= height / 2; ++i )
  {
    for ( j = fabs( i ); j >= 1; --j )
      printf( "   " );

    if ( i != 0 )
      zeros = 1;
    else
      zeros = height;

    for ( ; zeros >= 1; --zeros )
    {
      for ( l = 1; l <= simbolos; ++l )
        printf( "%c  ", fillCharacter );

      printf( "\n" );
    } /* fim ((for)) */

    if ( i < 0 )
      simbolos += 2;
    else if ( i >= 0 )
      simbolos -= 2;
  } /* fim (for) */
} /* fim [octagono] */

void triangulo( int height, char fillCharacter )
{
  int i, j, k;
  int simbolos = 1;

  for ( i = height; i >= 1; --i )
  {
    for ( j = i - 1 ; j >= 1; --j )
      printf( "  " );

    for ( k = simbolos; k >= 1; --k )
      printf( "%c ", fillCharacter );

    printf( "\n" );

    simbolos += 2;
  } /* fim (for) */
} /* fim [triangulo] */

void triRet( int height, char fillCharacter )
{
  int i;
  int simbolos = 1;

  for ( ; height >= 1; --height )
  {
    for ( i = simbolos; i >= 1; --i  )
      printf( "%c ", fillCharacter );

    printf( "\n" );
    ++simbolos;
  } /* fim (for) */
} /* fim [triRet] */
