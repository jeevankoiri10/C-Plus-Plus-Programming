//Inheritance 

#include <iostream>
using namespace std;
class Rect{
	public:
		int len;
		int bre;
		
	Rect(){
		cout<<"This is constructor of rectangle";
	}
};

class Cube: public Rect{
	public:
		int hei;
		
	Cube(){
		cout<<"This is constructor of Cube";
	}
};

int main(){
	
	Cube c;
	
	return 0;
}
