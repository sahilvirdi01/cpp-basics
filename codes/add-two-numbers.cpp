/*
 Title       : Add two numbers
 Description : Takes two integers from the user and prints their sum.
 Formula     : sum = a+b
 Sample Output:
 Enter two numbers : 3 4 
 Sum = 7
*/

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter two numbers : ";
    cin >> a,b;
    cout << "Sum = "<< a+b << endl;
    return 0;
}