/**

	Gravação simples de arquivo

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
	valor = "Ola Mundo";
	
	ofstream ofs;
	ofs.open("ola_mundo.txt", ios::out);
	ofs << valor;
	ofs.close();	
}
