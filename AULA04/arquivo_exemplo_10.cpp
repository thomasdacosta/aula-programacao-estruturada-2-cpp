#include <iostream>
#include <fstream>
#include <strings.h>
#include <limits>

using namespace std;

struct alunos
{
	long id;
	char nome[255];
	char ra[30];
	int idade;
};

void alterar_registros();

int main()
{
	alterar_registros();
}

void alterar_registros()
{
	alunos alu;
	char ra[30];
	char nome[255];
	
	cout << "Digite o RA:" << endl;
	gets(ra);
	
	cout << "Digite o novo nome do aluno:" << endl;
	gets(nome);
	
	fstream fst;
	fst.open("registros.dat", ios::in | ios::out | ios::binary);

	if (!fst.is_open())
	{
		cout << "Não foi possivel abrir o arquivo";
		return;
	}

	int posicao;	
	while (fst.read((char *)&alu,sizeof(alu)))
	{
		posicao++;
		if (strcmp(ra, alu.ra) == 0) 
		{
			strcpy(alu.nome, nome);
			break;
		}
	}

	fst.seekp((posicao - 1) * sizeof(alu));
	fst.write((char *)&alu,sizeof(alu));	
	fst.close();
}
