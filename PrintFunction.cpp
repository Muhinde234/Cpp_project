#include <iostream>
using namespace std;
int print(int number)
{
	cout<<"the number :"<<number<<endl;
	
}
void print(string name)
{
	cout<<"name :"<<name;
	
}
int main()
{
	print(3);
	print("dosta");
	return 0;
}
