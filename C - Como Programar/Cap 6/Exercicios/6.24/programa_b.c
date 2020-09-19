/* - Questão 6.24b - */

#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 8
#define MOVES_SIZE 8

int main( void )
{
    int board[ BOARD_SIZE ][ BOARD_SIZE ] = { 0 }; /* tabuleiro */
    int vertical[ MOVES_SIZE ] = { -1, -2, -2, -1, 1, 2, 2, 1 }; /* movimentos verticais */
    int horizontal[ MOVES_SIZE ] = { 2, 1, -1, -2, -2, -1, 1, 2 }; /* movimentos horizontais */
    int c, moveNumber, i, j; /* contadores */
    int tempRow, tempColumn; /* variáveis para auxiliar na verificação */
    int currentRow = 3; /* Posição (linha) do cavalo */
    int currentColumn = 4; /* Posição (coluna) do cavalo */

    /* Percorre o número de jogadas */
    for ( c = 1; c <= 64; ++c )
    {
        if ( c == 1 )
            board[ currentRow ][ currentColumn ] = c; /* atribui número da jogada à posição inicial do cavalo */
        else
        {
            /* Percorre o número de movimentos passíveis 0 à 7 */
            for ( moveNumber = 0; moveNumber <= MOVES_SIZE - 1; ++moveNumber )
            {
                tempRow = currentRow + vertical[ moveNumber ];
                tempColumn = currentColumn + horizontal[ moveNumber ];

                /* Verifica se a posição a qual se quer mover está dentro do tabuleiro */
                if ( tempRow >= 0 && tempRow <= 7 &&
                    tempColumn >= 0 && tempColumn <= 7 )
                    /* Verifica se a posição a qual se quer mover está livre */
                    if ( board[ tempRow ][ tempColumn ] == 0 )
                    {
                        currentRow += vertical[ moveNumber ]; /* atribui o novo valor a currentRow */
                        currentColumn += horizontal[ moveNumber ]; /* atribui o novo valor a currentColumn */
                        board[ currentRow ][ currentColumn ] = c; /* atribui número da jogada à nova posição do cavalo */
                        break; /* Encerra o movimento */
                    } /* fim do if aninhado */
            } /* fim do for aninhado */

            if ( moveNumber == MOVES_SIZE )
            {
                --c; /* descarta o número do movimento que não foi realizado graças a tentativa mal sucedida de todas as possibilidades */
                break;
            } /* fim do if */
        } /* fim do else */
    } /* fim do for externo */

    printf( "Foram realizados %d movimentos com o cavalo\n", c );

    for ( i = 0; i < BOARD_SIZE; ++i )
    {
        for ( j = 0; j < BOARD_SIZE; ++j )
            printf( "%3d", board[ i ][ j ] );

        printf( "\n" );
    } /* fim do for externo */

    system( "pause" );
    return 0;
} /* fim da função main */