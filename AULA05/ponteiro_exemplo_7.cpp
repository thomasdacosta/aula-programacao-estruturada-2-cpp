#include <iostream>

using namespace std;

int main()
{
	int *ptr;
	int x;
	
	ptr = &x;
	*ptr = 999;
	
	cout << &x << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
}
