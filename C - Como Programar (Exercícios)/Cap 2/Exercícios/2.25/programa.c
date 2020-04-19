/*
Programa que imprime minhas iniciais em letras em bloco no sentido vertical da página.
Cada letra em bloco de ser construída a partir da letra que ele representa.
Por exemplo:
P P P P P P P P P
          P     P
          P     P
          P     P
            P P

    J J
  J
J
  J
    J J J J J J J

D D D D D D D D D
D               D
D               D
  D           D
    D D D D D
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções printf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  /* imprime na tela os blocos com as minhas iniciais */
  /* bloco J */
  printf( "    J J          \n" );
  printf( "  J              \n" );
  printf( "J                \n" );
  printf( "  J              \n" );
  printf( "    J J J J J J J\n\n" );

  /* bloco P */
  printf( "P P P P P P P P P\n" );
  printf( "          P     P\n" );
  printf( "          P     P\n" );
  printf( "          P     P\n" );
  printf( "            P P  \n\n" );

  /* bloco B */
  printf( "B B B B B B B B B\n" );
  printf( "B       B       B\n" );
  printf( "B       B       B\n" );
  printf( "B       B       B\n" );
  printf( "  B B B   B B B  \n\n" );

  /* bloco M */
  printf( "M M M M M M M M M\n" );
  printf( "            M    \n" );
  printf( "        M        \n" );
  printf( "            M    \n" );
  printf( "M M M M M M M M M\n" );

  system( "pause" ); /* pausa a execução do programa para a visualização dos resultados */
  return 0; /* informa ao sistema operacional que a execução do programa foi um sucesso */
} /* fim da função main */
