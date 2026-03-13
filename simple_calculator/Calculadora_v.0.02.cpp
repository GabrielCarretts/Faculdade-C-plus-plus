#include <iostream>
#include <clocale>
using namespace std;
int main ( )

{
	setlocale (LC_ALL, "Portuguese");
	
	//Variáveis agrupadas
	float n1, n2, resultado;
	char operacao, resposta;
	string nome_operacao, cor_da_fonte;
	
	do {
	// 1. Setup e Boas-vindas
	cout << "\n=====Bem vindo à Calculadora v.0.02=====\n\n";
	
	//2. Coleta dos inputs (Entrada)
	cout << "Digite o primeiro número: ";	
	cin >> n1;
	
	cout << "Selecione a operação (+, -, *, /): ";
	cin >> operacao;
	
	cout << "Digite o segundo número: ";
	cin >> n2;
	 
	//4. Processamento (Operações matemáticas)	
	if (operacao == '+') {
		resultado = n1 + n2;
		nome_operacao = "adição"; 
    }
    
    	else if (operacao == '-') {
		resultado = n1 - n2;
		nome_operacao = "subtração";
    }
	
		else if (operacao == '*') {
		resultado = n1 * n2;
		nome_operacao = "multiplicação";
    }
    
    	else if (operacao == '/') {
		resultado = n1 / n2;
		nome_operacao = "divisão";
    }
	
	//3. Saída
	if (resultado > 0) {
	cor_da_fonte = "\033[32m";
	}
	else if (resultado < 0) {
	cor_da_fonte = "\033[31m" ;
	}
	else if (resultado == 0) {
	cor_da_fonte = "\033[0m";
	}

	cout << "\nResultado da " << nome_operacao << ": " << cor_da_fonte << resultado << "\033[0m\n";
	cout << "\nDeseja fazer outra operação? (S/N) ";
	cin >> resposta;
	} while (resposta == 's' || resposta == 'S');
	
	system("pause");
	
	return 0;
}
