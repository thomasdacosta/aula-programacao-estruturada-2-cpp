#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
	char nome[100];
	int ra;
} aluno_tecnologia;

void imprimir_aluno(char *nome, int ra);

int main()
{
	cout << "Digite o nome do aluno:";
	gets(aluno_tecnologia.nome);
	
	cout << "Digite o RA do aluno:";	
	cin >> aluno_tecnologia.ra;
	
	imprimir_aluno(aluno_tecnologia.nome, 
					aluno_tecnologia.ra);
}

void imprimir_aluno(char *nome, int ra)
{
	cout << nome << endl;
	cout << ra << endl;
}
