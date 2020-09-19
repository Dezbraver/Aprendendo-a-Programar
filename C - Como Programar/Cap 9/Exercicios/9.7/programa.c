/* - Questão 9.7 - */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int i;
    int x, y;
    
    for ( i = 1; i <= 4; ++i ) {
        scanf( "%i%d", &x, &y );
        printf( "%d %d\n", x, y );
    }

    system( "pause" );
    return 0;
} /* fim da função main */

/* O d recebe valores decimais e salva na variável o valor decimal
enquanto o i recebe valores decimais e salva na variável o valor
convertido pra octal hexadecimal ou decimal de acordo com a entrada */