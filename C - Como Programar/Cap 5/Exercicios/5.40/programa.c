/* - Questão 5.40 - */

#include <stdio.h>

void main( void )
{

  static int count = 1;

  printf( "%d\n", count++ );

  main();
} /* end [main] */
