/*
 Title       : Factorial of a Number
 Description : Calculates the factorial of a number using a loop.
 Formula     : factorial = n * (n-1) * (n-2) ... * 1
 Note        : Factorial of 0 is 1.
 Sample Output:
 Enter a number: 5
 Factorial = 120
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial = " << factorial<< endl;
    return 0;
}
