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

struct funcionario
{
	char nome[255];
	int idade;
	double salario;
	char setor[255];	
};

void validar_campo_inteiro(int &valor);
void validar_campo_double(double &valor);
void imprimir_menu(int &opcao);
void incluir_funcionario(funcionario *func);
void listar_funcionario(funcionario *func);
void inicializar_funcionario(funcionario *func);

int main()
{
	funcionario func[200];
	int opcao;
	
	inicializar_funcionario(func);
	
	for (;;)
	{
		system("cls");
		imprimir_menu(opcao);
		
		if (opcao == INCLUIR)
			incluir_funcionario(func);
		
		if (opcao == LISTAR)
			listar_funcionario(func);
		
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

void incluir_funcionario(funcionario *func)
{
	funcionario func_aux;
	
	cout << "Digite o nome do funcionario:" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	gets(func_aux.nome);
	
	cout << "Digite a idade do funcionario:" << endl;
	validar_campo_inteiro(func_aux.idade);
	
	cout << "Digite o salario do funcionario:" << endl;
	validar_campo_double(func_aux.salario);
	
	cout << "Digite o setor do funcionario:" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	gets(func_aux.setor);
	
	for (int i=0;i<200;i++)
	{
		if (strcmp(func[i].nome, "\0") == 0)
		{
			func[i] = func_aux;
			break;
		}
	}
}

void listar_funcionario(funcionario *func)
{
	for (int i=0;i<200;i++)
	{
		if (strcmp(func[i].nome, "\0") == 0)
			break;
		
		cout << "------- Dados do funcionario [" << i << "]" << endl;
		cout << func[i].nome << endl;
		cout << func[i].idade << endl;
		cout << func[i].salario << endl;
		cout << func[i].setor << endl;
		getch();
	}
}

void inicializar_funcionario(funcionario *func)
{
	funcionario func_aux;
	strcpy(func_aux.nome, "\0");
	
	for (int i=0;i<200;i++)
		func[i] = func_aux;
}
