#include <iostream>

using namespace std;

int main()
{
	int fat=6;
	int fatorial = 1;
	
	while (fat >= 1)
	{
		fatorial *= fat;
		fat--;
	}
	
	cout << fatorial << "\n";
	
}
