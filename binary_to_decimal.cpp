/*
Title       : Binary to Decimal Conversion
Description : This program converts binary number(base 2) to decimal number(base 10), its max limit is 5 digit binary number ,this program doesn't works with binary values with points (eg: 11.11, 1011.0101)
formula     : decimal=16*e+8*d+4*c+2*b+1*a

Sample Output
Enter binary number (max 5 digit) : 10101
Decimal value of 10101 is : 21
*/

#include<iostream>
#include <string>
using namespace std;

int binary_to_dec(int x){
    int a=0,b=0,c=0,d=0,e=0,num2,num3,num4,num5;
    a=x%10;
    num2=x/10;
    b=num2%10;
    num3=num2/10;
    c=num3%10;
    num4=num3/10;
    d=num4%10;
    num5=num4/10;
    e=num5%10;
    int decimal=16*e+8*d+4*c+2*b+1*a;
    cout <<"Decimal value of "<<x<<" is : "<<decimal<<endl;
    return 0;
}

int main(){
    int x;
    cout<<"Enter binary number (max 5 digit) : ";
    cin >>x;
    binary_to_dec(x);
}