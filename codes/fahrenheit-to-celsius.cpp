/*
 Title       : Convert Fahrenheit to Celsius
 Description : Converts temperature from Fahrenheit to Celsius.
 Formula     : C = (F - 32) * 5/9
 Sample Output:
 Enter temperature in Fahrenheit: 32
 Temperature in Celsius = 0
*/

#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Celsius = " << celsius<< endl;
    return 0;
}
