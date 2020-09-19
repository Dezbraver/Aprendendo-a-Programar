/* - Questão 7.16 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototypes */
void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[],
          const char *wSuit[]);

int main(void)
{
    int i, j;
    /* initialize suit array */
    const char *suit[4] = {"Copas", "Ouros", "Paus", "Espadas"};

    /* initialize face array */
    const char *face[13] =
        {"Ás", "Dois", "Três", "Quatro",
         "Cinco", "Seis", "Sete", "Oito",
         "Nove", "Dez", "Valete", "Dama", "Rei"};

    /* initialize deck array */
    int deck[4][13] = {  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13,
                        14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
                        27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
                        40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52  };

    system( "chcp 65001 > NUL" );

    srand(time(0)); /* seed random-number generator */

    shuffle(deck);          /* shuffle the deck */

    for ( i = 0; i < 4; ++i )
    {
        for ( j = 0; j < 13; ++j )
            printf( "%3d", deck[ i ][ j ] );
        printf( "\n" );
    } /* fim do for externo */

    deal(deck, face, suit); /* deal the deck */
    system("pause");
    return 0; /* indicates successful termination */
} /* end main */

/* shuffle cards in deck */
void shuffle(int wDeck[][13])
{
    int r, c;
    int row;    /* row number */
    int column; /* column number */
    int hold;   /* counter */

    for ( r = 0; r < 4; ++r )
        for ( c = 0; c < 13; ++c )
        {
            row = rand() % 4;
            column = rand() % 13;
            hold = wDeck[ r ][ c ];
            wDeck[ r ][ c ] = wDeck[ row ][ column ];
            wDeck[ row ][ column ] = hold;
        } /* fim do for aninhado */
} /* end function shuffle */

/* deal cards in deck */
void deal(const int wDeck[][13], const char *wFace[],
          const char *wSuit[])
{
    int card;   /* card counter */
    int row;    /* row counter */
    int column; /* column counter */
    int found = 0;

    /* deal each of the 52 cards */
    for (card = 1; card <= 52; card++)
    {
        found = 0;
        /* loop through rows of wDeck */
        for (row = 0; row <= 3; row++)
        {

            /* loop through columns of wDeck for current row */
            for (column = 0; column <= 12; column++)
            {

                /* if slot contains current card, display card */
                if (wDeck[row][column] == card)
                {
                    printf("%5s de %-8s%c", wFace[column], wSuit[row],
                           card % 2 == 0 ? '\n' : '\t');
                    found = 1;
                    break;
                } /* end if */
            }     /* end for */

            if ( found == 1 )
                break;
        }         /* end for */
    }             /* end for */
} /* end function deal */