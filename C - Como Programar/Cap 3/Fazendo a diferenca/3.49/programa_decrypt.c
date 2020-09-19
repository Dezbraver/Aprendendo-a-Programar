/*
- Questão 3.49_decrypt - Decrypts a 4-digit integer from the encrypt program in
this same question.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* declaration and inicialization phase of variables */
  int num, a, b, c, d;

  /* data processing phase */
  printf( "Enter a 4-digit number: " );
  scanf( "%d", &num );

  /* separate numbers */
  a = num / 1000;
  num %= 1000;
  b = num / 100;
  num %= 100;
  c = num / 10;
  num %= 10;
  d = num;

  /* operations with numbers */
  a -= 7;
  if ( a < 0 )
    a += 10;
  b -= 7;
  if ( b < 0 )
    b += 10;
  c -= 7;
  if ( c < 0 )
    c += 10;
  d -= 7;
  if ( d < 0 )
    d += 10;

  /* exchange numbers */
  num = c * 1000;
  num += d * 100;
  num += a * 10;
  num += b;

  /* finalization phase */
  printf( "Decodified data = %d\n", num );

  system( "pause" );
  return 0;
} /* end of main function */
