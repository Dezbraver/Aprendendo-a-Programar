/*
- Questão 4.33 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int i, j, k;
  int num, divisao, divisao2, divisor;
  char letra;

  printf( "Decimais\tRomanos\n" );

  for ( i = 1; i <= 100; ++i )
  {
    num = i;

    printf( "%d\t\t", i );

    for ( j = 100; j >= 1; j /= 10 )
    {
      divisao = num / j;
      divisao *= j;
      num %= j;

      switch ( divisao + 10 )
      {
        case 50:
        case 100:
          printf( "X" );
          divisao += 10;
          break;
      } /* fim (switch) */

      switch ( divisao + 1 )
      {
        case 5:
        case 10:
          printf( "I" );
          ++divisao;
          break;
      } /* fim (switch) */

      divisor = 5;

      for ( k = 100; k >= 1; k /= divisor )
      {
        if ( divisor == 5 )
          divisor = 2;
        else
          divisor = 5;

        divisao2 = divisao / k;
        divisao %= k;

        if ( k == 100 )
          letra = 'C';
        else if ( k == 50 )
          letra = 'L';
        else if ( k == 10 )
          letra = 'X';
        else if ( k == 5 )
          letra = 'V';
        else
          letra = 'I';

        if ( divisao2 > 0 )
          for ( ; divisao2 >= 1; --divisao2 )
            printf( "%c", letra );
        else
          if ( divisao == 0 )
            break;
      } /* fim (((for))) */
    } /* fim ((for)) */

    printf( "\n" );
  } /* fim (for) */

  system( "pause" );
  return 0;
} /* fim [main] */
