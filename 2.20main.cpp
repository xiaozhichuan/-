//Fig. 2.20: fig02_20.cpp
//Addition program that displays the diameter,perimeter and area
#include<iostream> // allows program to output data to the screen

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

//function main begins program execution

int main()
{
    //variable declarations
    int radius =0; // first integer to calculate (initialized to 0)
    int diameter =0; // diameter of radius multiply by the 3.14159
    int perimeter =0;//perimeter of radius multiply by the 2*3.141590
    int area =0; //area of radius multiply by the radius*3.14159

    cout << "Enter first integer:";//prompt user the data
    cin >> radius; //read integer from user into radius

    diameter = radius * 3.14159; //multiply the numbers; store result in diameter
    perimeter = 2*3.14159*radius;//multiply the numbers; store result in perimeter
    area = 3.14159*radius*radius; //multiply the numbers; store result in area

    cout << "Diameter is" << diameter << endl; //display the diameter; end line
    cout << "Perimeter is" << perimeter << endl; // display the perimeter; end line
    cout  << "Area is" << area << endl; // display the area ;end line
}//end function main
