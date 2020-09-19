#include <stdio.h>
#include <stdlib.h>

struct queueNode {
    char c;
    struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void insertElement( QueueNodePtr *startPtr, QueueNodePtr *tailPtr, char item );
void printQueue( QueueNodePtr currentNode );
void concatenate( QueueNodePtr currentPtr1, QueueNodePtr currentPtr2 );

int main( void ) {
    QueueNodePtr startPtr1 = NULL;
    QueueNodePtr tail1Ptr = NULL;
    QueueNodePtr startPtr2 = NULL;
    QueueNodePtr tail2Ptr = NULL;
    char item;

    system( "chcp 65001 > NUL" );

    printf( "Lista 1 - Digite um caractere (0 para sair): " );
    scanf( "\n%c", &item );

    while ( item != '0' ) {
        insertElement( &startPtr1, &tail1Ptr, item );
        printQueue( startPtr1 );

        printf( "Lista 1 - Digite um caractere (0 para sair): " );
        scanf( "\n%c", &item );
    }

    printf( "Lista 2 - Digite um caractere (0 para sair): " );
    scanf( "\n%c", &item );

    while ( item != '0' ) {
        insertElement( &startPtr2, &tail2Ptr, item );
        printQueue( startPtr2 );

        printf( "Lista 2 - Digite um caractere (0 para sair): " );
        scanf( "\n%c", &item );
    }

    concatenate( startPtr1, startPtr2 );
    printQueue( startPtr1 );

    system( "pause" );
    return 0;
} /* main */

void insertElement( QueueNodePtr *startPtr, QueueNodePtr *tailPtr, char item ) {
    QueueNodePtr currentPtr;
    QueueNodePtr newPtr;

    newPtr = malloc( sizeof( QueueNode ) );

    if ( newPtr != NULL ) {
        newPtr->c = item;
        newPtr->nextPtr = NULL;

        currentPtr = *startPtr;

        if ( *startPtr == NULL ) {
            *startPtr = newPtr;
        }
        else {
            ( *tailPtr )->nextPtr = newPtr;
        }

        *tailPtr = newPtr;
    }
    else {
        printf( "Não foi possível alocar memória suficiente.\n" );
    }
} /* inserirElemento */

void printQueue( QueueNodePtr currentPtr ) {
    if ( currentPtr == NULL )
        printf( "A fila está vazia.\n" );
    else {
        printf( "A fila é: " );

        while ( currentPtr != NULL ) {
            printf( "%c --> ", currentPtr->c );
            currentPtr = currentPtr->nextPtr;
        }

        printf( "NULL\n\n" );
    }
} /* printQueue */

void concatenate( QueueNodePtr currentPtr1, QueueNodePtr currentPtr2 ) {
    if ( currentPtr2 == NULL ) {
        printf( "A segunda lista está vazia.\n" );
    }
    else {
        while ( currentPtr1->nextPtr != NULL )
            currentPtr1 = currentPtr1->nextPtr;

        currentPtr1->nextPtr = currentPtr2;
    }
} /* concatenate */