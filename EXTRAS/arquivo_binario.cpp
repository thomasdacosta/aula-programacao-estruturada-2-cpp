#include <iostream>
#include <fstream>
#include <limits>
#include <strings.h>

using namespace std;

struct funcionario
{
	char nome[255];
	int idade;
};

void criar_arquivo();
void ler_arquivo();
void ler_arquivo_fstream();

int main()
{
	//criar_arquivo();
	ler_arquivo();
	
	//ler_arquivo_fstream();
	//ler_arquivo();
}

void criar_arquivo()
{
	funcionario func;
	
	ofstream of;
	of.open("arquivo_variaveis_binario.dat", ios::binary | ios::app);
	
	if (!of.is_open())
	{
		cerr << "Não foi possivel abrir o arquivo.";
		return;
	}
	
	cout << "Digite o nome do funcionario:" << endl;
	gets(func.nome);
	
	cout << "Digite a idade do funcionario:" << endl;
	cin >> func.idade;
	
	of.write((char*)&func, sizeof(funcionario));
	
	of.close();	
}

void ler_arquivo()
{
	ifstream ifs;
	ifs.open("arquivo_variaveis_binario.dat", ios::binary | ios::in);
	
	if (!ifs.is_open())
	{
		cerr << "Não foi possivel abrir o arquivo.";
		return;
	}	

	funcionario func_read;
	while (ifs.read((char*)&func_read, sizeof(funcionario)))
	{
		cout << "---------- Registro" << endl;
		cout << func_read.nome << endl;
		cout << func_read.idade << endl;
	}
	
	cout << "***********************************" << endl;
	
	ifs.close();
}

void ler_arquivo_fstream()
{
	fstream fstr;
	fstr.open("arquivo_variaveis_binario.dat", ios::in | ios::out | ios::binary);
	
	funcionario func_read;
	while (fstr.read((char*)&func_read, sizeof(funcionario)))
	{
		cout << "---------- Registro" << endl;
		cout << func_read.nome << endl;
		cout << func_read.idade << endl;
		
		if (strcmp(func_read.nome,"b") == 0)
		{
			strcpy(func_read.nome,"Thomas");
			fstr.write((char*)&func_read, sizeof(funcionario));
		}
	}
	
	cout << "***********************************" << endl;
	
	fstr.close();	
}
