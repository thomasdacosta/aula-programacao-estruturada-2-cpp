#include <iostream>

using namespace std;

int main()
{
	int *ptr_1;
	int *ptr_2;
	int x, y;
	
	ptr_1 = &x;
	ptr_2 = &y;
	
	cout << ptr_1 << endl;
	cout << ptr_2 << endl;
	
	cout << (ptr_1 > ptr_2) << endl;
	cout << (ptr_1 < ptr_2) << endl;
	
	ptr_1 = &x;
	ptr_2 = &x;
	
	cout << (ptr_1 == ptr_2) << endl;
}
