#include <iostream>

using namespace std;

struct estrutura
{
	double valor1;
	float valor2;
};

union uniao
{
	int valor1;
	float valor2;
	double valor3;
	struct estrutura est;
	
} uniao1, uniao2;

int main()
{
	cout << "Tamanho uniao1:" << sizeof(uniao1) << endl;
	cout << "Tamanho estrutura:" << sizeof(uniao2) << endl;
}
