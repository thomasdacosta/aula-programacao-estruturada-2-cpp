/**

	Gravação dos tipos primitivos no arquivo

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
	int valor_1;
	double valor_2;
	float valor_3;
	char valor_4;
	
	cin >> valor_1;
	cin >> valor_2;	
	cin >> valor_3;
	cin >> valor_4;	
	
	ofstream ofs;
	ofs.open("numeros.txt", ios::out);
	
	ofs << valor_1 << endl;
	ofs << valor_2 << endl;
	ofs << valor_3 << endl;
	ofs << valor_4 << endl;
	ofs.close();	
}
