/*
- Questão 4.30 - if...else
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int nota;
  int aCont = 0;
  int bCont = 0;
  int cCont = 0;
  int dCont = 0;
  int fCont = 0;

  system( "chcp 65001 > NUL" );

  printf( "Digite as notas em letra.\n" );
  printf( "Digite o caractere EOF para encerrar a entrada.\n" );

  while ( ( nota = getchar() ) != EOF )
  {
    if ( nota == 'A' || nota == 'a' )
      ++aCont;
    else if ( nota == 'B' || nota == 'b' )
      ++bCont;
    else if ( nota == 'C' || nota == 'c' )
      ++cCont;
    else if ( nota == 'D' || nota == 'd' )
      ++dCont;
    else if ( nota == 'F' || nota == 'f' )
      ++fCont;
    else if ( nota == '\n' || nota == '\t' || nota == ' ' );
    else
      printf( "Letra de nota incorreta. Digite nova nota.\n" );
  } /* fim ( while ) */

  printf( "\nTotais para cada nota são:\n" );
  printf( "A: %d\n", aCont );
  printf( "B: %d\n", bCont );
  printf( "C: %d\n", cCont );
  printf( "D: %d\n", dCont );
  printf( "F: %d\n", fCont );
} /* fim [main] */
