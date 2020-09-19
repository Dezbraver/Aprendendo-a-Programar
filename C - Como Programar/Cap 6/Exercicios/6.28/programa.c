/* - Questão 6.28 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void bubbleSort( int a[], int size );
int binarySearch( int searchKey, const int a[], int size );

int main( void )
{
    int i;
    int n; /* número de números aleatórios a serem gerados */
    int rNum; /* número aleatório */
    int unicNums[ SIZE ] = { 0 }; /* array que irá armazenar os números sem duplicatas */

    for ( n = 1; n <= SIZE; ++n )
    {
        rNum = 1 + rand() % 20;
        
        if ( !binarySearch( rNum, unicNums, SIZE ) )
        {
            unicNums[ 0 ] = rNum;
            bubbleSort( unicNums, SIZE );
        } /* fim do if */
    } /* fim do for */
    printf( "ARRAY: " );
    for ( i = 0; i < SIZE; ++i )
        printf( "%3d", unicNums[ i ] );
    printf( "\n" );

    system( "pause" );
    return 0;
} /* fim da função main */

void bubbleSort( int a[], int size )
{
    int pass, j;
    int hold;
    int changed;

    for ( pass = 1; pass < size; ++pass )
    {
        changed = 0;

        for ( j = 0; j < size - pass; ++j )
            if ( a[ j ] > a[ j + 1 ] )
            {
                hold = a[ j ];
                a[ j ] = a[ j + 1 ];
                a[ j + 1 ] = hold;
                changed = 1;
            } /* fim do if */

        if ( !changed )
            break;
    } /* fim do for */
        
} /* fim da função bubbleSort */

int binarySearch( int searchKey, const int a[], int size )
{
    int low = 0;
    int high = size - 1;
    int middle;

    while ( low <= high )
    {
        middle = ( high + low ) / 2;
        
        if ( a[ middle ] == searchKey )
            return 1;
        else if ( a[ middle ] < searchKey )
            low = middle + 1;
        else
            high = middle - 1;
    } /* fim do while */

    return 0;
} /* fim da função binarySearch */