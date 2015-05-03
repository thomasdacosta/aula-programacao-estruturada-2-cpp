#include <iostream>

using namespace std;

int main()
{
	int *ptr_inteiro;
	double valor_1;
	double valor_2;
	
	valor_1 = 345.76;
	ptr_inteiro = (int *)&valor_1;
	valor_2 = *ptr_inteiro;
	
	cout << valor_1 << endl;
	cout << *ptr_inteiro << endl;
	cout << valor_2 << endl;
}
