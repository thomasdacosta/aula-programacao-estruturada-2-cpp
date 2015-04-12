#include <iostream>

using namespace std;

struct ble 
{
	int teste1;
	float teste2;
};

union bla
{
	char a;
	char c;
	ble b;	
};

int main()
{
	cout << sizeof(int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(bla) << endl;
}
