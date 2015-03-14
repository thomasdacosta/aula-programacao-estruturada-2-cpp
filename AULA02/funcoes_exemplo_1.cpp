#include <iostream>

using namespace std;

void imprimir();

int main()
{
	imprimir();
}

void imprimir()
{
	char valor[10];
	
	cout << "Digite algo:\n";
	gets(valor);
	cout << valor;
}
