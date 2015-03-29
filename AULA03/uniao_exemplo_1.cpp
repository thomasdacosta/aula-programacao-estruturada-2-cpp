#include <iostream>

using namespace std;

struct valor_estr
{
	int valor_1;
	float valor_2;
	double valor_3;
	char valor_4;
};

union valor_union
{
	int valor_1;
	float valor_2;
	double valor_3;
	char valor_4;
};

int main()
{
	cout << sizeof(valor_estr) << endl;	
	cout << sizeof(valor_union) << endl;
}
