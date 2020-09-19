/* - Questão 8.14 - */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ) {
    char telefone[ 15 ];
    char *tokenPtr;
    int codArea;
    char buffer[ 20 ];
    long nTelefone;

    system( "chcp 65001 > NUL" );

    printf( "Digite um número de telefone ex.: (55) 5555-5555\n" );
    fgets( telefone, 15, stdin );

    tokenPtr = strtok( telefone, "() " );
    codArea = atoi( tokenPtr );

    while ( ( tokenPtr = strtok( NULL, " -" ) ) != NULL )
        strcat( buffer, tokenPtr );

    nTelefone = atol( buffer );

    printf( "%s%d\n%s%ld\n",
            "Código de Área: ", codArea,
            "Número de Telefone: ", nTelefone );

    system( "pause" );
    return 0;
} /* fim da função main */