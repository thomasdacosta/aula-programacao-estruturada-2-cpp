#include <iostream>
#include <string.h>

using namespace std;

int validar_senha(char *senha);

int main()
{
	char senha[10];
	cout << "Digite a senha:" << endl;
	gets(senha);
	validar_senha(senha);
}

int validar_senha(char *senha)
{
	if (strcmp(senha, "entrar123") == 0) 
	{
		cout << "Senha OK";
		return 0;
	} else {
		cout << "Senha inválida";
		return 1;
	}
}
