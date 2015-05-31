#include <iostream>

using namespace std;

void ponteiros(int *ptr1, int *ptr2, int &ptr3);

int main() 
{
	int *ptr1;
	int *ptr2;
	int *ptr3;
	
	int a,b,c;
	a = 10;
	b = 20;
	c = 30;
	
	ptr1 = &a;
	ptr2 = &b;
	ptr3 = &c;
	
	ponteiros(ptr1, ptr2, c);
	
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
	cout << *ptr3 << endl;
}

void ponteiros(int *ptr1, int *ptr2, int &ptr3)
{
	int a = 1000;
	int b = 2000;
	ptr1 = &a;
	ptr3 = b;
}
