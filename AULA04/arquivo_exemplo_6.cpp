/**

	Gravação de um arquivo com várias linhas

**/
#include <iostream>
#include <fstream>
#include <strings.h>

using namespace std;

void gravar_arquivo();

int main()
{
	gravar_arquivo();
}

void gravar_arquivo()
{
	string valor;
	
	ofstream ofs;
	ofs.open("arquivo_linhas.txt", ios::out);
	
	valor = "O que são funções:";
	ofs << valor << endl;
	
	valor = "São rotinas que tem como objetivo, "
			"executar trechos de códigos de forma modular, "
			"melhorando a organização do programa e evitando repetição de código.";
	ofs << valor << endl;	
	
	valor = "As funções são reutilizáveis dentro de um programa.";
	ofs << valor << endl;	
	
	ofs.close();	
}
