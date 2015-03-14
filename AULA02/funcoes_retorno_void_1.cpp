#include <iostream>

using namespace std;

void imprime_idade(int idade);

int main()
{
	int idade;
	cout << "Digite a sua idade:\n";
	cin >> idade;
	imprime_idade(idade);
}

void imprime_idade(int idade)
{
	cout << "Sua idade é: " << idade;
}

