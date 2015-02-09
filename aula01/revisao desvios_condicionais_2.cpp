#include <iostream>

using namespace std;

int main()
{
	int opcao;
	cout << "Informe uma opção (1,2,3):";
	cin >> opcao;

	switch (opcao)
	{
		case 1:
			cout << "Opção 1 Selecionada";
			break;
		case 2:
			cout << "Opção 2 Selecionada";
			break;
		case 3:	
			cout << "Opção 3 Selecionada";
			break;
		default:
			cout << "Nenhuma Opção Selecionada";
			break;
	}	
}
