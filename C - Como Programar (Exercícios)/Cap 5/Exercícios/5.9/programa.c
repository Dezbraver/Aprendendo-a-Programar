/* - Questão 5.9 - */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularTaxas( float h );

int main( void )
{
  float h1, h2, h3, t1, t2, t3;
  float totalHoras, totalTaxas;

  totalHoras = 0;
  totalTaxas = 0;

  system( "chcp 65001 > NUL" );

  printf( "Digite as horas de permanência do 1º Cliente: " );
  scanf( "%f", &h1 );

  totalHoras += h1;
  t1 = calcularTaxas( h1 );
  totalTaxas += t1;

  printf( "Digite as horas de permanência do 2º Cliente: " );
  scanf( "%f", &h2 );

  totalHoras += h2;
  t2 = calcularTaxas( h2 );
  totalTaxas += t2;

  printf( "Digite as horas de permanência do 3º Cliente: " );
  scanf( "%f", &h3 );

  totalHoras += h3;
  t3 = calcularTaxas( h3 );
  totalTaxas += t3;

  printf( "%s%10s%10s\n", "Carro", "Horas", "Taxa" );
  printf( "%5d%10.2f%10.2f\n", 1, h1, t1 );
  printf( "%5d%10.2f%10.2f\n", 2, h2, t2 );
  printf( "%5d%10.2f%10.2f\n", 3, h3, t3 );
  printf( "%s%10.2f%10.2f\n", "TOTAL", totalHoras, totalTaxas );

  system( "pause" );
  return 0;
} /* fim [main] */

float calcularTaxas( float h )
{
  if ( h <= 3.0 )
    return 2.0;
  else if ( h <= 6.0 )
    return 2.0 + ceil( h - 3.0 ) * 0.5;
  else
    return 10.0;
} /* fim [calcularTaxas] */
