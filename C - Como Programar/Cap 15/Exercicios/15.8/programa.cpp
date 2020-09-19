/* Questão 15.8 */

#include <iostream>
#include <cstdlib>

using namespace std;

template < typename T >
T minimum( T value1, T value2 ) {
    if ( value2 < value1 )
        return value2;

    return value1;
} /* min Template */

int main() {
    system( "chcp 65001 > NUL" );

    cout << "O resultado para 1 e 2 é " << minimum( 1, 2 ) << endl;

    cout << "O resultado para 'j' e 'c' é " << minimum( 'j', 'c' ) << endl;

    cout << "O resultado para 2.50 e 2.63 é " << minimum( 2.50, 2.63 ) << endl;

    system( "pause" );
} /* main */