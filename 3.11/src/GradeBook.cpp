//Fig. 3.12 : GradeBook.cpp
#include<iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name,string name1)

{
setCourseName(name);
setTeacherName(name1);

}

  void GradeBook::setCourseName(string name)
  {
      courseName = name;// store the course name in the object
  } //end function setCourseName


  void GradeBook::setTeacherName (string name1)
  {
      teacherName = name1;//store the teacher name in the object
  } // end function setTeacherName
//function to get the course name

string GradeBook::getCourseName() const

{
    return courseName;

}//end function getCourseName

string GradeBook::getTeacherName() const

{
     return teacherName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << "\nThis course name id presented by\n" << "!" <<endl;

}// end function displayMessage
