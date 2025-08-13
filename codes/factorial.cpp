#include<iostream>
using namespace std;

int factorial(int n){
	if (n==0){
		return 1;
	}
	int fact=n;
	fact=fact*factorial(n-1);
	return fact;
}

int main(){
	int n;
	cout<<"Enter number to find factorial of : ";
	cin >>n;
	cout<<"Factrial of "<<n<<" is : "<<factorial(n)<<endl;
	return 0;
}
