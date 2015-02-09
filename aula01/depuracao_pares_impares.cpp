#include <iostream>

using namespace std;

int main()
{
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
