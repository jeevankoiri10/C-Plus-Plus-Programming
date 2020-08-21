//condition and looping
//if else if else condition


/* Operators Details
==, &&, || -- or Operator

*/

#include <iostream>
using namespace std;

int main(){
	int day;
	cout<<"Enter no of day: "<<endl;
	cin >> day;	
	
	if (day == 1)
	{
		cout<<"Sunday\n";
	}
	else if(day == 2)    // Remember Here is else(space)if not elseif as in C 
	{
		cout<<"Monday\n";
	}
	else if (day == 3)
	{
		cout<<"Tuesday\n";
	}
	else if (day == 4)
	{
		cout<<"Wednesday\n";
	}
	else if (day == 5)
	{
		cout<<"Thrusday\n";
	}
	else if (day == 6 && 1==2)
	{
		cout<<"Friday\n";
	}
	else if (day == 7)
	{
		cout<<"Saturday\n";
	}
	else
		cout<<"Invalid";
			
	return 0;
}
