#include <iostream>

using namespace std;

struct usuario
{
	char nome[255];
	double salario;
};

void imposto_renda(usuario usu);

int main()
{
	usuario usu;
	imposto_renda(usu);
}

void imposto_renda(usuario usu)
{
	cout << "Digite o nome do usuario:" << endl;
	gets(usu.nome);
	
	cout << "Digite o valor do salario:" << endl;
	cin >> usu.salario;
	
	cout << "Valor do imposto de renda:" << usu.salario * 0.275 << endl;
}
