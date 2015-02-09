#include <iostream>

using namespace std;

int par_ou_impar(int numero);

int main()
{
	int numero, resultado;
	
	cout << "Digite um número:\n";
	cin >> numero;
	resultado = par_ou_impar(numero);
	
	if (resultado == 0)
		cout << "Par";
	else
		cout << "Impar"; 
}

int par_ou_impar(int numero)
{
	int valor = numero % 2;
	return valor;
}
