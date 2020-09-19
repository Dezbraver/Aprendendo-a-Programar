/*
Programa que lê cinco inteiros e imprime o maior e o menor do grupo.
Use somente técnicas de programação aprendidas neste capítulo.
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para funções printf e scanf */
#include <stdlib.h> /* necessária para função system */

/* início da função main */
int main( void )
{
  int v, w, x, y, z; /* cinco inteiros a serem digitados pelo usuário */
  int maior, menor; /* armazena o valor do maior e do menor número */

  printf( "Digite cinco numeros inteiros: " ); /* prompt */
  scanf( "%d %d %d %d %d", &v, &w, &x, &y, &z ); /* lê cinco inteiros do teclado */

  /* determina qual é o maior número */
  maior = v;
  if( maior < w )
    maior = w;

  if( maior < x )
    maior = x;

  if( maior < y )
    maior = y;

  if( maior < z )
    maior = z;

  /* determina qual é o menor número */
  menor = v;
  if( menor > w )
    menor = w;

  if( menor > x )
    menor = x;

  if( menor > y )
    menor = y;

  if( menor > z )
    menor = z;

  /* imprime na tela qual é o maior e qual é o menor número */
  printf( "O maior numero inteiro eh %d\nO menor numero inteiro eh %d\n", maior, menor );

  system( "pause" ); /* pausa a execução do sistema para visualização dos resultados */
  return 0; /* informa ao sistema operacional que a execução do programa foi um sucesso */
} /* fim da função main */
