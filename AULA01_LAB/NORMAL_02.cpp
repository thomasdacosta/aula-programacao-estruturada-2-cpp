#include <iostream>

using namespace std;

int main()
{
	int opcao;
	char aluno[100];
	char ra[100];
	
	double nota1;
	double nota2;
	
	cout << "Entre com o nome do aluno:" << endl;
	cin >> aluno;
	
	cout << "Entre com a RA do aluno:" << endl;
	cin >> ra;
	
	cout << "Digite a nota B1:" << endl;
	cin >> nota1;
	
	cout << "Digite a nota B2:" << endl;
	cin >> nota2;	
	
	cout << "A média do aluno é:" << ((nota1 + nota2) / 2) << endl;
}
