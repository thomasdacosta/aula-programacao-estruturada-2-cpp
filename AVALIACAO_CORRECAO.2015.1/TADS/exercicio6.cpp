#include <iostream>
#include <limits>
#include <strings.h>
#include <conio.h>

using namespace std;

enum menu
{
	INCLUIR = 1,
	LISTAR = 2,
	SAIR = 0
};

struct produto
{
	char nome[255];
	char fabricante[255];
	double preco;
	char data_validade[255];	
};

void validar_campo_inteiro(int &valor);
void validar_campo_double(double &valor);
void imprimir_menu(int &opcao);
void incluir_produto(produto *prod);
void listar_produto(produto *prod);
void inicializar_produto(produto *prod);

int main()
{
	produto prod[100];
	int opcao;
	
	inicializar_produto(prod);
	
	for (;;)
	{
		system("cls");
		imprimir_menu(opcao);
		
		if (opcao == INCLUIR)
			incluir_produto(prod);
		
		if (opcao == LISTAR)
			listar_produto(prod);
		
		if (opcao == SAIR)
		{
			cout << "Saindo..." << endl;
			break;
		}
	}
}

void imprimir_menu(int &opcao)
{
	cout << "***** Escollha uma opcao *****" << endl;
	cout << "[1] - Incluir" << endl;
	cout << "[2] - Listar" << endl;
	cout << "[0] - Sair" << endl;
	
	validar_campo_inteiro(opcao);
}

void validar_campo_inteiro(int &valor)
{
	for (;;)
	{
	    if (cin >> valor) {
	    	break;
		} else {
	        cout << "ERRO. Por favor digite um numero inteiro:" << endl;
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    }	
	}
}

void validar_campo_double(double &valor)
{
	for (;;)
	{
	    if (cin >> valor) {
	    	break;
		} else {
	        cout << "ERRO. Por favor digite um numero inteiro:" << endl;
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    }	
	}	
}

void incluir_produto(produto *prod)
{
	produto prod_aux;
	
	cout << "Digite o nome do produto:" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	gets(prod_aux.nome);
	
	cout << "Digite o fabricante do produto:" << endl;
	gets(prod_aux.fabricante);
	
	cout << "Digite o preco do produto:" << endl;
	validar_campo_double(prod_aux.preco);
	
	cout << "Digite a validade do produto:" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	gets(prod_aux.data_validade);
	
	for (int i=0;i<100;i++)
	{
		if (strcmp(prod[i].nome, "\0") == 0)
		{
			prod[i] = prod_aux;
			break;
		}
	}
}

void listar_produto(produto *prod)
{
	for (int i=0;i<100;i++)
	{
		if (strcmp(prod[i].nome, "\0") == 0)
			break;
		
		cout << "------- Dados do produto [" << i << "]" << endl;
		cout << prod[i].nome << endl;
		cout << prod[i].fabricante << endl;
		cout << prod[i].preco << endl;
		cout << prod[i].data_validade << endl;
		getch();
	}
}

void inicializar_produto(produto *prod)
{
	produto prod_aux;
	strcpy(prod_aux.nome, "\0");
	
	for (int i=0;i<100;i++)
		prod[i] = prod_aux;
}
