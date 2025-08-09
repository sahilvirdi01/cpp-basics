/*
 Title       : Reverse a Number (Without Loop)
 Description : Reverses a 3-digit number without using a loop.
 Formula     : reverse = (num % 10)*100 + ((num / 10) % 10)*10 + (num / 100)
 Note        : Works only for 3-digit numbers in this version.
 Sample Output:
 Enter a 3-digit number: 123
 Reversed Number = 321
*/

#include <iostream>
using namespace std;

int main() {
    int num, reverse;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    reverse = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    cout << "Reversed Number = " << reverse<< endl;
    return 0;
}
