#include<iostream>
using namespace std;

int fibonaci(int n){
	if (n==1) return 0;
	if (n==2) return 1;
	return fibonaci(n-1)+fibonaci(n-2);
}
int main(){
	int n;
	cout<<"Enter term number : ";
	cin >>n;
	cout<<"Fibonaci number of "<<n<<"th term is : "<<fibonaci(n)<<endl;
	return 0;
}
    
