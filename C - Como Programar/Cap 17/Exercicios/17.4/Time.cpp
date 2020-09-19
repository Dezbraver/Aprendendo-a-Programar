// Questão 17.4
// Definições das funções-membro da classe Time

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Time.h"

using namespace std;

Time::Time() {
    time_t t;
    time( &t );
    struct tm *timeInfo = localtime( &t );
    setTime( timeInfo->tm_hour, timeInfo->tm_min, timeInfo->tm_sec );
} // Time (construtor)

void Time::setTime( int h, int m, int s ) {
    setHour( h );
    setMinute( m );
    setSecond( s );
} // setTime

void Time::setHour( int h ) {
    hour = h >= 0 && h < 24? h: 0;
} // setHour

void Time::setMinute( int m ) {
    minute = m >= 0 && m < 60? m: 0;
} // setMinute

void Time::setSecond( int s ) {
    second = s >= 0 && s < 60? s: 0;
} // setSecond

int Time::getHour() {
    return hour;
} // getHour

int Time::getMinute() {
    return minute;
} // getMinute

int Time::getSecond() {
    return second;
} // getSecond

void Time::printUniversal() {
    cout << setfill( '0' ) << setw( 2 ) << getHour() << ':'
         << setw( 2 ) << getMinute() << ':' << setw( 2 ) << getSecond();
} // printUniversal

void Time::printStandard() {
    cout << ( getHour() == 0 || getHour() == 12 ? 12 : getHour() % 12 ) << setfill( '0' ) << ':'
         << setw( 2 ) << getMinute() << ':' << setw( 2 ) << getSecond() << ( getHour() < 12 ? " AM" : " PM" );
} // printStandard