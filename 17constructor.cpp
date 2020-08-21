#include <iostream>
using namespace std;

class Rectangle{
	private:
		int len;
		int bre;
	int calculateArea()   // This function is by default Private
	{
		return len * bre;     
	}
	public:
		//Use of Constructor
		Rectangle(int l, int b){
			this->len  = l;
			this->bre = b;
		}
	
//		void setLength(int l){
//			if (l<0)
//			{
//				len = 0;
//			}
//			else
//			{
//				this->len = l;
//			}
//		}
//		void setBreath(int b){
//			this->bre = b;
//		}
		
		void displayArea(){
			cout<<"The area is "<<calculateArea();
		}
};
int main()
{
	//Rectangle r;
	//instead do
	Rectangle r(10,40);
//	
//	r.setLength(2);
//	r.setBreath(4);
	
	r.displayArea();
	
	return 0;
}
	
