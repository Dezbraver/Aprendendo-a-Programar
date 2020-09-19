/* - Questão 6.10 - */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 9
#define COMISSAO 200.0

int main( void )
{
    int i;
    int contadores[SIZE] = { 0 };
    double vendasBrutas;
    int salario, piso, teto;

    system( "chcp 65001 > NUL" );

    do {
        printf( "Digite o total em vendas brutas da semana do vendedor: " );
        scanf( "%lf", &vendasBrutas );

        if ( vendasBrutas == -1 )
            break;

        salario = (int) COMISSAO + ( vendasBrutas * 0.09 );

        printf( "salário: %d\n", salario );

        if ( salario < 1000 )
            for ( i = 0; i < SIZE - 1; ++i )
            {
                piso = COMISSAO + 100 * i;
                teto = piso + 99;

                if ( salario >= piso && salario <= teto )
                {
                    ++contadores[i];
                    break;
                } /* end ((if)) */
            } /* end ((for)) */
        else
            ++contadores[SIZE - 1];
    }
    while ( vendasBrutas != -1 ); /* end (do...while) */

    printf( "%s%25s", "Salário", "Nº Vendedores\n" );
    for ( i = 0; i < SIZE; ++i )
    {
        piso = COMISSAO + 100 * i;
        teto = piso + 99;
        
        if ( piso <= 999 )
            printf( "R$ %d-%d%20d\n", piso, teto, contadores[i] );
        else
            printf( "R$ %d ou mais%15d\n", piso, contadores[i] );
    } /* end (for) */
        

    system( "pause" );
    return 0;
} /* end [main] */