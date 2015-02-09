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
}
