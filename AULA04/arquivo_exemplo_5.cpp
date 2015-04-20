/**

	Gravação de um arquivo efetuando append no final

**/
#include <iostream>
#include <fstream>
#include <strings.h>

using namespace std;

void gravar_fim_arquivo();

int main()
{
	gravar_fim_arquivo();
}

void gravar_fim_arquivo()
{
	string valor;
	valor = "Nova linha no arquivo";
	
	ofstream ofs;
	ofs.open("arquivo_linhas.txt", ios::out | ios::app);
	ofs << valor << endl;
	ofs.close();	
}
