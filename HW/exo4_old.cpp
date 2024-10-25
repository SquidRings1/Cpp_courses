/*
Write a student class  that stores a student name and average.

It has:

-  constructor that initializes data members

- member functions to:  set and get the student's name, set and get the average,  determine & return the student's letter grade.
*/

#include <iostream>
#include <string.h>

using namespace std;


class Student {
    private:
        string name;
        int avarage_grade;
    public:
        void setName(string name)
        {
            this->name = name;
        }
        string getName()
        {
            return name;
        }

        char actual_avarage_grade()
        {
            return letterGrade(avarage_grade);
        }

        
        int set_student_grade(int avarage_grade)
        {
            this->avarage_grade = avarage_grade;
        }

        char letterGrade(int set_student_grade)
        {
            if (avarage_grade >= 90)
                return 'A';
            if (avarage_grade >= 80)
                return 'B';
            if (avarage_grade >= 70)
                return 'C';
            if (avarage_grade >= 60)
                return 'D';
            else
                return 'F';
        }

        // default class
        Student() : name(""), avarage_grade(85) {}

        Student(string account_name, int avarage_grade_request)
        {
            this->name = account_name;
            this->avarage_grade = avarage_grade_request;
        }
};

int main()
{
    Student thestudent;

    thestudent.setName("haris");

    cout << "Student name: " << thestudent.getName() << endl;

    cout << "Student grade: " << thestudent.actual_avarage_grade() << endl;

    thestudent.set_student_grade(90);
    
    cout << "Student grade: " << thestudent.actual_avarage_grade() << endl;

    return 0;
}
