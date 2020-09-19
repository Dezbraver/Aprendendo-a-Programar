// Questão 16.12
// Implementação da classe Account

#include <iostream>
#include "Account.h"

using namespace std;

Account::Account( int inicialBalance ) {
    if ( inicialBalance >= 0 )
        currentBalance = inicialBalance;
    else {
        currentBalance = 0;
        cout << "\nSaldo inicial inválido (" << inicialBalance << ")!\n"
                "O saldo inicial é 0" << endl;
    }
} // Account (construtor)

void Account::credit( int value ) {
    currentBalance += value;
} // credit

void Account::debit( int value ) {
    if ( currentBalance - value >= 0 )
        currentBalance -= value;
    else
        cout << "\nValor do débito superior ao saldo da conta!\n"
                "Seu saldo não foi alterado." << endl;
} // debit

int Account::getBalance() {
     return currentBalance;
} // getBalance