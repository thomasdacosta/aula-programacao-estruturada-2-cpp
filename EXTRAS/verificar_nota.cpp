#include <iostream>

using namespace std;

double nota_para_passar(double notab1);

int main()
{
	double notab1;
	
	cout << "**** PROGRAMA PARA VERIFICAR QUANTO PRECISO TIRAR NA B2 PARA PASSAR."  << endl;
	cout << "Digite a nota da B1:";
	cin >> notab1;
	
	cout << endl << endl;
	cout << "***** NOTA DA PROVA PARA PASSAR *****" << endl;
	cout << "Nota B2: " << nota_para_passar(notab1);
}

double nota_para_passar(double notab1)
{
	double notab2;
	
	notab2 = (6 - (notab1*0.4)) / 0.6;
	return notab2;	
}
