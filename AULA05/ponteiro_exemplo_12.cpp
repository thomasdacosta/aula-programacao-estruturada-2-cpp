#include <iostream>
#include <strings.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int *ptr_1, *ptr_2;
	int valor_1, valor_2;
	char valor_convertido[100];
	
	ptr_1 = &valor_1;
	ptr_2 = &valor_2;
	
	valor_1 = 316;
	valor_2 = 206;
	
	*ptr_1 = *ptr_1 << 2;
	cout << *ptr_1 << endl;
	
	*ptr_1 = *ptr_1 >> 2;
	cout << *ptr_1 << endl;
	
	itoa(*ptr_1, valor_convertido, 2);
	cout << "Valor binário:" << valor_convertido << endl;
	
	itoa(*ptr_2, valor_convertido, 2);
	cout << "Valor binário:" << valor_convertido << endl;
	
	itoa(*ptr_2 & *ptr_1, valor_convertido, 2);
	cout << "Operador AND:" << valor_convertido << endl;
	
	itoa(*ptr_2 | *ptr_1, valor_convertido, 2);
	cout << "Operador OR:" << valor_convertido << endl;	
	
	itoa(*ptr_2 ^ *ptr_1, valor_convertido, 2);
	cout << "Operador XOR:" << valor_convertido << endl;		
	
	itoa(~*ptr_2, valor_convertido, 2);
	cout << "Operador NEG:" << valor_convertido << endl;			
}
