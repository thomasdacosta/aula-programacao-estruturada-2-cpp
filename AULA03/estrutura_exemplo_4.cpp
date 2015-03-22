#include <iostream>
#include <string.h>

using namespace std;

struct demonstracao
{
	char string[100];
	char caracter;
	int valor_inteiro;
	double valor_double;
} demo;

int main()
{
	cout << "Digite o valor da string:" << endl;
	gets(demo.string);
	
	cout << "Digite os valores:" << endl;
	cin >> demo.caracter >> demo.valor_inteiro 
				>> demo.valor_double;
	
	cout << "Valores digitados:" << demo.string 
				<< "," << demo.caracter
				<< "," << demo.valor_inteiro
				<< "," << demo.valor_double << endl; 
}
