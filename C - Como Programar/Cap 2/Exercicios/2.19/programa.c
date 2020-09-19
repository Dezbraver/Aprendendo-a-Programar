/*
Lê três números inteiros e apresenta a soma, a média, o produto, o menor e o maior
desses números, Usando apenas a forma de seleção única da instrução if.
*/

/* diretivas ao pré-processador */
#include <stdio.h> /* necessária para as funções pritf e scanf */
#include <stdlib.h> /* necessária para a função system */

/* início da função main */
int main( void )
{
  int x, y, z; /* inteiros a serem recebidos pelo usuário */
  int soma, media, produto; /* valores das respectivas operações */
  int maior, menor; /* indica qual valor é o maior e qual é o menor */

  printf( "Digite tres inteiros diferentes: " ); /* prompt */
  scanf( "%d %d %d", &x, &y, &z ); /* lê três números inteiros */

  soma = x + y + z; /* calcula a soma dos três inteiros */
  media = soma / 3; /* calcula a média aritmética dos três inteiros */
  produto = x * y * z; /* calcula o produto dos três inteiros */

  /* imprime na tela os resultados da soma, da média e do produto */
  printf( "A soma eh %d\nA media eh %d\nO produto eh %d\n", soma, media, produto );

  /* verificação para saber quem é o maior */
  maior = x;
  if( y > maior )
    maior = y;

  if( z > maior )
    maior = z;

  /* verificação para saber quem é o menor */
  menor = x;
  if( y < menor )
    menor = y;

  if( z < menor )
    menor = z;

  /* imprime na tela qual é o maior e qual é o menor número */
  printf( "O menor eh %d\nO maior eh %d\n", menor, maior );

  system( "pause" ); /* pausa a execução do programa para a visualização dos resultados */
  return 0; /* informa ao sistema operacional que a execução do programa foi um sucesso */
} /* fim da função main */
