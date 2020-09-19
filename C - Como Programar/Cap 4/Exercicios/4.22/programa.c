/*
- Questão 4.22 -
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
  int numNotas = 0;
  float media = 0;
  signed char mediaLetra;
  float soma = 0;
  int aVal = 40;
  int bVal = 30;
  int cVal = 20;
  int dVal = 10;
  int fVal = 0;

  system( "chcp 65001 > NUL" );

  printf( "Digite as notas em letra.\n" );
  printf( "Digite o caractere EOF para encerrar a entrada.\n" );

  while ( ( nota = getchar() ) != EOF )
  {
    switch ( nota )
    {
      case 'A':
      case 'a':
        ++aCont;
        soma += (float) aVal;
        ++numNotas;
        break;

      case 'B':
      case 'b':
        ++bCont;
        soma += (float) bVal;
        ++numNotas;
        break;

      case 'C':
      case 'c':
        ++cCont;
        soma += (float) cVal;
        ++numNotas;
        break;

      case 'D':
      case 'd':
        ++dCont;
        soma += (float) dVal;
        ++numNotas;
        break;

      case 'F':
      case 'f':
        ++fCont;
        soma += (float) fVal;
        ++numNotas;
        break;

      case '\n':
      case '\t':
      case ' ':
        break;

      default:
        printf( "Letra de nota incorreta." );
        printf( " Digite nova nota.\n" );
        break;
    } /* fim ( switch ) */
  } /* fim ( while ) */

  media = soma / (float) numNotas;

  if ( media <= 40 )
    mediaLetra = 'A';
  if ( media <= 32 )
    mediaLetra = 'B';
  if ( media <= 24 )
    mediaLetra = 'C';
  if ( media <= 16 )
    mediaLetra = 'D';
  if ( media <= 8 )
    mediaLetra = 'F';

  printf( "\nTotais para cada nota são:\n" );
  printf( "A: %d\n", aCont );
  printf( "B: %d\n", bCont );
  printf( "C: %d\n", cCont );
  printf( "D: %d\n", dCont );
  printf( "F: %d\n", fCont );

  printf( "\nA média da turma é: %c\n", mediaLetra );

  system( "pause" );
  return 0;
} /* fim [ main ] */
