/* Questão 16.11 */

#include <iostream>
#include <cstdlib>
#include "GradeBook.h"

using namespace std;

int main() {
    system( "chcp 65001 > NUL" );

    GradeBook gradeBook1( "Introdução à Programação C++", "João Pedro Barbosa Medeiros" );

    cout << "Nome do Curso: " << gradeBook1.getCourseName()
         << "\nNome do Instrutor: " << gradeBook1.getInstructorName()
         << endl;

    cout << endl;
    gradeBook1.displayMessage();

    gradeBook1.setCourseName( "Programação C++" );
    gradeBook1.setInstructorName( "João Pedro B. Medeiros" );

    cout << endl;
    gradeBook1.displayMessage();

    system( "pause" );
} /* main */