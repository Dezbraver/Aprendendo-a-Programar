/* - Questão 6.14 - */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 99

void mean( const int answer[] );
void median( int answer[] );
void mode( int freq[], const int answer[] );
void bubbleSort( int a[] );
void printArray( const int a[] );

int main( void )
{
    int frequency[ 10 ] = {0};

    int response[ SIZE ] =
        {
            6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
            7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
            6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
            7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
            6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
            7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
            5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
            7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
            7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
            4, 5, 6, 1, 6, 5, 7, 8, 7
        };

    system( "chcp 65001 > NUL" );

    mean( response );
    median( response );
    mode( frequency, response );

    system( "pause" );
    return 0;
}

void mean( const int answer[] )
{
    int j;
    int total = 0;

    printf( "%s\n%s\n%s\n", "*********", "  Média", "*********" );

    for ( j = 0; j < SIZE; j++ )
        total += answer[ j ];

    printf(
        "A média é o valor médio dos itens de dados.\n"
        "A média é igual ao total de todos\n"
        "os itens de dados divididos pelo número\n"
        "de itens de dados ( %d ). O valor médio para esta\n"
        "execução é: %d / %d = %.4f\n\n",
        SIZE, total, SIZE, (double) total / SIZE
    );
} /* end [mean] */

void median( int answer[] )
{
    printf(
        "\n%s\n%s\n%s\n%s",
        "*********", " Mediana", "*********",
        "O array de respostas, não ordenado, é"
    );

    printArray( answer );

    bubbleSort( answer );

    printf( "\n\nO array ordenado é" );
    printArray( answer );

    if ( SIZE % 2 )
        printf(
            "\n\nA mediana é o elemento %d do\n"
            "array ordenado de %d elementos.\n"
            "Para essa execução, a mediana é %d\n\n",
            SIZE / 2, SIZE, answer[ SIZE / 2 ]
        );
    else
        printf(
            "\n\nA mediana é a média dos elementos %d e %d\n"
            "do array ordenado de %d elementos.\n"
            "Para essa execução, a mediana é %.1f\n\n", 
            SIZE / 2, SIZE / 2 - 1, SIZE,
            (float) ( answer[ SIZE / 2 ] + answer[ SIZE / 2 - 1 ] ) / 2
        );
} /* end [median] */

void mode( int freq[], const int answer[] )
{
    int rating;
    int j;
    int h;
    int largest = 0;
    int modeValue = 0;
    int gT0Freq = 0;
    int equalsFreq = 0;

    printf( "\n%s\n%s\n%s\n", "********", "  Moda", "********" );

    for ( rating = 1; rating <= 9; rating++ )
        freq[ rating ] = 0;

    for ( j = 0; j < SIZE; j++ )
        ++freq[ answer[ j ] ];

    printf(
        "%s%12s%19s\n\n%54s\n%54s\n\n",
        "Resposta", "Frequência", "Histograma",
        "1    1    2    2", "5    0    5    0    5"
    );

    for ( rating = 1; rating <= 9; rating++ )
    {
        printf( "%8d%11d          ", rating, freq[ rating ] );

        if ( freq[ rating ] > largest )
        {
            largest = freq[ rating ];
            modeValue = rating;
        } /* end (if) */

        for ( h = 1; h <= freq[ rating ]; h++ )
            printf( "*" );

        printf( "\n" );
    } /* end (for) */

    printf( 
        "\nA moda é o valor mais frequente.\n"
        "Para essa execução, "
    );

    for ( rating = 1; rating <= 9; ++rating )
    {
        if ( freq[ rating ] > 0 )
            ++gT0Freq;
        
        if ( freq[ 1 ] == freq[ rating ] && rating != 1 )
            ++equalsFreq;
    } /* end (for) */

    if ( gT0Freq == 1 || equalsFreq == gT0Freq - 1 )
        printf( 
            "o conjunto de\n"
            "itens de dados é Amodal.\n"
        );
    else
    {
        printf( "a(s) moda(s) é(são) " );

        for ( rating = 1; rating <= 9; ++rating )
            if ( freq[ rating ] == largest )
                printf( "%d ", rating );
    
        printf( "\nque ocorreu(ocorreram) %d vezes.\n", largest );
    } /* end (else) */
} /* end [mode] */

void bubbleSort( int a[] )
{
    int pass;
    int j;
    int hold;

    for ( pass = 1; pass < SIZE; pass++ )
        for ( j = 0; j < SIZE - 1; j++ )
            if ( a[ j ] > a[ j + 1 ] )
            {
                hold = a[ j ];
                a[ j ] = a[ j + 1 ];
                a[ j + 1 ] = hold;
            } /* end (if) */
} /* end [bubbleSort] */

void printArray( const int a[] )
{
    int j;

    for ( j = 0; j < SIZE; j++ )
    {
        if ( j % 20 == 0 )
            printf( "\n" );

        printf( "%2d", a[ j ] );
    } /* end (for) */
} /* end [printArray] */