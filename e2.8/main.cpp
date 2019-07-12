/*
 •• E2.8
 Write a program that asks the user for the lengths of the sides of a rectangle and then prints
 
 •The area and perimeter of the rectangle
 •The length of the diagonal (use the Pythagorean theorem)
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float side1;
    float side2;
    
    cout << "Enter length for side 1: ";
    cin >> side1;
    cout << "Enter length for side 2: ";
    cin >> side2;
    
    float side3 = sqrt(pow(side1, 2) + pow(side2, 2));
    cout << "The length of side 3 is: " << side3 << endl;
    cout << "The area of the triangle is: " << (side1 * side2) / 2 << endl;
    cout << "The perimeter of the triangle is: " << side1 + side2 + side3 << endl;
    
    
}
