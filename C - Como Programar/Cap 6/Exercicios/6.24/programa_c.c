/* - Questão 6.24c - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 8
#define MOVES_SIZE 8

int descobrePossiveis( int possiveis[], int movesSize, const int b[][ BOARD_SIZE ],
                        int cR, int cC, const int v[], const int h[] );
void descobreAcessiveis( const int possiveis[], const int acessibility[][ BOARD_SIZE ],
                         int cR, int cC, const int v[], const int h[], int acessiveis[], int movesSize );
int escolherMovimento( const int acessiveis[] );
void realizarMovimento( int board[][ BOARD_SIZE ], int newCR, int newCC, int jogada );
void zerarArray( int array[], int movesSize );
void ajustarAcessibilidade( int acessibility[][ BOARD_SIZE ], int possiveis[],int cR, int cC, int v[], int h[], int movesSize );
int passeioDoCavalo( int l, int c );

int main( void )
{
    int l, c;
    int contadorDePasseios = 0;

    srand( time( NULL ) );

    for ( l = 0; l < BOARD_SIZE; ++l )
        for ( c = 0; c < BOARD_SIZE; ++c )
            if ( passeioDoCavalo( l, c ) == 1 )
                ++contadorDePasseios;

    printf( "\nO programa realizou %d passeios completos.\n", contadorDePasseios );

    system( "pause" );
    return 0;
} /* fim da função main */

int passeioDoCavalo( int l, int c )
{
    int board[ BOARD_SIZE ][ BOARD_SIZE ] = { 0 }; /* tabuleiro */
    int vertical[ MOVES_SIZE ] = { -1, -2, -2, -1, 1, 2, 2, 1 }; /* movimentos verticais */
    int horizontal[ MOVES_SIZE ] = { 2, 1, -1, -2, -2, -1, 1, 2 }; /* movimentos horizontais */
    int acessibility[ BOARD_SIZE ][ BOARD_SIZE ] = { 2, 3, 4, 4, 4, 4, 3, 2,
                                                     3, 4, 6, 6, 6, 6, 4, 3,
                                                     4, 6, 8, 8, 8, 8, 6, 4,
                                                     4, 6, 8, 8, 8, 8, 6, 4,
                                                     4, 6, 8, 8, 8, 8, 6, 4,
                                                     4, 6, 8, 8, 8, 8, 6, 4,
                                                     3, 4, 6, 6, 6, 6, 4, 3,
                                                     2, 3, 4, 4, 4, 4, 3, 2 };
    int j, x, y; /* contadores */
    int currentRow = l; /* Posição (linha) do cavalo */
    int currentColumn = c; /* Posição (coluna) do cavalo */
    int possiveis[ MOVES_SIZE ] = { 0 };
    int acessiveis[ MOVES_SIZE ] = { 0 };
    int move;

    /* Percorre o número de jogadas */
    for ( j = 1; j <= 64; ++j )
    {
        if ( j == 1 )
        {
            realizarMovimento( board, currentRow, currentColumn, j );
            descobrePossiveis( possiveis, MOVES_SIZE, board, currentRow, currentColumn, vertical, horizontal );
            ajustarAcessibilidade( acessibility, possiveis, currentRow, currentColumn, vertical, horizontal, MOVES_SIZE );
            zerarArray( possiveis, MOVES_SIZE );
        }
        else
            if ( descobrePossiveis( possiveis, MOVES_SIZE, board, currentRow, currentColumn, vertical, horizontal ) )
            {
                descobreAcessiveis( possiveis, acessibility, currentRow, currentColumn, vertical, horizontal, acessiveis, MOVES_SIZE );
                move = escolherMovimento( acessiveis );
                currentRow += vertical[ move ];
                currentColumn += horizontal[ move ];
                realizarMovimento( board, currentRow, currentColumn, j );
                zerarArray( possiveis, MOVES_SIZE );
                descobrePossiveis( possiveis, MOVES_SIZE, board, currentRow, currentColumn, vertical, horizontal );
                ajustarAcessibilidade( acessibility, possiveis, currentRow, currentColumn, vertical, horizontal, MOVES_SIZE );
                zerarArray( acessiveis, MOVES_SIZE );
            }
            else
                break;
    } /* fim do for externo */

    printf( "Foram realizados %d movimentos com o cavalo\n", --j );

    for ( x = 0; x < BOARD_SIZE; ++x )
    {
        for ( y = 0; y < BOARD_SIZE; ++y )
            printf( "%3d", board[ x ][ y ] );

        printf( "\n" );
    }

    printf( "\n" );

    for ( x = 0; x < BOARD_SIZE; ++x )
    {
        for ( y = 0; y < BOARD_SIZE; ++y )
            printf( "%3d", acessibility[ x ][ y ] );

        printf( "\n" );
    }

    if ( j == 64 )
        return 1;
    else
        return 0;
} /* fim da função passeioDoCavalo */

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

void descobreAcessiveis( const int possiveis[], const int acessibility[][ BOARD_SIZE ],
                         int cR, int cC, const int v[], const int h[], int acessiveis[], int movesSize )
{
    int moveNumber;
    int tempRow, tempColumn;
    int smallerRow, smallerColumn;
    int smallerOn = 0;
    int smaller;

    for ( moveNumber = 0; moveNumber <= movesSize - 1; ++moveNumber )
    {
        if ( possiveis[ moveNumber ] == 1 )
        {
            tempRow = cR + v[ moveNumber ];
            tempColumn = cC + h[ moveNumber ];
            
            if ( smallerOn == 0 )
            {
                smallerOn = 1;
                smaller = moveNumber;
                smallerRow = tempRow;
                smallerColumn = tempColumn;
            } /* fim do if aninhado */
            else
                if ( acessibility[ tempRow ][ tempColumn ] < acessibility[ smallerRow ][ smallerColumn ] )
                {
                    smaller = moveNumber;
                    smallerRow = tempRow;
                    smallerColumn = tempColumn;
                } /* fim do if aninhado */
        } /* fim do if externo */
    } /* fim do for */

    for ( moveNumber = 0; moveNumber <= movesSize - 1; ++moveNumber )
    {
        if ( possiveis[ moveNumber ] == 1 )
        {
            tempRow = cR + v[ moveNumber ];
            tempColumn = cC + h[ moveNumber ];

            if ( acessibility[ tempRow ][ tempColumn ] == acessibility[ smallerRow ][ smallerColumn ] )
                acessiveis[ moveNumber ] = 1;
        }
    } /* fim do for */
} /* fim da função descobreAcessíveis */

int escolherMovimento( const int acessiveis[] )
{
    int move;

    do {
            move = rand() % 8;
        } while ( acessiveis[ move ] != 1 );
        /* fim do do...while */

    return move;
} /* fim da função escolherMovimento */

void realizarMovimento( int board[][ BOARD_SIZE ], int newCR, int newCC, int jogada )
{
    board[ newCR ][ newCC ] = jogada;
}

void zerarArray( int array[], int movesSize )
{
    int moveNumber;

    for ( moveNumber = 0; moveNumber <= movesSize - 1; ++moveNumber )
        array[ moveNumber ] = 0;
} /* fim da função zerarPossiveis */

void ajustarAcessibilidade( int acessibility[][ BOARD_SIZE ], int possiveis[], int cR, int cC, int v[], int h[], int movesSize )
{
    int moveNumber;
    int tempRow, tempColumn;

    for ( moveNumber = 0; moveNumber <= movesSize - 1; ++moveNumber )
    {
        if ( possiveis[ moveNumber ] == 1 )
        {
            tempRow = cR + v[ moveNumber ];
            tempColumn = cC + h[ moveNumber ];

            --acessibility[ tempRow ][ tempColumn ];
        } /* fim do if */
    } /* fim do for */
} /* fim da função ajustarAcessibilidade */