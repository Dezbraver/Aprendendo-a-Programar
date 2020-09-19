/* - Questão 6.15 - */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 19

void bubbleSort( int a[], int size );
int binarySearch( int key, int sorted[], int size );

int main( void )
{
    int i;
    int different[ SIZE ] = { 0 };
    int num;
    int isEqual;

    system( "chcp 65001 > NUL" );

    for ( i = 1; i <= SIZE + 1; ++i )
    {
        bubbleSort( different, SIZE );

        do {
            printf( "(%d/%d) Digite um número: ", i, SIZE + 1 );
            scanf( "%d", &num );

            isEqual = binarySearch( num, different, SIZE );
        } while ( ( num < 10 || num > 100 ) || isEqual );

        if ( i <= SIZE )
        {
            different[ SIZE - i ] = num;
        }
        
        printf( "%d\n", num );
    } /* end (for) */

    system( "pause" );
    return 0;
} /* end [main] */

void bubbleSort( int a[], int size )
{
    int pass, j;
    int hold;
    int changes;

    for ( pass = 1; pass < size; ++pass )
    {
        changes = 0;

        for ( j = 0; j < size - pass; ++j )
            if ( a[ j + 1 ] < a[ j ] )
            {
                hold = a[ j ];
                a[ j ] = a[ j + 1 ];
                a[ j + 1 ] = hold;
                ++changes;
            } /* end (if) */

        if ( !changes )
            break;
    } /* end (for) */
} /* end [bubbleSort] */

int binarySearch( int key, int sorted[], int size )
{
    int start = 0;
    int median;

    --size;
    
    while ( start <= size )
    {
        median = ( size + start ) / 2;

        if ( sorted[ median ] > key )
            size = median - 1;
        else if ( sorted[ median ] < key )
            start = median + 1;
        else
            return key;
    } /* end (while) */
    
    return 0;
} /* end [binarySearch] */