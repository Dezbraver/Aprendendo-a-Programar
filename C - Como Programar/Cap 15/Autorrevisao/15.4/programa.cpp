/* Questão 15.4 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

inline double sphereVolume( const double radius ) {
    return ( 4.0 / 3.0 ) * 3.14159 * pow( radius, 3 );
} /* sphereVolume */

int main() {
    double r;

    system( "chcp 65001 > NUL" );

    cout << "Digite o raio da esfera: ";
    cin >> r;
    
    cout << "O volume da esfera é " << sphereVolume( r ) << endl;

    system( "pause" );
} /* main */