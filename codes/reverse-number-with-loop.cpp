/*
 Title       : Reverse a Number (With Loop)
 Description : Reverses any number using a loop.
 Formula     : reverse = reverse*10 + (num % 10), num = num / 10 until num == 0
 Sample Output:
 Enter a number: 4567
 Reversed Number = 7654
*/

#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        reverse = reverse * 10 + (num % 10);
        num = num / 10;
    }

    cout << "Reversed Number = " << reverse<< endl;
    return 0;
}
