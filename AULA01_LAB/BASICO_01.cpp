#include <iostream>
#include <string.h>

using namespace std;

int total_vogais(char *palavra);

int main()
{
	char palavra[100];
	
	cout << "*** Quantidade de vogais de uma palavra ***" << endl;
	cout << "Digite uma palavra: ";
	cin >> palavra;
	
	cout << "Total de vogais na palavra: " << total_vogais(palavra) << endl;
}

int total_vogais(char *palavra)
{
	int vogais = 0;
	
	for (int i=0;i<=strlen(palavra)-1;i++)
	{
		switch (palavra[i])
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': 
			{
				vogais++;
				break;
			}
		}
	}
	
	return vogais;
}
