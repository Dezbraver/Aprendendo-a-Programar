/*
- Questão 4.10 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int contador; /* contador de números inseridos */
  int soma, valor;
  float media;

  contador = 0;
  media = 0;
  soma = 0;
  valor = 0;

  system( "chcp 65001 > NUL" );

  printf( "Digite uma sequência de inteiros (9999 no final da sequência): " );

  while ( valor != 9999 ) {
    scanf( "%d", &valor );

    if ( valor == 9999 )
      break;

    soma += valor;

    ++contador;
  } /* fim do (while) */

  media = (float) soma / contador;

  printf( "Média: %.1f\n", media, soma, contador );

  system( "pause" );
  return 0;
} /* dim da função main */
