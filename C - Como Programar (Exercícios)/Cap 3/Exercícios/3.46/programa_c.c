/*
- Questão 3.46c - Calcula o valor de eˣ usando a fórmula:
eˣ = 1 + _x¹_ + _x²_ + _x³_ + ...
          1!     2!     3!
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração de variáveis */
  float e_x = 1, num_x, exp_x;
  int contador_1 = 1, contador_2, fatorial;

  system( "chcp 65001 > NUL" );

  printf( "Informe o valor de x: " );
  scanf( "%f", &num_x );

  exp_x = num_x;

  while ( contador_1 <= 13 )
  {
    contador_2 = contador_1 - 1;
    fatorial = contador_1;
    while ( contador_2 > 0 )
    {
      fatorial *= contador_2;
      --contador_2;
    } /* fim do while */

    e_x += exp_x / fatorial;
    exp_x *= num_x;

    fatorial = 0;
    ++contador_1;
  } /* fim do while */

  printf( "eˣ = %.10f\n", e_x );

  system( "pause" );
  return 0;
} /* fim da função main */
