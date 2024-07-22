#include <iostream>
using namespace std;
int swap(int &X, int &Y)
{
int temp=X;
X=Y;
Y=temp;	
}
int main()
{
int A=10;
int B=2;
 cout<<"the number A before swap:"<<A<<endl;
  cout<<"the number B before swap:"<<B;
 swap(A,B);
 cout<<"\nthe number A after swap:"<<A<<endl;
 cout<<"the number B after swap:"<<B;
}
