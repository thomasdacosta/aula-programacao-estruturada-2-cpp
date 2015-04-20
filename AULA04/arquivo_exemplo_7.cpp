/**

	Ler um arquivo com várias linhas

**/
#include <iostream>
#include <fstream>
#include <strings.h>

using namespace std;

void ler_arquivo();

int main()
{
	ler_arquivo();
}

void ler_arquivo()
{
	string linha;
	
	ifstream ifs;
	ifs.open("arquivo_linhas.txt", ios::in);
	
	if (!ifs.is_open())
	{
		cout << "Não foi possivel abrir o arquivo" << endl;
		return;
	}
	
	while (getline(ifs, linha))
	{
		cout << linha << endl;
	}

	ifs.close();	
}
