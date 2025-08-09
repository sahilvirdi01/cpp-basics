/*
 Title       : Perimeter of Rectangle
 Description : Calculates the perimeter of a rectangle using its length and breadth.
 Formula     : perimeter = 2 * (length + breadth)
 Sample Output:
 Enter length: 5
 Enter breadth: 3
 Perimeter of Rectangle = 16
*/

#include <iostream>
using namespace std;

int main() {
    double length, breadth, perimeter;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    perimeter = 2 * (length + breadth);

    cout << "Perimeter of Rectangle = " << perimeter<< endl;
    return 0;
}
