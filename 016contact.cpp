// MY OWN Program for OOP
#include <iostream>
using namespace std;

class Contact{
	public:
		string name[100];
		string phone[100];
	
	void inputContact(int i){
		cout<<"Enter name: ";
		cin>>this->name[i];
		cout<<"Enter Phone number: ";
		cin>>this->phone[i];
	}
	
	void displayContact(int j){
		cout<<"Name: "<<this->name[j]<<endl;
		cout<<"Phone number: "<<this->phone[j]<<endl;
		
	}
};
int main()
{
	Contact c;
	c.inputContact(0);
	c.displayContact(0);
	
	return 0;
}
