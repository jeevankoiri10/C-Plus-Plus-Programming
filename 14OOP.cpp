// OOP : method of creating software
// It is Internal design of code
// systematic software development

/*features:
1. Encapsulation  // data/function hiding 
2. Abstraction // data hiding only hiding
3. Polymorphism  // many form
4. Inheritance // One already used thing can be used for any time later

class -- BLUEPRINT
object  

*/

#include <iostream>
using namespace std;

class Person{
	// Public, Private, Protected
	public:
		
		//data properties
		int id;
		string name;
		float height;
		
	//function
	void printPersonDetails(){
		cout<<"Id is: "<<this->id <<". Name is "<< this->name;
		cout<<"His height is : "<<this->height;
	}	
};
 
int main(){
	Person p;
	p.id = 1;
	p.name = "Saurav";
	p.height = 5.5;
	
	p.printPersonDetails();
	
	
	return 0;
}
