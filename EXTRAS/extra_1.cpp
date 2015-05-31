#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

void criar_arquivo();
void ler_arquivo();

int main()
{
	criar_arquivo();
	ler_arquivo();
}

void criar_arquivo()
{
	char valor1[255];
	int valor2;
	double valor3;
	float valor4;
	
	cout << "Digite o valor 1:" << endl;
	gets(valor1);
	
	cout << "Digite o valor 2:" << endl;
	cin >> valor2;
	
	cout << "Digite o valor 3:" << endl;
	cin >> valor3;	
	
	cout << "Digite o valor 4:" << endl;
	cin >> valor4;	
	
	ofstream of;
	of.open("arquivo_variaveis.txt", ios::app);
	
	if (!of.is_open())
	{
		cerr << "Não foi possivel abrir o arquivo.";
		return;
	}
	
	of << valor1 << endl;
	of << valor2 << endl;
	of << valor3 << endl;
	of << valor4;
	of.close();
}

void ler_arquivo()
{
	char valor1[255];
	int valor2;
	double valor3;
	float valor4;		
	
	ifstream ifs;
	ifs.open("arquivo_variaveis.txt", ios::in);
	
	if (!ifs.is_open())
	{
		cerr << "Não foi possivel abrir o arquivo.";
		return;
	}
	
	while(!ifs.eof())
	{
		ifs >> valor1;
		ifs >> valor2;
		ifs >> valor3;
		ifs >> valor4;
		
		cout << valor1 << endl;
		cout << valor2 << endl;
		cout << valor3 << endl;
		cout << valor4 << endl;
		
		cout << "-----------------Linha" << endl;
	}
		
	ifs.close();
}
