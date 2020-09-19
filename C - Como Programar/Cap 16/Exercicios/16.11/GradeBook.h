// Questão 16.11
// Interface GradeBook

#include <string>

using namespace std;

class GradeBook {
    public:
        GradeBook( string nameOfCourse, string nameOfInstructor );
        void setCourseName( string nameOfCourse );
        string getCourseName();
        void setInstructorName( string nameOfInstructor );
        string getInstructorName();
        void displayMessage();
    private:
        string courseName;
        string instructorName;
}; // fim da classe GradeBook