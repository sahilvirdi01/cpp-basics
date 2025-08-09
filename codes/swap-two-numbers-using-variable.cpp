// Program : Swap two numbers
// Description : This program swaps two numbers using a third variable

// Sample Output 
// Enter value of A : 5
// Enter value of B : 3
// A is :
// B is :

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter value of A : ";
    cin >> a;
    cout << "Enter value of B : ";
    cin >> b;
    c=a;
    a=b;
    b=c;
    cout << " A is : " << a<<endl;
    cout << " B is : " << b<<endl;
    return 0;
}