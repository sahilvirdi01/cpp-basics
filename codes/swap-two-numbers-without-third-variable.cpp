// Program : Swap two numbers
// Description : This program swaps two numbers withot using a third variable

// Sample Output 
// Enter value of A : 8
// Enter value of B : 5
// A is : 5
// B is : 8

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter value of A : ";
    cin >> a;
    cout << "Enter value of B : ";
    cin >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << " A is : " << a<<endl;
    cout << " B is : " << b<<endl;
    return 0;
}