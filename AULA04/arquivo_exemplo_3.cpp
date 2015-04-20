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
	
	cout << "Digite o primeiro numero:" << endl;
	cin >> valor_1;
	
	cout << "Digite o segundo numero:" << endl;
	cin >> valor_2;	
	
	cout << "Digite o terceiro numero:" << endl;
	cin >> valor_3;
	
	cout << "Digite o quarto numero:" << endl;
	cin >> valor_4;	
	
	ofstream ofs;
	ofs.open("numeros.txt", ios::out);
	
	ofs << valor_1 << endl;
	ofs << valor_2 << endl;
	ofs << valor_3 << endl;
	ofs << valor_4 << endl;
	ofs.close();	
}
