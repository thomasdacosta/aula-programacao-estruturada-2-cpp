#include <iostream>
#include <string.h>

using namespace std;

void imprime_vetor(int *valores);

int main()
{
	int valores[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	imprime_vetor(valores);
}

void imprime_vetor(int *valores)
{
	for (int i=0;i<=9;i++)
	{
		cout << "valores[" << i << "] :" << valores[i] << endl;
	}
}
