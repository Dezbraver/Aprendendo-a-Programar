/*
- Questão 4.25 -
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
  int i, exp, j, numero, hexadecimal;

  system( "chcp 65001 > NUL" );

  printf( "%s\t\t%s\t\t%s\t\t%s\n", "Decimal", "Binário", "Octal", "Hexadecimal" );

  for ( i = 1; i <= 256; ++i )
  {
    printf( "%d\t\t", i );

    /* INÍCIO BINÁRIO */

    for ( exp = 0; (int) pow( 2.0, exp) <= i ; ++exp );

    --exp;

    numero = i;

    for ( j = exp; j >= 0; --j )
    {
      printf( "%d", numero / (int) pow( 2.0, j ) );
      numero %= (int) pow( 2.0, j );
    } /* fim ((for)) */

    printf( "\t\t" );

    /* FIM BINÁRIO */

    /* INÍCIO OCTAL */

    for ( exp = 0; (int) pow( 8.0, exp) <= i ; ++exp );

    --exp;

    numero = i;

    for ( j = exp; j >= 0; --j )
    {
      printf( "%d", numero / (int) pow( 8.0, j ) );
      numero %= (int) pow( 8.0, j );
    } /* fim ((for)) */

    printf( "\t\t" );

    /* FIM OCTAL */

    /* INÍCIO HEXADECIMAL */

    for ( exp = 0; (int) pow( 16.0, exp) <= i ; ++exp );

    --exp;

    numero = i;

    for ( j = exp; j >= 0; --j )
    {
      hexadecimal = numero / (int) pow( 16.0, j );

      switch ( hexadecimal )
      {
        case 10:
          printf( "%c", 'A' );
          break;
        case 11:
          printf( "%c", 'B' );
          break;
        case 12:
          printf( "%c", 'C' );
          break;
        case 13:
          printf( "%c", 'D' );
          break;
        case 14:
          printf( "%c", 'E' );
          break;
        case 15:
          printf( "%c", 'F' );
          break;
        default:
          printf( "%d", hexadecimal );
      } /* fim (switch) */

      numero %= (int) pow( 16.0, j );
    } /* fim ((for)) */

    printf( "\n" );

    /* FIM HEXADECIMAL */

  } /* fim (for) */

  system( "pause" );
  return 0;
} /* fim [main] */
