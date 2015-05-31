#include <iostream>

using namespace std;

struct estrutura
{
	int membro1; //4 bytes
	char membro2; //1 bytes
	float membro3; //4 bytes
	double membro4; //8 bytes
};

union uniao
{
	int membro1;
	char membro2;
	estrutura estru;
};

void ler_uniao(uniao uni);
void ler_estrutura(uniao uni);
void mostrar_uniao(uniao uni);

int main()
{
	uniao uni;

	cout << "Tamanho da uniao:" << sizeof(uniao) << endl;
	
	ler_uniao(uni);
	ler_estrutura(uni);	
}

void ler_uniao(uniao uni)
{
	cout << "Digite o valor do membro 1 da uniao:" << endl;
	cin >> uni.membro1;
	
	cout << "Digite o valor do membro 2 da uniao:" << endl;
	cin >> uni.membro2;
}

void ler_estrutura(uniao uni)
{
	cout << "Digite o valor do membro1 da estrutura:" << endl;
	cin >> uni.estru.membro1;
	
	cout << "Digite o valor do membro2 da estrutura:" << endl;
	cin >> uni.estru.membro2;
	
	cout << "Digite o valor do membro3 da estrutura:" << endl;
	cin >> uni.estru.membro3;		
	
	cout << "Digite o valor do membro4 da estrutura:" << endl;
	cin >> uni.estru.membro4;			
	
	mostrar_uniao(uni);
}

void mostrar_uniao(uniao uni)
{
	cout << "---- Uniao:" << endl;
	cout << "membro1:" << uni.membro1 << endl;
	cout << "membro2:" << uni.membro2 << endl;
	
	cout << "---- Estrutura:" << endl;
	cout << "membro1:" << uni.estru.membro1 << endl;
	cout << "membro2:" << uni.estru.membro2 << endl;
	cout << "membro3:" << uni.estru.membro3 << endl;
	cout << "membro4:" << uni.estru.membro4 << endl;
}
