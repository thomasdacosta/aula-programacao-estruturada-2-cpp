#include <iostream>

using namespace std;

int main()
{
	int a;
	{
		int b;
		{
			int c;
			{
				int d;
				{
					int e;
					{
						cout << e << endl;
					}
				}
			}
		}
	}
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
}
