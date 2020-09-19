// Questão 16.12
// Programa principal

#include <iostream>
#include <cstdlib>
#include "Account.h"

using namespace std;

int main() {
    Account contaA( 1000 );
    Account contaB( -1 );

    system( "chcp 65001 > NUL" );

    cout << "\nSaldo (ContaA): " << contaA.getBalance()
         << "\nSaldo (ContaB): " << contaB.getBalance()
         << endl;

    contaA.debit( 1100 );
    contaB.credit( 100 );

    cout << "\nSaldo (ContaA): " << contaA.getBalance()
         << "\nSaldo (ContaB): " << contaB.getBalance()
         << endl;

    contaA.debit( 700 );
    contaB.debit( 50 );

    cout << "\nSaldo (ContaA): " << contaA.getBalance()
         << "\nSaldo (ContaB): " << contaB.getBalance()
         << endl;

    system( "pause" );
} // main