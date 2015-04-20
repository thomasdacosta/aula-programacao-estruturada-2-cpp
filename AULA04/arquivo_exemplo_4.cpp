/**

	Leitura dos tipos primitivos no arquivo

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
	int valor_1;
	double valor_2;
	float valor_3;
	char valor_4;
	
	ifstream ifs;
	ifs.open("numeros.txt", ios::in);	
	
	if (!ifs.is_open())
	{
		cout << "Não foi possivel abrir o arquivo" << endl;
		return;
	}
	
	ifs >> valor_1;
	ifs >> valor_2;
	ifs >> valor_3;
	ifs >> valor_4;
	
	cout << "Valores do arquivo:" << valor_1 << "," 
				<< valor_2 << "," << valor_3 << "," << valor_4;
	ifs.close();
}
