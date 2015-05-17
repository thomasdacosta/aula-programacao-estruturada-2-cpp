#include <iostream>

using namespace std;

struct alunos
{
	char *nome;
	int idade;
	alunos *proximo;
} lista_alunos;

void inicializar_alunos();
void incluir_alunos();
void listar_alunos();

int main()
{
	inicializar_alunos();
	while (true)
	{
		incluir_alunos();	
		listar_alunos();
	}
}

void inicializar_alunos()
{
	lista_alunos.proximo = NULL;
}

void incluir_alunos()
{
	alunos alu;
	cout << "Digite o nome do aluno:";
	cin >> alu.nome;
	
	cout << "Digite a idade do aluno:";
	cin >> alu.idade;
	alu.proximo = NULL;
	
	while (lista_alunos.proximo)	
	{
		if (lista_alunos.proximo == NULL)
		{
			lista_alunos.proximo = &alu;
			break;
		}
	}
 	
}

void listar_alunos()
{
	alunos *p;
	for (p = lista_alunos.proximo;p->proximo != NULL;p = p->proximo)
	{
		cout << "Nome:" << p->nome << endl;
		cout << "Idade:" << p->idade << endl;
	}
}
