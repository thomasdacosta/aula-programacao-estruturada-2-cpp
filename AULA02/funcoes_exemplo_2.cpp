#include <iostream>

using namespace std;

int quadrado(int x);

int main()
{
	int x;
	cout << "Digite um numero:\n";
	cin >> x;
	cout << "Quadrado de " << x << " é " << quadrado(x);
}

int quadrado(int x)
{
	return x * x;	
}
