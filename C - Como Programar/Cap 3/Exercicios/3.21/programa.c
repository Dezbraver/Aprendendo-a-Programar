/*
- Questão 3.21 -
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as função printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main (execução principal do prgrama) */
int main( void )
{
  /* declaração das variáveis do tipo inteiro */
  int horas_Trabalhadas, horas_Extras;
  /* declaração de variáveis do tipo ponto flutuante */
  float salario_Hora, salario_Total;

  /* muda a página de código do console para UTF-8 permitindo a apresentação de
  acentuação gráfica */
  system( "chcp 65001 > NUL" );

  /* valor de horas trabalhadas na semana, prompt e leitura a partir do
  teclado */
  printf( "Digite # de horas trabalhadas (-1 para terminar): " );
  scanf( "%d", &horas_Trabalhadas );

  /* enquanto o valor de horas trabalhadas na semana for diferente de -1 */
  while( horas_Trabalhadas != -1 )
  {
    /* valor do salário por hora do funcionário, prompt e leitura a partir do
    teclado */
    printf( "Digite o salário por hora do funcionário (R$00.00): " );
    scanf( "%f", &salario_Hora );

    /* se o valor de horas trabalhadas na semana for maior que 40 */
    if( horas_Trabalhadas > 40 )
    {
      /* verifica quantas horas se passaram depois das 40 */
      horas_Extras = horas_Trabalhadas - 40;
      /* calcula o salário total (40 = número de horas "normais" trabalhadas)
      necessita do operador Cast pois ultiliza variáveis inteiras e de ponto
      flutuante no cálculo */
      salario_Total = (float) 40 * salario_Hora
                      + horas_Extras * 1.5 * salario_Hora;
    }
    else
    {
      /* calcula o salário total */
      salario_Total = (float) horas_Trabalhadas * salario_Hora;
    } /* fim da estrutura de controle de seleção if...else */

    /* apresenta o salário total a ser recebido na semana */
    printf( "Salário é de R$%.2f\n\n", salario_Total );

    /* próximo valor de horas trabalhadas na semana, prompt e leitura a partir
    do teclado */
    printf( "Digite # de horas trabalhadas (-1 para terminar): " );
    scanf( "%d", &horas_Trabalhadas );
  } /* fim da estrutura de controle de repetição while */

  /* pausa a execução do programa possibilitando a visualização dos resultados
  no modo de execução standalone */
  system( "pause" );
  /* informa ao sistema operacional que o programa foi executado completamente
  ou seja não houve nenhum erro fatal durante sua execução */
  return 0;
} /* fim da função main */
