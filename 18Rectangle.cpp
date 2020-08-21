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
		void setLength(int l){
			if (l<0)
			{
				len = 0;
			}
			else
			{
				this->len = l;
			}
		}
		void setBreath(int b){
			this->bre = b;
		}
		
		void displayArea(){
			cout<<"The area is "<<calculateArea();
		}
};
int main()
{
	Rectangle r;
	r.setLength(2);
	r.setBreath(4);
	
	r.displayArea();
	
	return 0;
}
	
