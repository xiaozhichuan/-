//Fig. 3.11: fig03_11.h
//GradeBook member-function definitions. This file contains
//implementations of member functions prototyped in GradeBook.h

#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    GradeBook gradeBook1 ("CS101 introduction to programming in C++","Xiaoming");
    GradeBook gradeBook2("CS102 C++ data Structures inC++","Lisa");


    cout << "gradeBook1 created for course:" << gradeBook1.getCourseName() << "\ngradeBook2 created for teacher:" << gradeBook2.getTeacherName()<<endl;
}

//Fig. 3.11: fig03_11.h
//GradeBook member-function definitions. This file contains
//implementations of member functions prototyped in GradeBook.h
