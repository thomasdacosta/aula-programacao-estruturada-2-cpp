#include <iostream>

using namespace std;

int pares_impares(int numero);

int main()
{
	int numero;
	int resultado;
	
	for (;;)
	{
		cout << "Digite um numero ou digite zero para sair:" << endl;
		cin >> numero;
		resultado = pares_impares(numero);
		
		if (resultado == 0)
			cout << "Par" << endl;
		else
			cout << "Impar" << endl;
		
		if (numero == 0)
			break;
	}
}

int pares_impares(int numero)
{
	return numero % 2;
}
