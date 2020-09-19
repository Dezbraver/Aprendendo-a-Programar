/*
- Questão 3.41 - Loop infinito que imprime multiplos de 2, a saber 2, 4, 8, 16,
32, 64 e assim por diante. O que acontece quando você executa esse programa?
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int sentinela = 0, numero = 2;

  while ( sentinela == 0 )
  {
    printf( "%d\n", numero );
    numero *= 2;
  } /* fim do while */

  system( "pause" );
  return 0;
} /* fim da função main */
