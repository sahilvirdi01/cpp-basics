/*
Title       : To find if the given character is uppercase or lowercase
Description: This program checks the given character by transforming it to its corresponding ASCII code to determine whether it is uppercase or lowercase.

Sample Output
Enter a character : Z
Character is Lowercase
*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin >> ch;
    if ((int)ch>=65 && (int)ch<=90){
        cout<<"Character is Uppercase\n";
    }else if((int)ch>=97 && (int)ch<=122)
        cout<<"Character is Lowercase\n";
    else
        cout<<ch<<" is not a character\n";
    return 0;
}
