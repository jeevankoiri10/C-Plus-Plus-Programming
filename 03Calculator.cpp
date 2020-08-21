#include <iostream>
using namespace std;

int main()
{
	
	// assigning values and declare variables
	int num1, num2;
	cout<<"Enter Num1: ";
	cin>>num1;
	
	cout<<"Enter Num2: ";
	cin>>num2;
	
	int sum, diff, mul, div, mod;
	//Processing with formula 
	sum = num1 + num2;
	diff = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;
	
	// Print
	cout << "The sum is " <<sum <<" i.e."<<num1<<" + "<<num2<<" is "<<sum <<endl;
	cout << "The diff is " <<diff <<" i.e."<<num1<<" - "<<num2<<" is "<<diff <<endl;
	cout << "The mul is " <<mul <<" i.e."<<num1<<" * "<<num2<<" is "<<mul <<endl;
	cout << "The div is " <<div <<" i.e."<<num1<<" / "<<num2<<" is "<<div <<endl;
	cout << "The mod is " <<mod <<" i.e."<<num1<<" % "<<num2<<" is "<<mod <<endl;
	
	
	
	
	
	
	return 0;
}
