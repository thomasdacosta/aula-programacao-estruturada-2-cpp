#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
	char nome[100];
	int ra;
} aluno_tecnologia;

void troca_aluno(char *nome, int &ra);

int main()
{
	cout << "Digite o nome do aluno:";
	gets(aluno_tecnologia.nome);
	
	cout << "Digite o RA do aluno:";	
	cin >> aluno_tecnologia.ra;
	
	troca_aluno(aluno_tecnologia.nome, 
				aluno_tecnologia.ra);
	cout << aluno_tecnologia.nome;
	cout << aluno_tecnologia.ra;
}

void troca_aluno(char *nome, int &ra)
{
	strcpy(nome, "Novo Aluno");
	ra = 123456;
}
