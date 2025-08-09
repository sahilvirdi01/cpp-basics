/*
Title       : Area of Circle
Description : This program calculates the are of circle by its given radius.
Formula     : Area = pi x r x r

Sample Output 
Enter radius of circle : 5
Area of circle is : 78.6482
*/

#include<iostream>
using namespace std;

int main(){
    double radius,area;
    const double pi=3.14592653;
    cout << "Enter radius of circle : ";
    cin >> radius;
    area= pi*radius*radius;
    cout <<"Area of circle is : " << area << endl;
    return 0;
}