#include <iostream>

using namespace std;

double somar(double x, double y);
double subtrair(double x, double y);
double multiplicar(double x, double y);
double dividir(double x, double y);

int main()
{
	int opcao;
	
	cout << "Escolha uma operação\n";
	cout << "1 - Soma\n";
	cout << "2 - Subtração\n";
	cout << "3 - Multiplicação\n";
	cout << "4 - Divisão\n";
	
	cin >> opcao;
	
	double x, y;
	cout << "Digite os 2 números:";
	cin >> x >> y;
	
	switch (opcao)
	{
		case 1:
			cout << somar(x,y);
			break;
		case 2:
			cout << subtrair(x,y);
			break;
		case 3:
			cout << multiplicar(x,y);
			break;
		case 4:
			cout << dividir(x,y);
			break;
		defaul:
			cout << "Saindo do programa";
			break;
	}
}

double somar(double x, double y)
{
	double resultado = x + y;
	return resultado;
}

double subtrair(double x, double y)
{
	double resultado = x - y;
	return resultado;
}

double multiplicar(double x, double y)
{
	double resultado = x * y;
	return resultado;
}

double dividir(double x, double y)
{
	double resultado = x / y;
	return resultado;	
}

