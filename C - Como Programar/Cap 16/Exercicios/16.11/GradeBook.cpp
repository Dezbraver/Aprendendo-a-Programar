// Questão 16.11
// Definição/Implementação de GradeBook

#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook( string nameOfCourse, string nameOfInstructor ) {
    setCourseName( nameOfCourse );
    setInstructorName( nameOfInstructor );
} /* Construtor GradeBook */

void GradeBook::setCourseName( string nameOfCourse ) {
    courseName = nameOfCourse;
} /* setCourseName */

string GradeBook::getCourseName() {
    return courseName;
} /* getCourseName */

void GradeBook::setInstructorName( string nameOfInstructor ) {
    instructorName = nameOfInstructor;
} /* setInstructorName */

string GradeBook::getInstructorName() {
    return instructorName;
} /* getInstructorName */

void GradeBook::displayMessage() {
    cout << "Bem-vindo ao grade book para " << getCourseName() << "!\n"
            "Esse curso é apresentado por: " << getInstructorName()
         << endl;
} /* displayMessage */