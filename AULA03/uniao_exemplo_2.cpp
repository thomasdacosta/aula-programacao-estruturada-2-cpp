#include <iostream>

using namespace std;

union valor_union
{
	int valor_1;
	float valor_2;
	double valor_3;
	char valor_4;
} valor;

void imprimir();

int main()
{
	cin >> valor.valor_1;
	imprimir();
	
	cin >> valor.valor_2;
	imprimir();	
	
	cin >> valor.valor_3;
	imprimir();	
	
	cin >> valor.valor_4;
	imprimir();	
}

void imprimir()
{
	cout << "Valores:" << endl;
	cout << valor.valor_1 << endl;
	cout << valor.valor_2 << endl;
	cout << valor.valor_3 << endl;
	cout << valor.valor_4 << endl;	
}

