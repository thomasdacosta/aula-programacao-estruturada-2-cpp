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

void ler_arquivo_registros();

int main()
{
	ler_arquivo_registros();
}

void ler_arquivo_registros()
{
	alunos alu;
	
	fstream fst;
	fst.open("registros.dat", ios::in | ios::out | ios::app | ios::binary);

	if (!fst.is_open())
	{
		cout << "Não foi possivel abrir o arquivo";
		return;
	}
	
	while (fst.read((char *)&alu,sizeof(alu)))
	{
		cout << "************************" << endl;
		cout << "Nome:" << alu.nome << endl;
		cout << "RA:" << alu.ra << endl;
		cout << "Idade:" << alu.idade << endl;
	}
	
	fst.close();
}
