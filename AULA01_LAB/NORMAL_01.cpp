#include <iostream>

using namespace std;

double dividir(double valor1, double valor2);

int main()
{
	int valor1;
	int valor2;
	int resultado;
	
	cout << "Digite o valor A:" << endl;
	cin >> valor1;
	
	cout << "Digite o valor B:" << endl;
	cin >> valor2;	
	
	resultado = dividir(valor1,valor2);
	cout << "Resultado:" << resultado;
}

double dividir(double valor1, double valor2)
{
	return valor1 / valor2;
}

