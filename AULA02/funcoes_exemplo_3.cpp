#include <iostream>

using namespace std;

const double VALOR_DOLAR = 2.7;

void converte_real_dolar(double real);

int main()
{
	double valor_real;
	cout << "Valor em reais:";
	cin >> valor_real;
	
	converte_real_dolar(valor_real);
}

void converte_real_dolar(double real)
{
	if (real < 0)
	{
		cout << "O valor não pode ser menor que zero";
		return;
	}
	
	cout << "Valor convertido: " << real * VALOR_DOLAR;
}
