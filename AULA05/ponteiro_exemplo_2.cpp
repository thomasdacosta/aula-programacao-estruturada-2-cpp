#include <iostream>

using namespace std;

int main()
{
	int *ptr;
	int valor;
	
	valor = 1500;
	ptr = &valor;
	
	cout << ptr << endl;
	cout << *ptr << endl;
}
