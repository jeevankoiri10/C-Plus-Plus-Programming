// Data types
/* int => 1,2,3,4,  -100
float => 1.2, 0.06, -2.6
double => more paisa or any
bool => True False
char => single character 
string => .....series of characters 
*/
#include <iostream>
//#define height 6.0
using namespace std;
 
int main(){
	// storing values in different datatype
	int age = 20;
	const float height = 6.0;
	double salary = 50000.0;
	bool isMarried = false;
	char gender = 'M';
	string name = "Jeevan Koiri";

	
	
	// Printing the values
	cout << "Name is "<< name <<". Gender is "<< gender <<
	".with height"<<height <<"He is "<<age <<"year young."<<
	"He married = "<<isMarried<<"His salary is "<<salary;
	
	return 0;
}

