#include <iostream>

using namespace std;

int main()
{
	int i=1;
	int j=1;
	
	for (;i<=10;i++)
	{
		for (;j<=10;j++)
		{
			cout << i << "x" << j << "=" << (i * j) << "\n";
		}
		cout << "\n";
		j=1;
	}
	
	int fat=6;
	int fatorial = 1;
	
	while (fat >= 1)
	{
		fatorial *= fat;
		fat--;
	}
	
	cout << fatorial << "\n";
	
	for (int k=100;k>=1;k--)
	{
		int ret = k % 2;
		
		if (ret == 0)
		{
			cout << "Par:" << k << "\n";
		}
		else
		{
			cout << "Impar:" << k << "\n";			
		}
	}
}
