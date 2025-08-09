/*
 Title       : Check Prime Number
 Description : Checks if a number is prime or not.
 Formula     : A prime number is divisible only by 1 and itself.
 Note        : 1 is not considered prime.

 Sample Output:
 Enter a number: 7
 7 is a prime number.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } 
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number."<< endl;
    else
        cout << num << " is not a prime number."<< endl;

    return 0;
}
