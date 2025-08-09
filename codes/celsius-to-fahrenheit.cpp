/*
 Title       : Convert Celsius to Fahrenheit
 Description : Converts temperature from Celsius to Fahrenheit.
 Formula     : F = (C * 9/5) + 32
 Sample Output:
 Enter temperature in Celsius: 0
 Temperature in Fahrenheit = 32
*/

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit<< endl;
    return 0;
}
