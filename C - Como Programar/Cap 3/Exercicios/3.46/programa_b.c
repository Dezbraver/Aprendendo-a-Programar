/*
- Questão 3.46b - Calcula o valor da constante matemática 'e' usando a seguinte
fórmula: 'e' = 1 + _1_ + _1_ + _1_ + ...
                   1!    2!    3!
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração de variáveis */
  float e = 1;
  int contador_1 = 1, contador_2, fatorial;


  while ( contador_1 <= 15 )
  {
    contador_2 = contador_1 - 1;
    fatorial = contador_1;
    while ( contador_2 > 0 )
    {
      fatorial *= contador_2;
      --contador_2;
    } /* fim do while */

    e += (float) 1 / fatorial;

    fatorial = 0;
    ++contador_1;
  } /* fim do while */

  printf( "e = %.10f\n", e );

  system( "pause" );
  return 0;
} /* fim da função main */
