#include <iostream>
#include<cmath>
using namespace std;
 int square(int number)
 {
 	return number*number;
 }
  int main()
  {
  	int n;
  	cout<<"enter the number:";
  	cin>>n;
  	int square_number=square(n);
  	cout<<"the square number "<<square_number;
  }
