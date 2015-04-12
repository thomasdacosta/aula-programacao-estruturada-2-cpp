#include <iostream>

using namespace std;

double calcular_media(double num1, double num2, double num3);
double quadrado(double numero);
double soma(double num1, double num2, double num3);

int main()
{
	double num1;
	double num2;
	double num3;
	
	cout << "Digite o primeiro numero:" << endl;
	cin >> num1;
	
	cout << "Digite o segundo numero:" << endl;
	cin >> num2;
	
	cout << "Digite o terceiro numero:" << endl;
	cin >> num3;
	
	cout << "Media:" << calcular_media(num1, num2, num3) << endl;	
	cout << "Quadrado:" << quadrado(num1) << "," << quadrado(num2) << "," << quadrado(num3) << endl;
	cout << "Soma:" << soma(num1, num2, num3);
}

double calcular_media(double num1, double num2, double num3)
{
	return (num1 + num2 + num3) / 3;
}

double quadrado(double numero)
{
	return numero * numero;
}

double soma(double num1, double num2, double num3)
{
	return num1 + num2 + num3;
}
