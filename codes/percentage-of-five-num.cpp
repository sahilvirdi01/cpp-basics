/*
Title       : Percentage of five number
Description : This program calculates the percentage of given five numbers.
Formula     : percentage = (sum of marks / total max marks) x 100

Sample Output 
Enter five numbers : 80 79 88 77 68
Percentage of given numbers = 78.4%
*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,sum;
    double percentage;
    cout <<"Enter five numbers (out of 100): ";
    cin >> a >> b >> c >> d >> e ;
    sum = a+b+c+d+e;
    percentage = ( sum / 500.0 ) * 100;
    cout << "Percentage of given numbers = " << percentage << "%" <<endl;
    return 0;
}

// Note : If both numbers in division are integers, C+ does integer division . To get correct percentage, make at least one number a double (example: use 500.0 or typecasting)