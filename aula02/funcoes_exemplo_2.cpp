#include <iostream>

using namespace std;

int raiz_quadrada(int x);

int main()
{
	int x;
	cout << "Digite um numero:\n";
	cin >> x;
	cout << "Raiz quadrada de " << x << " é " << raiz_quadrada(x);
}

int raiz_quadrada(int x)
{
	return x * x;	
}
