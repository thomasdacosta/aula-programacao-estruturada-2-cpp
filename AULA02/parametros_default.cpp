#include <iostream>

using namespace std;

double media(double b1 = 0, double b2 = 0);

int main()
{
	cout << "Media Default:" << media() << endl;
	cout << "Media Aluno:" << media(6.5, 6.5) << endl;
}

double media(double b1, double b2)
{
	return (b1 + b2) / 2;
}
