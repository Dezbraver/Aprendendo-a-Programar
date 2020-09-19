/* - Questão 6.11 - */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main( void )
{
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int pass;
    int i;
    int hold;
    int changes;

    printf( "Itens de dados na ordem original\n" );

    for ( i = 0; i < SIZE; ++i )
        printf( "%4d", a[ i ] );

    for ( pass = 1; pass < SIZE; ++pass )
    {
        changes = 0;

        for ( i = 0; i < SIZE - pass; ++i )
            if ( a[ i ] > a[ i + 1 ] )
            {
                hold = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = hold;
                changes = 1;
            } /* end (if) */
        
        if ( !changes )
            break;
    } /* end (for) */

    printf( "\nItens de dados em ordem crescente\n" );

    for ( i =  0; i < SIZE; ++i )
        printf( "%4d", a[ i ] );

    printf( "\n" );

    system( "pause" );
    return 0;
} /* end [main] */