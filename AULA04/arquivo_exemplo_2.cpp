/**

	Leitura simples de arquivo

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
	string valor;

	ifstream ifs;
	ifs.open("ola_mundo.txt", ios::in);	
	
	if (!ifs.is_open())
	{
		cout << "Não foi possivel abrir o arquivo" << endl;
		return;
	}
	
	getline(ifs, valor);
	cout << "Conteúdo do Arquivo:" << valor << endl;
	ifs.close();
}
