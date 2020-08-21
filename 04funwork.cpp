//Funwork
//1. WAP in C++ that print your introduction.


//2. WAP in c that find area of circle. FORMULA PI*r^2
#include <iostream>
using namespace std;

int main(){
	const float PI = 3.14;
	cout<<"Enter radius: "<<endl;
	int radius;
	float area;
	
	cin>>radius;
	
	area = PI * radius * radius;
	cout<<"The area is :" <<area;
	return 0;
	
}

