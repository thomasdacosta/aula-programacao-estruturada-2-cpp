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
	
	cout << *ptr << endl;
	cout << total << endl;
}
