#include <iostream>
using namespace std;
void showArray(int z[]);

int main()
{
	int a[5] = {1,2,3,4,5};
	showArray(a);
	
	return 0;
}

void showArray(int z[]){
	
	
	for(int i= 0; i < len; i++){
		cout << z[i]<<endl;
	}
}
