/*
 Title       : Calculator
 Description : This is a CLI based calculator that can perform basic tasks like addition, subtraction, multiplication, divison etc.


 No Sample Output !

 Note : If you are on Linux or Mac chage the following commands
 1. system("timeout /t 1 >nul");  ----->   system("sleep 1")
 2. system("cls");				  ----->   system("clear")

*/

#include <iostream>
using namespace std;

void add();
int menu();

void add(){
	char yes;
	int input;
	system("cls");
	cout << "|--------ADITTION---------|\n\n";
	float sum,a,b=0,c=0,d=0,e=0;
	cout << "How many numbers you want to add (max 5) : ";
	cin >> input;
	if (input>5){
		cout << "wrong input"<<endl;
		system("timeout /t 1 >nul");
		add();
	}
	if (input>=1){
	cout << "Enter first number : " ;
	cin >> a;
	}
	if (input>=2){
	cout << "Enter second number : " ;
	cin >> b;
	}
	if (input>=3){
	cout << "Enter third number : " ;
	cin >> c;
	}
	if (input>=4){
	cout << "Enter fourth number : " ;
	cin >> d;
	}
	if (input>=5){
	cout << "Enter fifth number : " ;
	cin >> e;
	}

	sum=a+b+c+d+e;
	cout << "sum is : " << sum << endl;

	cout << "Enter y to do again or n to exit : ";
	cin >> yes;
	if (yes=='y'){
		add();
	}
	else if (yes=='n'){
		menu();
	}
	else{
		cout << "An error occured ! \n";
		system("timeout /t 1 >nul");
		add();
	}
}

void subt(){
	char yes;
	float sub,a,b=0,c=0,d=0,e=0;
	int input;
	system("cls");
	cout << "|--------SUBTRACTION---------|\n\n";
	cout << "How many numbers you want to subtract (max 5) : ";
	cin >> input;
	if (input>=1){
	cout << "Enter first number : " ;
	cin >> a;
	}
	if (input>=2){
	cout << "Enter second number : " ;
	cin >> b;
	}
	if (input>=3){
	cout << "Enter third number : " ;
	cin >> c;
	}
	if (input>=4){
	cout << "Enter fourth number : " ;
	cin >> d;
	}
	if (input>=5){
	cout << "Enter fifth number : " ;
	cin >> e;
	}
	
	sub=a-b-c-d-e;
	cout << "Subtraction of the given numbers : "<<sub<<endl;
	cout << "Enter y to do again or n to exit : ";
	cin >> yes;
	if (yes=='y'){
		subt();
	}
	else if (yes=='n'){
		menu();
	}
	else{
		cout << "An error occured ! \n";
		system("timeout /t 1 >nul");
		subt();
	}
}

void multy(){
	char yes;
	int input,a=1,b=1,c=1,d=1,e=1;
	system("cls");
	cout << "|--------MULTIPLICATION---------|\n\n";
	float num1=1,num2=1,num3=1,num4=1,num5=1;
	cout << "How many numbers you want to multiply (max 5) : ";
	cin >> input;
	if (input>=1){
	cout << "Enter first number : " ;
	cin >> a;
	}
	if (input>=2){
	cout << "Enter second number : " ;
	cin >> b;
	}
	if (input>=3){
	cout << "Enter third number : " ;
	cin >> c;
	}
	if (input>=4){
	cout << "Enter fourth number : " ;
	cin >> d;
	}
	if (input>=5){
	cout << "Enter fifth number : " ;
	cin >> e;
	}
	
	int mult= a*b*c*d*e;
	cout << "Multiplication of the given numbers : "<< mult <<endl;
	cout << "Enter y to do again or n to exit : ";
	cin >> yes;
	if (yes=='y'){
		multy();
	}
	else if (yes=='n'){
		menu();
	}
	else{
		cout << "An error occured ! \n";
		system("timeout /t 1 >nul");
		multy();
	}
}

void div(){
	char yes;
	system("cls");
	cout << "|--------DIVISON---------|\n\n";
	float num1,num2;
	cout << "Enter first number : ";
	cin >> num1;
	cout << "Enter second number : ";
	cin >> num2;
	float divs=num1/num2;
	cout << "Division of the given numbers : "<<divs<<endl;
	cout << "Enter y to do again or n to exit : ";
	cin >> yes;
	if (yes=='y'){
		div();
	}
	else if (yes=='n'){
		menu();
	}
	else{
		cout << "An error occured ! \n";
		system("timeout /t 1 >nul");
		div();
	}
}

void mod(){
	char yes;
	system("cls");
	cout << "|--------MODULUS---------|\n\n";
	int num1,num2;
	cout << "Enter first number : ";
	cin >> num1;
	cout << "Enter second number : ";
	cin >> num2;
	int rem=num1%num2;
	cout << "Modulus of the given numbers : "<<rem<<endl;
	cout << "Enter y to do again or n to exit : ";
	cin >> yes;
	if (yes=='y'){
		mod();
	}
	else if (yes=='n'){
		menu();
	}
	else{
		cout << "An error occured ! \n";
		system("timeout /t 1 >nul");
		mod();
	}
}

int menu(){
	int input;
	system("cls");
	cout << "\n\n";
	cout << "|------------CALCULATOR----------|\n"<<endl;
	cout << "1. Addition"<<endl;
	cout << "2. Subtraction"<<endl;
	cout << "3. Multiplication"<<endl;
	cout << "4. Division"<<endl;
	cout << "5. Modulus"<<endl;
	cout << "6. Exit"<<endl;
	cout << "Choose your option (1-6) : ";
	cin >> input ;

	if (input == 1){
		add() ;
	}
	else if (input == 2)
	{
		subt();
	}
	else if (input == 3)
	{
		multy();
	}
	else if (input == 4)
	{
		div();
	}
	else if (input == 5)
	{
		mod();
	}
	system("cls");
	return 0;
}

int main(){
	menu();
}