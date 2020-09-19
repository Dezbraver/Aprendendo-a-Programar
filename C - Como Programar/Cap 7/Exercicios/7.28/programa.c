/* - Questão 7.28 - */

#include <stdio.h>
#include <stdlib.h>
#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

void insertProgram( int m[] );
void executeProgram( int m[] );
void computerDump( int accumulator, int instructionCounter, int instructionRegister, int operationCode, int operand, const int m[] );

int main( void )
{
    int memory[100] = { +0000 };

    system( "chcp 65001 > NUL" );

    printf( "*** Bem vindo ao Simpletron! ***\n"
            "*** Favor digitar seu programa, uma instrução       ***\n"
            "*** (ou palavra de dados) por vez. Mostrarei        ***\n"
            "*** o número do local e uma interrogação (?).       ***\n"
            "*** Você, então, deverá digitar a palavra para esse ***\n"
            "*** local. Digite a sentinela -99999 para           ***\n"
            "*** encerrar a entrada do seu programa.             ***\n" );

    insertProgram( memory );
    executeProgram( memory );

    system( "pause" );
    return 0;
} /* fim da função main */

void insertProgram( int m[] )
{
    int i; /* contador */
    int n = 99999; /* número digitado */

    for ( i = 0; ; i++ )
    {
        while ( ( n < -9999 || n > +9999 ) && n != -99999 )
        {
            printf( "%s%d ? ", i < 10? "0":"", i );
            scanf( "%d", &n );
        } /* fim do while */

        if ( n != -99999 )
        {
            m[ i ] = n;
            n = 99999;
        } /* fim do if */
        else
            break;
    } /* fim do while */

    printf( "*** Carga do programa concluida    ***\n" );
} /* fim da função insertProgram */

void executeProgram( int m[] )
{
    int accumulator = +0000; /* acumulador */
    int instructionCounter = 00; /* local na memória da instrução atual */
    int operationCode = 00; /* operação atual */
    int operand = 00; /* local da memória onde se realiza a operação atual */
    int instructionRegister = +0000; /* próxima instrução a ser executada */
    int fatal = 0;

    printf( "*** Iniciando execução do programa ***\n" );

    while ( operationCode != 43 )
    {
        instructionRegister = m[ instructionCounter ];
        operationCode = instructionRegister / 100;
        operand = instructionRegister % 100;

        switch ( operationCode )
        {
            case READ:
                printf( "? " );
                scanf( "%d", &m[ operand ] );
                if ( m[ operand ] < -9999 || m[ operand ] > +9999 )
                {
                    fatal = 1;
                    printf( "*** Estouro de palavra ***\n" );
                } /* fim do if */
                break;
            case WRITE:
                printf( "%s%s%s%s%d\n", m[ operand ] >= 0? "+": "-",
                    m[ operand ] / 1000? "": "0", m[ operand ] / 100? "": "0", m[ operand ] / 10? "": "0",
                    m[ operand ] < 0? m[ operand ] * -1: m[ operand ] );
                break;
            case LOAD:
                if ( m [ operand ] < -9999 || m[ operand ] > +9999 )
                {
                    fatal = 1;
                    printf( "*** Estouro de acumulador ***\n" );
                } /* fim do if */
                else
                    accumulator = m[ operand ];
                break;
            case STORE:
                m[ operand ] = accumulator;
                break;
            case ADD:
                if ( accumulator + m[ operand ] < -9999 || accumulator + m[ operand ] > +9999 )
                {
                    fatal = 1;
                    printf( "*** Estouro de acumulador ***\n" );
                } /* fim do if */
                else
                    accumulator += m[ operand ];
                break;
            case SUBTRACT:
                if ( accumulator - m[ operand ] < -9999 || accumulator - m[ operand ] > +9999 )
                {
                    fatal = 1;
                    printf( "*** Estouro de acumulador ***\n" );
                } /* fim do if */
                else
                    accumulator -= m[ operand ];
                break;
            case DIVIDE:
                if ( !m[ operand ] )
                {
                    fatal = 1;
                    printf( "*** Tentativa de divisão por zero ***\n" );
                } /* fim do if */
                else if ( accumulator / m[ operand ] < -9999 || accumulator / m[ operand ] > +9999 )
                {
                    fatal = 1;
                    printf( "*** Estouro de acumulador ***\n" );
                } /* fim do else if */
                else
                        accumulator /= m[ operand ]; 
                break;
            case MULTIPLY:
                if ( accumulator * m[ operand ] < -9999 || accumulator * m[ operand ] > +9999 )
                {
                    fatal = 1;
                    printf( "*** Estouro de acumulador ***\n" );
                } /* fim do if */
                else
                    accumulator *= m[ operand ];
                break;
            case BRANCH:
                instructionCounter = --operand;
                break;
            case BRANCHNEG:
                if ( accumulator < 0 )
                    instructionCounter = --operand;
                break;
            case BRANCHZERO:
                if ( accumulator == 0 )
                    instructionCounter = --operand;
                break;
            case HALT:
                printf( "*** Execução do Simpletron encerrada ***\n\n" );
                computerDump( accumulator, instructionCounter, instructionRegister, operationCode, operand, m );
                break;
            default:
                fatal = 1;
                printf( "*** Código de operação inválido ***\n" );
                break;
        } /* fim do switch */

        if ( fatal == 1 )
        {
            printf( "*** Execução do Simpletron encerrada de forma anormal ***\n\n" );
            computerDump( accumulator, instructionCounter, instructionRegister, operationCode, operand, m );
            break;
        } /* fim do if */

        ++instructionCounter;
    } /* fim do while */
} /* fim da função executeProgram */

void computerDump( int accumulator, int instructionCounter, int instructionRegister, int operationCode, int operand, const int m[] )
{
    int i; /* contador */

    printf( "%s\n%-24s%s%s%s%s%d\n%-24s%s%d\n%-24s%s%s%s%s%d\n%-24s%s%d\n%-24s%s%d\n\n%s\n%s\n",
            "REGISTERS:",
            "accumulator", accumulator >= 0? "+": "",
                accumulator / 1000? "": "0", accumulator / 100? "": "0", accumulator / 10? "": "0",
                accumulator,
            "instructionCounter", instructionCounter < 10? "0": "", instructionCounter,
            "instructionRegister", instructionRegister >= 0? "+": "",
                instructionRegister / 1000? "": "0", instructionRegister / 100? "": "0", instructionRegister / 10? "": "0",
                instructionRegister,
            "operationCode", operationCode < 10? "0": "", operationCode,
            "operand", operand < 10? "0": "", operand,
            "MEMORY:",
            "         0       1       2       3       4       5       6       7       8       9" );

    for ( i = 0; i < 100; ++i )
    {
        if ( !( i % 10 ) )
            printf( "\n%2d", i );

        printf( "   %s%s%s%s%d", m[ i ] >= 0? "+": "-",
            m[ i ] / 1000? "": "0", m[ i ] / 100? "": "0", m[ i ] / 10? "": "0",
            m[ i ] < 0? m[ i ] * -1: m[ i ] );
    } /* fim do for */

    printf( "\n" );
} /* fim da função computerDump */