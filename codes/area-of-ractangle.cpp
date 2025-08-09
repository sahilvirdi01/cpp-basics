/*
 Title       : Area of Rectangle
 Description : Calculates the area of a rectangle using its length and breadth.
 Formula     : area = length * breadth

 Sample Output:
 Enter length: 5
 Enter breadth: 3
 Area of Rectangle = 15
*/

#include <iostream>
using namespace std;

int main() {
    double length, breadth, area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area of Rectangle = " << area << endl;
    return 0;
}
