#include <iostream>
#include <string.h>

using namespace std;

struct demonstracao
{
	char string[100];
	int vetor_inteiro[10];
	double vetor_double[5];
} demo;

int main()
{
	strcpy(demo.string, "Valor da String 1");
	
	demo.vetor_inteiro[0] = 1;
	demo.vetor_inteiro[2] = 2;
	demo.vetor_double[4] = 5.6;
	
	cout << demo.string << endl;
	cout << demo.vetor_inteiro[0] << endl;
	cout << demo.vetor_inteiro[2] << endl;
	cout << demo.vetor_double[4] << endl;
}
