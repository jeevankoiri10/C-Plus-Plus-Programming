//condition and looping

//If condition
//if else condition
//if else if else condition

/*Looping

for Loop
for(init; condition;inc/Dec)
While Loop
Do while Loop

*/

#include <iostream>
using namespace std;

int main(){
	/*Synatax for if 
	if(condition){
		What to do if the condition is true
	}
	*/
	
	int age;
	cout <<"Enter age: ";
	cin>>age;
	if (age > 18)
	{
		cout<<"You are voter\n";
	}
	else
	{
		cout <<"You are not a voter\n";
	}
	return 0;
}
