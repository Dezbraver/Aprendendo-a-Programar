/*
- Questão 3.19
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as função printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main (execução principal do programa) */
int main( void )
{
  float venda_Bruto;

  /* muda a página de código do console para UTF-8 apresentando saída nula
  permitindo acentuação gráfica */
  system( "chcp 65001 > NUL" );

  /* valor bruto de vendas semanais de um funcionário, prompt e leitura a partir
  do teclado */
  printf( "Informe a venda em reais (-1 para terminar): " );
  scanf( "%f", &venda_Bruto );

  while( venda_Bruto != -1 ) /* enquanto o valor da venda for diferente de -1 */
  {
    /* calcula e apresenta o valor do pagamento do funcionário */
    printf( "O pagamento é de: R$%.2f\n\n", venda_Bruto * 0.09 + 200 );

    /* próximo valor bruto de vendas semanais de um funcionário, prompt e
    leitura a partir do teclado */
    printf( "Informe a venda em reais (-1 para terminar): " );
    scanf( "%f", &venda_Bruto );
  } /* fim da estrutura de controle de repetição while */

  /* pausa a execução do programa para possibilitar a visualização dos
  resultados */
  system( "pause" );
  /* informa o sistema operacional que o programa foi completamente executado */
  return 0;
} /* fim da função main */
