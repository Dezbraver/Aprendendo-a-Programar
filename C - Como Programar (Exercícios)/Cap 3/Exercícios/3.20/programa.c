/*
- Questão 3.20 -
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
# include <stdlib.h> /* necessária para a função system */

/* início da função main (execução principal do programa) */
int main( void )
{
  /* declaração das variáveis do tipo ponto flutuante */
  float juros, principal, taxa;
  /* declaração da variável do tipo inteiro */
  int dias;

  /* muda a página de código do console para UTF-8 para fins de acentuação
  gráfica */
  system( "chcp 65001 > NUL" );

  /* valor principal do empréstimo, prompt e leitura a partir do teclado */
  printf( "Informe o valor principal do empréstimo (-1 para terminar): " );
  scanf( "%f", &principal );

  while( principal != -1 ) /* enquanto o valor principal do empréstimo for
  diferente de -1 */
  { /* início da estrutura de controle de repetição while */
    /* taxa de juros anual, prompt e leitura a partir do teclado */
    printf( "Informe a taxa de juros: " );
    scanf( "%f", &taxa );

    /* prazo do empréstimo em dias, prompt e leitura a partir do teclado */
    printf( "Informe o prazo do empréstimo em dias: " );
    scanf( "%d", &dias );

    /* calcula os juros simples do empréstimo */
    juros = principal * taxa * (float) dias / 365;

    /* apresenta o resultado de cálculo */
    printf( "O valor dos juros é de R$%.2f\n\n", juros );

    /* próximo valor principal do empréstimo, prompt e leitura a partir do
    teclado */
    printf( "Informe o valor principal do empréstimo (-1 para terminar): " );
    scanf( "%f", &principal );
  } /* fim da estrutura de controle de repetição while */

  /* pausa a execução do programa possibilitando a visualização dos resultados
  no modo de execução standalone */
  system( "pause" );
  /* informa ao sistema operacional que o programa foi executado completamente
  ou seja nenhum erro fatal ocorreu */
  return 0;
} /* fim da função main */
