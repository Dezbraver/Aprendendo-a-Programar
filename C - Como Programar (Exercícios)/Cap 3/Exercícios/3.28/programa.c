/*
- Questão 3.28 - Modifique o programa da figura 3.10 para validar suas entradas.
Em qualquer entrada se o usuário digitar um valor diferente de 1 ou 2, continue
o looping até que o usuário informe um valor correto.
*/
/* Figura 3.10: fig03_10.c
   Análise de resultados de exame */
#include <stdio.h>
#include <stdlib.h>

/* função main inicia execução do programa */
int main( void )
{
  /* inicializa variáveis nas declarações */
  int aprovados = 0; /* número de aprovações */
  int reprovados = 0; /* número de reprovações */
  int aluno = 1; /* contador de alunos */
  int resultado; /* um resultado de exame */
  int sentinela = 0; /* valor sentinela do while interno */

  /* muda a página de código do console para UTF-8 */
  system( "chcp 65001 > NUL" );

  /* processa 10 alunos usando loop controlado por contador */
  while ( aluno <= 10 )
  {
    /* enquanto o valor inserido for diferente de 1 ou 2 não passará para o
    próximo aluno */
    while ( sentinela == 0 )
    {
      /* pede entrada do usuário e lê o valor digitado */
      printf( "Forneça resultado do %dº aluno (1 = aprovado, 2 = reprovado): ",
              aluno );
      scanf( "%d", &resultado );

      /* se resultado 1, incrementa aprovados e finaliza o laço */
      if ( resultado == 1 )
      {
        aprovados = aprovados + 1;
        sentinela = 1;
      } /* fim do if */
      if ( resultado == 2 ) /* senão, incrementa reprovados e finaliza o laço */
      {
        reprovados = reprovados + 1;
        sentinela = 1;
      } /* fim do else */
    } /* fim do while */

    aluno = aluno + 1; /* incrementa contador de alunos */
    sentinela = 0;
  } /* fim da while */

  /* fase de finalização; exibe número de aprovados e reprovados */
  printf( "Aprovados %d\n", aprovados );
  printf( "Reprovados %d\n", reprovados );

  /* se mais de oito aprovados, imprime 'Bônus ao instrutor!' */
  if ( aprovados > 8 )
    printf( "Bônus ao instrutor!\n" );

  system( "pause" );
  return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */
