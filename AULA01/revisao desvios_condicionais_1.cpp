#include <iostream>

using namespace std;

int main()
{
	int idade;
	cout << "Digite sua idade:";
	cin >> idade;
	
	if (idade >= 21)
	{
		cout << "Maior de idade";
	}
	else
	{
		cout << "Menor de idade";
	}
}
