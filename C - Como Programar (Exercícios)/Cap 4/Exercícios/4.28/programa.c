/*
- Questão 4.28 -
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{

  int codigo = 1;
  float salario_fixo, salario;
  int horas_trabalhadas, horas_extras;
  float venda_bruta_semanal;
  float valor_item;
  int quantidade_item;


  system( "chcp 65001 > NUL" );

  while ( codigo != 0 )
  {
    printf( "\n%-25s%25s\n", "Cargo", "Código de pagamento" );
    printf( "%-25s%15s\n", "Gerente", "1" );
    printf( "%-25s%15s\n", "Trabalhador por hora", "2" );
    printf( "%-25s%15s\n", "Trabalhador Comissionado", "3" );
    printf( "%-25s%15s\n", "Trabalhador por unidade", "4" );
    printf( "Digite o código de pagamento (0 para sair): " );
    scanf( "%d", &codigo );

    switch ( codigo )
    {
      case 1:
        printf( "GERENTE\n" );

        printf( "Digite o Salário Fixo: " );
        scanf( "%f", &salario_fixo );

        printf( "Salário = R$%.2f\n", salario_fixo );

        break;
      case 2:
        printf( "TRABALHADOR POR HORA\n" );

        printf( "Digite o Salário Fixo: " );
        scanf( "%f", &salario_fixo );

        printf( "Horas Trabalhadas: " );
        scanf( "%d", &horas_trabalhadas );

        horas_extras = horas_trabalhadas - 40;

        if ( horas_extras > 0 )
          horas_trabalhadas -= horas_extras;
        else
          horas_extras = 0;

        salario = salario_fixo * horas_trabalhadas
          + ( salario_fixo * 1.5 ) * horas_extras;

        printf( "Salário = R$%.2f\n", salario );

        break;
      case 3:
        printf( "TRABALHADOR COMISSIONADO\n" );

        salario_fixo = 250.0;

        printf( "Digite a venda bruta semanal: " );
        scanf( "%f", &venda_bruta_semanal );

        salario = salario_fixo + ( 0.057 * venda_bruta_semanal );

        printf( "Salário = R$%.2f\n", salario );

        break;
      case 4:
        printf( "TRABALHADOR POR UNIDADE\n" );

        printf( "Digite o valor a receber pelo tipo de item produzido: " );
        scanf( "%f", &valor_item );

        printf( "Digite a quantidade de itens produzidos na semana: " );
        scanf( "%d", &quantidade_item );

        salario = valor_item * quantidade_item;

        printf( "Salário = R$%.2f\n", salario );

        break;
      case 0:
          break;
      default:
        printf( "\nCódigo de pagamento inválido!\n" );
    } /* fim (switch) */

  } /* fim (while) */

  system( "pause" );
  return 0;
} /* fim [main] */
