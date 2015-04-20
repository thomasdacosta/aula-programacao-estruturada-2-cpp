#include <iostream>
#include <fstream>

using namespace std;

struct aluno
{
	char nome[255];
	int ra;
	int idade;
};

int main()
{
	aluno alu;
	
	cout << "Digite o nome do aluno:" << endl;
	gets(alu.nome);
	
	cout << "Digite o RA do aluno" << endl;
	cin >> alu.ra;
	
	cout << "Digite a idade do aluno" << endl;
	cin >> alu.idade;
	
	ofstream out("alunos.dat",ios::out | ios::binary);
	
	if (!out)
	{
		cout << "Não foi possivel abrir o arquivo";
		return -1;
	}
	
	out.write((char *)&alu, sizeof(aluno));
	out.close();
	
	ifstream in("alunos.dat",ios::in | ios::binary);
	
	if (!in)
	{
		cout << "Não foi possivel abrir o arquivo";
		return -1;
	}
		
}
