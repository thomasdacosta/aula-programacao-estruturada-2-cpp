#include <iostream>

using namespace std;


void funcao_a(int valor)
{
	valor = 20;
	cout << valor << endl;	
}

void funcao_b(int valor)
{
	valor = 10;
	cout << valor << endl;
}

void funcao_c(int &valor);
void funcao_d(int &valor);

int main()
{
	int valor = 9;
	funcao_a(valor);
	
	int valor1 = 8;
	funcao_b(valor1);
	
	cout << valor << "," << valor1 << endl;
	
	int valor2 = 5;
	funcao_c(valor2);	
	
	int valor3 = 78;
	funcao_d(valor3);		
	
	cout << valor2 << "," << valor3 << endl;
}

void funcao_c(int &valor)
{
	valor = 11;
	cout << valor << endl;		
}

void funcao_d(int &valor)
{
	valor = 12;
	cout << valor << endl;			
}


