#include <iostream>

using namespace std;

int potencia(int base, int expoente);

int main()
{
	int base = 5;
	int expoente = 3;
	cout << "Potencia:" << potencia(base, expoente);
}

int potencia(int base, int expoente)
{
	if (expoente == 0)
		return 1;
	else
	{
		int valor = base * potencia(base, expoente - 1);
		cout << valor << endl;
		return valor;
	}
		
}
