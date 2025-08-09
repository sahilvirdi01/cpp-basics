// Program : Sum of digits of five digits numbers
// Description : This program calculates the sum of individual digits of given five digits number.

// Sample Output 
// Enter a five digits number : 67584
// Sum = 30

#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,num1,num2,num3,num4,num5,sum;
    cout << "Enter a five digits number : ";
    cin >> num1;
    a=num1%10;
    num2=num1/10;
    b=num2%10;
    num3=num2/10;
    c=num3%10;
    num4=num3/10;
    d=num4%10;
    num5=num4/10;
    e=num5%10;
    sum = a+b+c+d+e;
    cout << "Sum = " << sum << endl;
    return 0;
}