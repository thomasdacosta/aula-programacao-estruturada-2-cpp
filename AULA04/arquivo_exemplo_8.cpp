#include <iostream>
#include <fstream>
#include <strings.h>
#include <limits>

using namespace std;

struct alunos
{
	char nome[255];
	char ra[30];
	int idade;
};

void gravar_arquivo_registros();

int main()
{
	gravar_arquivo_registros();
}

void gravar_arquivo_registros()
{
	alunos alu;
	
	cout << "Digite o nome do aluno:";
	gets(alu.nome);
	
	cout << "Digite o RA do aluno:";
	gets(alu.ra);
	
	cout << "Digite a idade do aluno:";
	cin >> alu.idade;
	
	fstream fst;
	fst.open("registros.dat", ios::in | ios::out | ios::app);

	if (!fst.is_open())
	{
		cout << "Não foi possivel abrir o arquivo" << endl;
		return;
	}
	
	fst.write((char *)&alu, sizeof(alu));

	fst.close();
}
