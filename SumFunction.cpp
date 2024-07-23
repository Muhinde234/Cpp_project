#include <iostream>
using namespace std;
int sum(int number1,int number2)
{
	return number1+number2;
}
int main()
{
	int A,B;
	cout<<"enter first number :";
	cin>>A;
	cout<<"enter second number :";
	cin>>B;
	cout<<"the sum of two number:"<<sum(A,B);
}
