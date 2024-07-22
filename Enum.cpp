#include <iostream>
using namespace std;

enum weekday{Sunday=0,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday
};
int main()
{
	int day;
	cout<<"enter the number 0-6 corresponding to get the day : ";
	cin>>day;
	switch(day)
	{
	
		case Sunday:cout<<"Sunday"<<endl;break;
		case Monday:cout<<"Monday"<<endl;break;
		case Tuesday:cout<<"Tuesday"<<endl;break;
		case Wednesday:cout<<"Sunday"<<endl;break;
		case Thursday:cout<<"Thursday"<<endl;break;
		case Friday:cout<<"Friday"<<endl;break;
		case Saturday:cout<<"Saturday"<<endl;break;
		
	
	}
	return 0;
}
