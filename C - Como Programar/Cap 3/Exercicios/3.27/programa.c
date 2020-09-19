/*
- Questão 3.27 - Acha os 2 maiores valores dentre 10 números usando uma técnica
semelhante a usada no exercício 3.24. [Nota: cada número só pode ser informado
uma vez]
*/

#include <stdio.h>
#include <stdlib.h>

/* início da função main */
int main( void )
{
  /* fase de declaração e inicialização de variáveis */
  int contador = 1, sentinela = 0;
  float numero;
  float a, b, c, d, e, f, g, h, i, j;
  float primeiro_maior, segundo_maior;

  /* fase de processamento de dados e finalização */
  system( "chcp 65001 > NUL" );

  while( contador <= 10 )
  {
    /* obtêm e verifica valores repetidos, se houver, o valor é pedido
    novamente */
    while( sentinela == 0 )
    {
      printf( "Informe o %dº número inteiro: ", contador );
      scanf( "%f", &numero );

      /* estruturas if aninhadas que verificam os números informados para que
      não se repitam */
      /* armazena cada valor na posição de memória representada por uma
      variável sequencial que será usada para realizar a verificação de
      repetição */
      /* é atribuido o valor 1 à 'sentinela' para finalizar a execução do while
      verificador de repetição */
      if( contador == 1 )
      {
        a = numero;
        primeiro_maior = numero;
        sentinela = 1;
      }

      if( contador == 2 ) if( numero != a )
      {
        b = numero;
        segundo_maior = numero;
        sentinela = 1;
      }

      if( contador == 3 ) if( numero != a ) if( numero != b )
      {
          c = numero;
          sentinela = 1;
      }

      if( contador == 4 ) if( numero != a ) if( numero != b )
      if( numero != c )
      {
        d = numero;
        sentinela = 1;
      }

      if( contador == 5 ) if( numero != a ) if( numero != b )
      if( numero != c ) if( numero != d )
      {
        e = numero;
        sentinela = 1;
      }

      if( contador == 6 ) if( numero != a ) if( numero != b )
      if( numero != c ) if( numero != d ) if( numero != e )
      {
        f = numero;
        sentinela = 1;
      }

      if( contador == 7 ) if( numero != a ) if( numero != b )
      if( numero != c ) if( numero != d ) if( numero != e ) if( numero != f )
      {
        g = numero;
        sentinela = 1;
      }

      if( contador == 8 ) if( numero != a ) if( numero != b )
      if( numero != c ) if( numero != d ) if( numero != e ) if( numero != f )
      if( numero != g )
      {
        h = numero;
        sentinela = 1;
      }

      if( contador == 9 ) if( numero != a ) if( numero != b )
      if( numero != c ) if( numero != d ) if( numero != e ) if( numero != f )
      if( numero != g ) if( numero != h )
      {
        i = numero;
        sentinela = 1;
      }

      if( contador == 10 ) if( numero != a ) if( numero != b )
      if( numero != c ) if( numero != d ) if( numero != e ) if( numero != f )
      if( numero != g ) if( numero != h ) if( numero != i )
      {
        j = numero;
        sentinela = 1;
      }

    } /* fim da estrutura de controle de repetição while interno */

    /* seleção dos 2 maiores valores dentre os 10 informados */
    if( numero > primeiro_maior )
    {
      segundo_maior = primeiro_maior;
      primeiro_maior = numero;
    }
    else
      if( numero > segundo_maior )
        if ( numero != primeiro_maior )
          segundo_maior = numero;

    sentinela = 0; /* libera a execução do while que verifica a repetição */
    ++contador;
  } /* fim da estrutura de controle de repetição while externo*/

  printf( "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n", a, b, c, d, e, f, g, h, i, j );
  printf( "Os 2 maiores números são %.2f e %.2f\n", primeiro_maior, segundo_maior );

  system( "pause" );
  return 0;
} /* fim da função main */
