#include <iostream>

using namespace std;

/**

	Autor: Thomás da Costa
	Data de Criação: 01/01/2015

	Titulo: Programa que efetua o cálculo de uma progressão aritmética
	
	Descritivo: Progressão aritmética é um tipo de seqüência numérica que a partir
	do segundo elemento cada termo (elemento) é a soma do seu antecessor por uma constante.
	
**/
int main()
{
	const int TOTAL_PA = 10; 	// Limite total da progressão aritmética
	int razao = 2; 				// Razão da progressão
	int i = 0; 					// Indice para efetuar o loop da progressão
	int resultadoPa = 0;		// Resultado da posição da PA
	int resultadoAntPa = 3;		// Resultado anterior da posicao da PA
	
	// Efetuado o cálculo da progressão de acordo
	for (;i<=TOTAL_PA;i++)
	{
		// Cálculo da progressão ocorre indice atual mais a razão
		resultadoPa = resultadoAntPa + razao;
		resultadoAntPa = resultadoPa;
		
		// Imprime valor na tela da PA
		cout << resultadoPa << "\n";
	}
	
}

