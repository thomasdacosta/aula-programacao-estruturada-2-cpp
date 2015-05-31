#include <iostream>

using namespace std;

struct estrutura1
{
	double valor1;
	float valor2;
};

union uniao2
{
	char valor;
	estrutura1 est;
};

union uniao1
{
	int valor;	
	uniao2 uni;
};

union uniao4
{
	char valor;
};

union uniao3
{
	uniao4 uni;
};

union uniao5 
{
	int valor1;
	struct est
	{
		float valor2;
		double valor3;	
	};	
};

int main()
{
	uniao1 uni1;
	uniao2 uni2;
	uniao3 uni3;
	uniao4 uni4;
	uniao5 uni5;
	estrutura1 est1;
	
	cout << sizeof(uni1) << endl;
	cout << sizeof(uni2) << endl;
	cout << sizeof(uni3) << endl;
	cout << sizeof(uni4) << endl;
	cout << sizeof(uni5) << endl;
	cout << sizeof(estrutura1) << endl;
	cout << "Uniao e estrutura" << endl;	
}
