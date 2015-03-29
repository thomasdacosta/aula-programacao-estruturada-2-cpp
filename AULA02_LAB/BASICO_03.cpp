#include <iostream>

using namespace std;

enum despesas
{
	ALUGUEL,
	FACULDADE,
	AGUA = 100,
	LUZ
};

int main()
{
	int valor;
	cout << "Digite o tipo da despesa:" << endl;
	cin >> valor;
	
	switch (valor) {
		case ALUGUEL: {
			cout << "Aluguel";
			break;
		}
		case FACULDADE: {
			cout << "Faculdade";
			break;
		}
		default: {
			cout << "Não encontrado";
			break;
		}
	}
}

