#include <iostream>

using namespace std;

struct demonstracao
{
	char caracter;
	double valor1;
	float valor2;
	int valor3;
} demo;

int main()
{
	demo.caracter = 'A';
	demo.valor1 = 3.2;
	demo.valor2 = 6.7;
	demo.valor3 = 45;
	
	cout << demo.caracter << endl;
	cout << demo.valor1 << endl;
	cout << demo.valor2 << endl;
	cout << demo.valor3 << endl;
}
