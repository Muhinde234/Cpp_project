#include <iostream>
using namespace std;
int main()
{
	int number=5;
	int* pointer=&number;
	*pointer= number;
	cout<<*pointer<<endl;
	cout<< pointer;
}
