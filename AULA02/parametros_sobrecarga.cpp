#include <iostream>
#include <string.h>

using namespace std;

void imprime_vetor(char *valores);
void imprime_vetor(int *valores);
void imprime_vetor(int *valores, int tamanho);

int main()
{
	int valores[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	char nome[10] = {'a','n','h','a','n','g','u','e','r','a'};
	imprime_vetor(nome);
	imprime_vetor(valores);
	imprime_vetor(valores, 10);
}

void imprime_vetor(char *valores)
{
	cout << "void imprime_vetor(char *valores)" << endl;
	for (int i=0;i<=9;i++)
	{
		cout << "valores[" << i << "] :" << valores[i] << endl;
	}	
}

void imprime_vetor(int *valores)
{
	cout << "void imprime_vetor(int *valores)" << endl;
	for (int i=0;i<=9;i++)
	{
		cout << "valores[" << i << "] :" << valores[i] << endl;
	}
}

void imprime_vetor(int *valores, int tamanho)
{
	cout << "void imprime_vetor(int *valores, int tamanho)" << endl;
	for (int i=0;i<tamanho;i++)
	{
		cout << "valores[" << i << "] :" << valores[i] << endl;
	}
}
