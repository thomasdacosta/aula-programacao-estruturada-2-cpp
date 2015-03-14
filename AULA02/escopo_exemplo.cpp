#include <iostream>

using namespace std;

int global = 0;
void escopo(int x);

int main()
{
	int a = 1;
	{
		int b = 1;
		cout << "Escopo mais interno: " << b << endl;
	}
	escopo(100);
	cout << "Escopo local: " << a << endl;
}

void escopo(int x)
{
	cout << "Escopo local: " << x << endl;
	cout << "Escopo global: " << global << endl;
}
