/* - Questão 13.2 - */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    printf( "%s = %d\n%s = %s\n%s = %s\n%s = %s\n%s = %d\n",
            "__LINE__", __LINE__,
            "__FILE__", __FILE__,
            "__DATE__", __DATE__,
            "__TIME__", __TIME__,
            "__STDC__", __STDC__ );

    system( "pause" );
    return 0;
} /* main */