#include <iostream>

using namespace std;

int calcular_fatorial(int valor);

int main()
{
	cout << "Valor do fatorial:" << calcular_fatorial(6);
}

int calcular_fatorial(int valor)
{
	if (valor == 0)
		return 1;
	else 
	{
		valor = (valor * calcular_fatorial(valor - 1));	
		cout << valor << endl;
		return valor;
	}
}
