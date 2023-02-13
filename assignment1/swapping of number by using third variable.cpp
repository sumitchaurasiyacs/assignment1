#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
	cout<<"enter the value of num1 and num2";
	cin>>num1>>num2;
	num3=num2;
	num2=num1;
	num1=num3;
	cout<<"swapping of number is "<<num1<<endl<<num2;
	return 0;	
}

