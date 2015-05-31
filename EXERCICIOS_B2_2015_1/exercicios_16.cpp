#include <iostream>

using namespace std;

int main()
{
	int *ptr1, *ptr2, *ptr3;
	int x, y, z;
	
	ptr1 = &x;
	ptr2 = &y;
	ptr3 = &z;
	
	y = 2015;
	z = 1900;
	*ptr1 = 1886;
	
	*ptr1 = (*ptr1) + 3;
	*ptr3 = (*ptr3) - 900;
	
	cout << x << endl;	
	cout << y << endl;
	cout << z << endl;
}
