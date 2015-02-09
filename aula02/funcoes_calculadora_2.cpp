#include <iostream>

using namespace std;

double somar(double x, double y);
double subtrair(double x, double y);
double multiplicar(double x, double y);
double dividir(double x, double y);

int main()
{
	double x, y;
	
	cout << "Digite os valores para somar:\n";
	cin >> x >> y;
	cout << somar(x, y);	
	
	cout << "Digite os valores para subtrair:\n";
	cin >> x >> y;
	cout << subtrair(x, y);
	
	cout << "Digite os valores para multiplicar:\n";
	cin >> x >> y;
	cout << multiplicar(x, y);
	
	cout << "Digite os valores para dividir:\n";
	cin >> x >> y;
	cout << dividir(x, y);
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

