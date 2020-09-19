/*
- Questão 3.17 -
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main (execução principal do programa) */
int main( void )
{
  /* declaração e inicialização das variáveis */
  int quilometros_Atual, quilometros_Total = 0;
  float litros_Atual, litros_Total = 0;

  /* prompt para o valor de combustível abastecido (em litros) atual */
  printf( "Informe quantos litros abasteceu (-1 para terminar): " );
  /* lê o valor de combustível abastecido (em litros) atual a partir do teclado */
  scanf( "%f", &litros_Atual );

  /* enquanto o valor de litros abastecidos atual for diferente de -1 */
  while( litros_Atual != -1 )
  {
    /* prompt para o valor de quilômetros rodados atual */
    printf( "Informe quantos km dirigiu: " );
    /* lê o valor de quilômetros rodados atual a partir do teclado */
    scanf( "%f", &quilometros_Atual );

    /* necessário para visualização de acentuação gráfica no cmd */
    system( "chcp 65001 > NUL" );
    /* imprime o valor do consumo atual */
    printf( "O consumo atual é de %f km/l\n\n", (float) quilometros_Atual / litros_Atual );

    /* soma ao total de litros abastecidos o valor de litros abastecidos atual */
    litros_Total += litros_Atual;
    /* soma ao total de quilômetros rodados o valor de quilômetros rodados atual */
    quilometros_Total += quilometros_Atual;

    /* prompt para o próximo valor de combustível abastecido (em litros) atual */
    printf( "Informe quantos litros abasteceu (-1 para terminar): " );
    /* lê o próximo valor de combustível abastecido (em litros) atual a partir do teclado*/
    scanf( "%f", &litros_Atual );
  } /* fim da estrutura de controle de repetição while */

  /* imprime o valor do consumo geral */
  printf( "O consumo geral foi de %f km/l\n", (float) quilometros_Total / litros_Total );

  system( "pause" ); /* pausa a execução do programa para possibilitar a visualização dos resultados */
  return 0; /* informa ao sistema operacional que a execução do programa foi completa */
} /* fim da função main */
