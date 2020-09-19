/* - Questão 5.37 - */
/* Obs: O programa só executa com numero de discos no intervalo de 1-5 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hanoi( int n, int pi, int pm, int pd );
void move( int n, int po, int pa, int pd );

int main( void )
{
  hanoi( 5, 1, 2, 3 );

  system( "pause" );
  return 0;
} /* end [main] */

int hanoi( int n, int po, int pa, int pd )
{
  if( n < 1 || n > 5 )
    return 0;

  move( n, po, pa, pd );

  printf( "%d --> %d\n", po, pd );

  move( n, pa, pd, po );

  return 1;
} /* end [hanoi] */

void move( int n, int po, int pa, int pd )
{
  int t, j;
  int aux;
  int c1 = 0;
  int c1count = 0;
  int c2 = 0;
  int c2count = 0;

  if ( !( n % 2 ) )
  {
    aux = pa;
    pa = pd;
    pd = aux;
  }

  for ( t = 1; t <= n - 1; ++t )
  {
    for ( j = 1; j <= (int) pow( 2, t - 1 ); ++j )
    {
      /* operações */
      if ( t == 1 )
      {
        aux = pa;
        pa = pd;
        pd = aux;
      } /* end (if) */
      else if ( t == 2 )
      {
        if ( j <= (int) pow( 2, t - 2 ) )
        {
          aux = pa;
          pa = pd;
          pd = aux;
        } /* end ((if)) */
        else
        {
          aux = po;
          po = pd;
          pd = aux;
        } /* end ((else)) */
      } /* end (else if) */
      else if ( t == 3 )
      {
        if ( j <= (int) pow( 2, t - 2 ) )
        {
          aux = po;
          po = pd;
          pd = aux;
          aux = pa;
          pa = pd;
          pd = aux;
        } /* end ((if)) */
        else
        {
          t -= 2;
          c1 = 1;
          break;
        } /* end ((else)) */
      } /* end (else if) */
      else
      {
        c2 = 1;
        t -= 3;
        break;
      } /* end (else) */

      /* printf */
      printf( "%d --> %d\n", po, pa );
    } /* end ((for)) */

    if ( c1 )
    {
      ++c1count;
      if ( c1count == 2 )
      {
        if ( c2count != 2 )
          ++t;
        c1 = 0;
        c1count = 0;
      }
    } /* end (if) */

    if ( c2 )
    {
      if ( c2count <= 1 )
      {
        ++c2count;
        if ( c2count == 2 )
          --t;
      }
      else
      {
        if ( !c1 )
          ++c2count;
        if ( c2count == 4 )
        {
          ++t;
          c2 = 0;
          c2count = 0;
        }
      } /* end (else) */
    } /* end (if) */
  } /* end (for) */
} /* end [move] */
