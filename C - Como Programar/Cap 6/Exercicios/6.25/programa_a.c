/* - Questão 6.25a - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 8
#define MOVES_SIZE 8

int descobrePossiveis( int possiveis[], int movesSize, const int b[][ BOARD_SIZE ],
                        int cR, int cC, const int v[], const int h[] );
int escolherMovimento( const int possiveis[] );
void zerarArray( int array[], int movesSize );
void imprimeTabuleiro( const int board[][ BOARD_SIZE ], int boardSize );

int main( void )
{
    int board[ BOARD_SIZE ][ BOARD_SIZE ] = { 0 }; /* tabuleiro */
    int vertical[ MOVES_SIZE ] = { -1, -2, -2, -1, 1, 2, 2, 1 }; /* movimentos verticais */
    int horizontal[ MOVES_SIZE ] = { 2, 1, -1, -2, -2, -1, 1, 2 }; /* movimentos horizontais */
    int possiveis[ MOVES_SIZE ] = { 0 };
    int m; /* contador */
    int currentRow = 0;
    int currentColumn = 0;
    int movimento;

    srand( time( NULL ) );

    for ( m = 1; m <= 64; ++m )
    {
        if ( m == 1 )
            board[ currentRow ][ currentColumn ] = m;
        else 
            if ( descobrePossiveis( possiveis, MOVES_SIZE, board, currentRow, currentColumn, vertical, horizontal ) )
            {
                movimento = escolherMovimento( possiveis );
                currentRow += vertical[ movimento ];
                currentColumn += horizontal[ movimento ];
                board[ currentRow ][ currentColumn ] = m;
                zerarArray( possiveis, MOVES_SIZE );
            } /* fim do if */
            else
                break;
    } /* fim do for */

    printf( "Foram realizados %d movimentos com o cavalo\n", --m );

    imprimeTabuleiro( board, BOARD_SIZE );

    system( "pause" );
    return 0;
} /* fim da função main */

int descobrePossiveis( int possiveis[], int movesSize, const int b[][ BOARD_SIZE ],
                        int cR, int cC, const int v[], const int h[] )
{
    int moveNumber;
    int tempRow, tempColumn;
    int retorno = 0;

    for ( moveNumber = 0; moveNumber <= movesSize - 1; ++moveNumber )
        {
            tempRow = cR + v[ moveNumber ];
            tempColumn = cC + h[ moveNumber ];

            /* Verifica se a posição a qual se quer mover está dentro do tabuleiro */
            if ( tempRow >= 0 && tempRow <= 7 &&
                 tempColumn >= 0 && tempColumn <= 7 )
                /* Verifica se a posição a qual se quer mover está livre */
                if ( b[ tempRow ][ tempColumn ] == 0 )
                {
                    possiveis[ moveNumber ] = 1;
                    retorno = 1;
                }
        } /* fim do for aninhado */
    
    return retorno;
} /* fim da função descobrePossiveis */

int escolherMovimento( const int possiveis[] )
{
    int move;

    do {
        move = rand() % 8;
    } while ( possiveis[ move ] != 1 );

    return move;
} /* fim da função escolherMovimento */

void zerarArray( int array[], int movesSize )
{
    int moveNumber;

    for ( moveNumber = 0; moveNumber <= movesSize - 1; ++moveNumber )
        array[ moveNumber ] = 0;
} /* fim da função zerarPossiveis */

void imprimeTabuleiro( const int board[][ BOARD_SIZE ], int boardSize )
{
    int i, j;

    for ( i = 0; i < boardSize; ++i )
    {
        for ( j = 0; j < boardSize; ++j )
            printf( "%3d", board[ i ][ j ] );

        printf( "\n" );
    } /* fim do for */
} /* fim da função imprimeTabuleiro */