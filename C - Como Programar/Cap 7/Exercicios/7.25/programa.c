/* - Questão 7.25 - */

#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4

/* function prototypes */
void minimum(const int grades[][EXAMS], int pupils, int tests);
void maximum(const int grades[][EXAMS], int pupils, int tests);
void average(const int grades[][EXAMS], int pupils, int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);

/* function main begins program execution */
int main(void)
{
    /* initialize student grades for three students (rows) */
    const int studentGrades[STUDENTS][EXAMS] =
        {{77, 68, 86, 73},
         {96, 87, 89, 78},
         {70, 90, 86, 81}};

    /* initialize array processGrades for four functions */
    void ( *processGrades[ 4 ] )( const int [][ EXAMS ], int, int ) = { printArray, minimum, maximum, average };

    int op;

    system( "chcp 65001 > NUL" );

    do {
        printf( "Digite uma escolha:\n"
                "  0  Imprime o array de notas\n"
                "  1  Acha a menor nota\n"
                "  2  Acha a maior nota\n"
                "  3  Imprime a média de todos os testes\n"
                "     para cada aluno\n"
                "  4  Encerra o programa\n" );
        scanf( "%d", &op );

        if ( op >= 0 && op < 4 )
            ( *processGrades[ op ] )( studentGrades, STUDENTS, EXAMS );
        else if ( op < 0 || op > 4 )
            printf( "Escolha inválida! Tente novamente.\n\n" );
    } while ( op != 4 ); /* end of do...while */

    system("pause");
    return 0; /* indicates successful termination */
} /* end main */

/* Find the minimum grade */
void minimum(const int grades[][EXAMS], int pupils, int tests)
{
    int i;              /* student counter */
    int j;              /* exam counter */
    int lowGrade = 100; /* initialize to highest possible grade */

    /* loop through rows of grades */
    for (i = 0; i < pupils; i++)
    {

        /* loop through columns of grades */
        for (j = 0; j < tests; j++)
        {

            if (grades[i][j] < lowGrade)
            {
                lowGrade = grades[i][j];
            } /* end if */
        }     /* end inner for */
    }         /* end outer for */

    printf( "Lowest grade: %d\n\n", lowGrade );
} /* end function minimum */

/* Find the maximum grade */
void maximum(const int grades[][EXAMS], int pupils, int tests)
{
    int i;             /* student counter */
    int j;             /* exam counter */
    int highGrade = 0; /* initialize to lowest possible grade */

    /* loop through rows of grades */
    for (i = 0; i < pupils; i++)
    {

        /* loop through columns of grades */
        for (j = 0; j < tests; j++)
        {

            if (grades[i][j] > highGrade)
            {
                highGrade = grades[i][j];
            } /* end if */
        }     /* end inner for */
    }         /* end outer for */

    printf( "Highest grade: %d\n\n", highGrade );
} /* end function maximum */

/* Determine the average grade for a particular student */
void average(const int grades[][EXAMS], int pupils, int tests)
{
    int i;         /* student counter */
    int j;         /* exam counter */
    int total; /* sum of test grades */

    /* total all grades for one student */
    for (i = 0; i < pupils; i++)
    {
        total = 0;

        for ( j = 0; j < tests; ++j )
            total += grades[ i ][ j ];

        printf("The average grade for student %d is %.2f\n",
               i, (double) total / tests);
    } /* end for */

    printf( "\n" );
} /* end function average */

/* Print the array */
void printArray(const int grades[][EXAMS], int pupils, int tests)
{
    int i; /* student counter */
    int j; /* exam counter */

    printf("The array is:\n");

    /* output column heads */
    printf("                 [0]  [1]  [2]  [3]");

    /* output grades in tabular format */
    for (i = 0; i < pupils; i++)
    {

        /* output label for row */
        printf("\nstudentGrades[%d] ", i);

        /* output grades for one student */
        for (j = 0; j < tests; j++)
        {
            printf("%-5d", grades[i][j]);
        } /* end inner for */
    }     /* end outer for */

    printf( "\n\n" );
} /* end function printArray */