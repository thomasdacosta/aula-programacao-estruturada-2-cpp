#include <iostream>

using namespace std;

void troca(int a, int b);

int main()
{
	int a = 10;
	int b = 20;
	troca(a, b);
	cout << "Valor de A e B não foi alterado:" << a << b << endl;
}

void troca(int a, int b)
{
	a = b;
	b = a + 100;
	cout << "Valor de A e B: " << a << b << endl;
}
