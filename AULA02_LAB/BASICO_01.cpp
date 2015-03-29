#include <iostream>

void imprimir_aluno(struct aluno alu);

using namespace std;

struct aluno
{
	char nome[255];
	int ra;
};

int main()
{
	aluno alu;
	
	cout << "Digite o nome:" << endl;
	gets(alu.nome);
	
	cout << "Digite o RA" << endl;
	cin >> alu.ra;
	
	imprimir_aluno(alu);
}

void imprimir_aluno(struct aluno alu)
{
	cout << alu.nome << endl;
	cout << alu.ra << endl;
}
