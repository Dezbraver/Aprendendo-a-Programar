/*
- Questão 4.11 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int menor;
  int valor;
  int contador;
  int i;

  system( "chcp 65001 > NUL" );

  printf( "Digite uma sequência de inteiros (o primeiro define a sequência): " );
  scanf( "%d", &contador );

  for ( i = 1; i <= contador; ++i )
  {
    scanf( "%d", &valor );
    if ( valor < menor )
      menor = valor;
    else if ( valor == 1 )
      menor = valor;
  } /* fim do (for) */

  printf( "O menor valor é: %d\n", menor );

  system( "pause" );
  return 0;
} /* fim da função main */
