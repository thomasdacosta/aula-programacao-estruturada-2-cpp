#include <iostream>

using namespace std;

void imprimir(int x, int y);
void multiplicar(int x, int y);
void pares_impares(int x, int y);
void soma(int x, int y);

int main()
{
	int valor_inicial;
	int valor_final;
	
	cout << "Digite o valor inicial:";	
	cin >> valor_inicial;
	
	cout << "Digite o valor final:";
	cin >> valor_final;
	
	imprimir(valor_inicial, valor_final);
	multiplicar(valor_inicial, valor_final);
	pares_impares(valor_inicial, valor_final);
	soma(valor_inicial, valor_final);
}

void imprimir(int x, int y)
{
	cout << "Imprimindo faixa de valores:";
	for (int i=y;i>=x;i--)
	{
		cout << i << ",";
	}
	cout << endl;
}

void multiplicar(int x, int y)
{
	cout << "Multiplicando faixa de valores:";
	int mult = 1;
	for (int i=y;i>=x;i--)
	{
		mult *= i;
	}	
	cout << mult << endl;	
}

void pares_impares(int x, int y)
{
	cout << "Pares e impares da faixa de valores:";
	for (int i=y;i>=x;i--)
	{
		if ((i % 2) == 0)
			cout << i << "=PAR,";
		else
			cout << i << "=IMPAR,";
	}	
	cout << endl;
}

void soma(int x, int y)
{
	cout << "Somando faixa de valores:";
	int soma;
	for (int i=y;i>=x;i--)
	{
		soma += i;
	}	
	cout << soma << endl;
}
