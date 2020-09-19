/*
- Questão 3.18 -
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main (execução principal do programa) */
int main( void )
{
  /* declaração de variáveis */
  int num_Conta;
  float saldo_Inicial, total_Encargos, total_Creditos, limite_Credito, novo_Saldo;

  /* muda a página de código do console para UTF-8 apresentando saída nula
  permitindo acentuação gráfica */
  system( "chcp 65001 > NUL" );

  /* número da conta, prompt e leitura a partir do teclado */
  printf( "Informe o número da conta (-1 para terminar): " );
  scanf( "%d", &num_Conta );

  while( num_Conta != -1 ) /* enquanto o número da conta for diferente de -1 */
  {
    /* saldo inicial, prompt e leitura a partir do teclado */
    printf( "Informe o saldo inicial: " );
    scanf( "%f", &saldo_Inicial );

    /* total de encargos, prompt e leitura a partir do teclado */
    printf( "Informe o total de encargos: " );
    scanf( "%f", &total_Encargos );

    /* total de créditos, prompt e leitura a partir do teclado */
    printf( "Informe o total de créditos: " );
    scanf( "%f", &total_Creditos );

    /* limite de crédito, prompt e leitura a partir do teclado */
    printf( "Informe o limite de crédito: " );
    scanf( "%f", &limite_Credito );

    /* calcula o novo saldo */
    novo_Saldo = saldo_Inicial + total_Encargos - total_Creditos;

    if( novo_Saldo > limite_Credito ) /* se o novo saldo for maior que o limite de crédito */
    {
      /* imprime os resultados */
      printf( "Conta: %d\n", num_Conta );
      printf( "Limite de Crédito: %.2f\n", limite_Credito );
      printf( "Saldo: %.2f\n", novo_Saldo );
      printf( "Limite de crédito ultrapassado.\n" );
    } /* fim da estrutura de controle de seleção única if */

    /* próximo número da conta, prompt e leitura a partir do teclado */
    printf( "\nInforme o número da conta (-1 para terminar): " );
    scanf( "%d", &num_Conta );
  } /* fim da estrutura de controle de repetição while */

  /* pausa a execução do programa possibilitando a visualização dos resultados no modo de execução standalone */
  system( "pause" );
  /* informa ao sistema operacional que a execução do programa foi concluída com sucesso */
  return 0;
} /* fim da função main */
