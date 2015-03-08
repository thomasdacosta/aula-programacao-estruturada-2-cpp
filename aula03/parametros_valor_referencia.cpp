#include <iostream>

using namespace std;

void troca(int &a, int &b);

int main()
{
	int a = 10;
	int b = 20;
	cout << "Valor de A e B original:" << a << "-" << b << endl;
	troca(a, b);
	cout << "Valor de A e B FOI alterado:" << a << "-" << b << endl;
}

void troca(int &a, int &b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
}
