#include <iostream>

using namespace std;

struct aluno_est
{
	char nome[255];
	double mensalidade;
};

union aluno_uni
{
	char nome[255];
	double mensalidade;	
};

int main()
{
	cout << "Tamanho da estrutura:" << sizeof(aluno_est) << endl;
	cout << "Tamanho da união:" << sizeof(aluno_uni) << endl;
}
