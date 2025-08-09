/*
Title       : Even or odd number
Description : This program checks whether given number is even or odd.

Sample Output 
Enter a number : 79
Number is odd
*/

#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    if (a%2==0){
        cout << "Number is even " << endl;
    }
    else{
        cout << "Number is odd " << endl;
    }
    return 0;
}