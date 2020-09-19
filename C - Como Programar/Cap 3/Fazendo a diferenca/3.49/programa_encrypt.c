/*
- Questão 3.49_encrypt - Reads a 4-digit integer and encrypt it as follows to
each digit:
1º - Adds 7;
2º - Calculate the module after a division by 10.
3º - Exchange the first for the third.
4º - Exchange the second for the fourth.
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
  a += 7;
  a %= 10;
  b += 7;
  b %= 10;
  c += 7;
  c %= 10;
  d += 7;
  d %= 10;

  /* exchange numbers */
  num = c * 1000;
  num += d * 100;
  num += a * 10;
  num += b;

  /* finalization phase */
  printf( "Codified data = %d\n", num );

  system( "pause" );
  return 0;
} /* end of main function */
