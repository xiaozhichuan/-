#include <string>
using namespace std;

class GradeBook
{
public:
    explicit GradeBook (string ,string );
    void setCourseName (string );
    string getCourseName() const;
    void setTeacherName (string);
    string getTeacherName() const;
    void displayMessage() const ;
private:
    string courseName;
    string teacherName;

};
