#include <iostream>

using namespace std;

int main()
{
	int *ptr_inteiro;
	double valor;
	
	valor = 345.76;
	ptr_inteiro = (int *)&valor;
	
	cout << *ptr_inteiro << endl;
}
