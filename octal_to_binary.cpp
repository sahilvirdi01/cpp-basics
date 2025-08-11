/*
Title       : Octal to Binary Conversion
Description : This program converts octal number(base 8), to binary number(base 2), It woks with two digit octal number. This program doesn't works with octal values with points (eg: 77.56, 23.15 etc)


Sample Output
Enter two digit octal number : 56
Binary conversion is : 101110
*/

#include<iostream>
using namespace std;

string bin_loop(int x){
    int c,c_1,d,d_1;
    string cs,ds,dss;
    c=x%2;
    c_1=x/2;
    d=c_1%2;
    d_1=c_1/2;
    cs=to_string(c);
    ds=to_string(d);
    dss=to_string(d_1);
    string num=dss+ds+cs;
    return num;
}
string oct_to_decimal(int x){
    int a=0,b=0,num2,c,c_1,d,d_1;
    string A,B;
    a=x%10; 
    num2=x/10;
    b=num2%10;
    A=bin_loop(b);
    B=bin_loop(a);
    string final=A+B;
    return final;
}

int main(){
    int x;
    cout<<"Enter two digit octal number : ";
    cin>>x;
    cout<<"Binary conversion is : "<<oct_to_decimal(x)<<endl;;
    return 0;
}