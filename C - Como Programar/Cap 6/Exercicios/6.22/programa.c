/* - Questão 6.22 - */

#include <stdio.h>
#include <stdlib.h>

/* dezpreza-se a posição 0 por isso acrescentamos 1 posição */
#define VENDEDORES 5
#define PRODUTOS 6

void imprimirTabelaTotal( const double s[][ 5 ], int p, int v );

int main( void )
{
    int i, j, k;
    double sales[ PRODUTOS ][ VENDEDORES ] = { 0 };

    for ( i = 1; i <= 30; ++i ) /* Durante 30 dias */
        for ( j = 1; j < PRODUTOS; ++j ) /* Vendedor gera uma nota para determinado produto */
        {
            for ( k = 1; k < VENDEDORES; ++k )
            {
                sales[ j ][ k ] += rand() % 101 * j;
            } /* fim do segundo for aninhado */
        } /* fim do primeiro for aninhado */

    imprimirTabelaTotal( sales, PRODUTOS, VENDEDORES );

    system( "pause" );
    return 0;
} /* fim da função main */

void imprimirTabelaTotal( const double s[][ 5 ], int p, int v )
{
    int i, j;
    double total;
    
    printf( "%9s%9s%9s%9s%9s\n",
        "Va", "Vb", "Vc", "Vd", "TP" );

    for ( i = 1; i < p; ++i )
    {
        total = 0;

        printf( "P%d", i );

        for ( j = 1; j < v; ++j )
        {
            total += s[ i ][ j ];
            printf( "%9.2f", s[ i ][ j ] );
        } /* fim do for aninhado */

        printf( "%9.2f\n", total );
    } /* fim do for externo */

    printf( "TV" );

    for ( j = 1; j < v; ++j )
    {
        total = 0;

        for ( i = 1; i < p; ++i )
        {
            total += s[ i ][ j ];
        } /* fim do for interno */
        printf( "%9.2f", total );
    } /* fim do for externo */

    printf( "\n" );
} /* fim da função imprimirTabela */