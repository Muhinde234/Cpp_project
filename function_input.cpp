#include <iostream>
using namespace std;
int add(int number1,int number2)
{
	
	return number1+number2;
}
int main()
{
	int A,B;
	cout<<"enter the first number :";
	cin>>A;
	cout<<"enter the second number :";
	cin>>B;

	int result= add(A,B);
	cout<<"the sum of two numbers:"<<result;
}
