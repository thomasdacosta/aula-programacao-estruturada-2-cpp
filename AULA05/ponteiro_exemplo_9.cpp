#include <iostream>

using namespace std;

int main()
{
	double *ptr;
	double x;
	
	ptr = &x;
	*ptr = 999.98;
	
	cout << "Valor Original:" << ptr << endl;

	ptr++;	
	cout << "Incremento:" << ptr << endl;
	
	ptr--;
	cout << "Decremento:" << ptr << endl;
		
	(*ptr)++;
	cout << "Inc. valor:" << *ptr << endl;
	
	(*ptr)--;
	cout << "Dec. valor:" << *ptr << endl;
}
