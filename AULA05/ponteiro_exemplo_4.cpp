#include <iostream>

using namespace std;

int main()
{
	// PROGRAMA COM ERRO NAO COMPILA !!!!
	int *ptr_inteiro;
	double valor;
	
	valor = 345.76;
	ptr_inteiro = &valor;
	
	cout << *ptr_inteiro << endl;
}
