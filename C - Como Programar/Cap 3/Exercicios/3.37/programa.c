/*
- Questão 3.37 - Roda um loop de um até 300.000.000 e toda vez que o programa
chegar a um multiplo de 100.000.000 mostrar esse número na tela. Use um relógio
para marcar o tempo entre cada multiplo de 100.000.000.
*/

#include <stdio.h>
#include <stdlib.h>

/* início da função main */
int main( void )
{
  int contador = 1, resto;

  system( "chcp 65001 > NUL" );

  system( "pause" );

  while ( contador <= 300000000 )
  {
    resto = contador % 100000000;
    if ( resto == 0 )
      printf( "%d\n", contador );
      /*printf( "AGORA!" );*/
    ++contador;
  } /* fim do while */

  system( "pause" );
  return 0;
} /* fim da função main */
