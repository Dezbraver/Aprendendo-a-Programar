// Questão 17.4
// Declaração da classe Time (interface)

#ifndef TIME_H
    #define TIME_H

    class Time {
        public:
            Time();
                
            // Funções set
            void setTime( int, int, int );
            void setHour( int );
            void setMinute( int );
            void setSecond( int );

            // Funções get
            int getHour();
            int getMinute();
            int getSecond();

            // Funções de Impressão
            void printUniversal();
            void printStandard();
        private:
            int hour; // 0 - 23 (formato de relógio de 24 horas)
            int minute; // 0 - 59
            int second; // 0 - 59
    }; // Time
#endif