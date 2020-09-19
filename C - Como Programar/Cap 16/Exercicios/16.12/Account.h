// Questão 16.12
// Interface Account

class Account {
    public:
        Account( int inicialBalance );
        void credit( int value );
        void debit( int value );
        int getBalance();
    private:
        int currentBalance;
}; // class Account