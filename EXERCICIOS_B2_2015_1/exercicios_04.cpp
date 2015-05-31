#include <iostream>

using namespace std;

int soma(int &a, int b);

int main()
{	
	int valor1;
	int valor2;
	
	cout << "Digite o primeiro valor:" << endl;
	cin >> valor1;
	
	cout << "Digite o segundo valor:" << endl;
	cin >> valor2;	
	
	cout << soma(valor1, valor2) << endl;
	cout << "Valor 1:" << valor1 << endl;
	cout << "Valor 2:" << valor2 << endl;
}

int soma(int &a, int b)
{
	a = 100;
	b = 100;
	return a + b;
}
