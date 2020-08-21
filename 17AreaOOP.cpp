// Area using class and object

#include <iostream>
using namespace std;

class Circle{
	public:
		float radius;
		
	double findArea(){
		return 3.14 * radius * radius;
	} 
};

int main(){
	
	Circle c1, c2;
	c1.radius = 100;
	c2.radius = 200;
	
	cout<<"The area of C1 is "<<c1.findArea();
	cout<<"The area of C2 is "<<c2.findArea();
	
}
