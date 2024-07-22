#include <iostream>
using namespace std;
int main()
{
	int number=2;
	int* ptr=&number;
	*ptr=number;
	cout<<"the value :"<<*ptr;
}
