#include <iostream>

using namespace std;

int main()
{
	int *ptr;
	int valor;
	int total;
	
	valor = 1600;
	ptr = &valor;
	total = *ptr;
	
	cout << "valor:" << &valor << endl;
	cout << "ptr:" << &ptr << endl;
	cout << "total:" << &total << endl;
	
	cout << *ptr << endl;
	cout << total << endl;
}
