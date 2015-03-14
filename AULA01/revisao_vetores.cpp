#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int k[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // inicializando um vetor
	
	for (int i=9;i>=0;i--)
	{
		k[i] = i;
		cout << k[i] << "\n";
	}
	
	char nome1[10] = "João"; // uma string
	char nome2[10] = "Maria";
	strcat(nome2, " das Graças"); // concatena duas strings
	cout << "Nome1, Nome2: " << nome1 << "," << nome2 << "\n";
	cout << "Tamanho do Nome1: " << strlen(nome1) << "\n"; // tamanho de uma string
	cout << "Tamanho do Nome2: " << strlen(nome2) << "\n";
	cout << "Comparando:" << strcmp(nome1, nome2) << "\n"; // compara duas strings
	
	char usuario[100];
	gets(usuario);	// lê a string do teclado
	cout << "Usuário: " << usuario;
		
}
