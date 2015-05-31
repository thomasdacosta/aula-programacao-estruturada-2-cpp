#include <iostream>

using namespace std;

// Duas funções com passagem de valor por paramêtros
void funcao_a(int valor)
{
	cout << valor << endl;
}

void funcao_b(char valor)
{
	cout << valor << endl;
}

// Duas funções utilizando passagem de valor por referência
void funcao_c(float &valor);
void funcao_d(double &valor);

int main()
{
	funcao_a(100);
	funcao_b('A');
	
	float valor_c;
	cout << "Digite um valor:" << endl;
	cin >> valor_c;
	
	funcao_c(valor_c);
	cout << "valor_c:" << valor_c << endl;
	
	double valor_d;
	cout << "Digite um valor:" << endl;
	cin >> valor_d;
	
	funcao_d(valor_d);
	cout << "valor_d:" << valor_d << endl;	
}

void funcao_c(float &valor)
{
	valor = 400;
}

void funcao_d(double &valor)
{
	valor = 500;
}

