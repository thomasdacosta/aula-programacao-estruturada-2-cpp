#include <iostream>
#include <strings.h>

using namespace std;

struct aluno
{
	char nome[255];
	int ra;
	int serie;
	int turma;
	char curso[100];
} aluno_anhanguera;

struct aluno aluno_tecnologia;

aluno aluno_curso;

int main()
{
	cout << sizeof(aluno_anhanguera.nome) << endl;
	cout << sizeof(aluno_anhanguera.ra) << endl;
	cout << sizeof(aluno_anhanguera.serie) << endl;
	cout << sizeof(aluno_anhanguera.turma) << endl;
	cout << sizeof(aluno_anhanguera.curso) << endl;
	cout << sizeof(aluno_anhanguera);
}
