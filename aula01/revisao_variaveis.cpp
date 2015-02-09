#include <iostream>

using namespace std;

int main()
{
	const float numero_pi = 3.14;
	char genero = 'M';
	int idade = 31;
	float nota_final = 8.5;
	double salario = 1200.12;
	
	cout << "Variáveis:" << genero << "," << idade << "," << nota_final 
		 << "," << salario << "," << numero_pi << endl;
	
	double nota1, nota2;
	cout << "Digite as notas:" << endl;
	cin >> nota1 >> nota2;
	cout << "Notas: " << nota1 << "-" << nota2;
	
}
