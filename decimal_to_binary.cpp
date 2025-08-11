/*
Title       : Decimal to Binary Conversion
Description : This program converts decimal number(base 10), to binary number(base 2), its max limit is decimal number 15. This program doesn't works with decimal values with points (eg: 11.1, 7.85 etc)


Sample Output
Enter binary number (max 5 digit) : 10101
Decimal value of 10101 is : 21
*/

#include<iostream>
using namespace std;

int decimal_to_bin(int x){
    int a,a_1,b,b_1,c,c_1;
    a=x%2;
    a_1=x/2;
    b=a_1%2;
    b_1=a_1/2;
    c=b_1%2;
    c_1=b_1/2;
    cout<<"Binary number is : "<<c_1<<c<<b<<a<<endl;
    return 0;
}
int main(){
    int x;
    cout<<"Enter decimal number (max number 15) : ";
    cin>>x;
    decimal_to_bin(x);
    return 0;
}