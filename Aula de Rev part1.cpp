#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	//Comando de Acentu��o
	setlocale(LC_ALL,"Portuguese");
	//Declarando Vari�veis
	int a;
	float b;
	char c;
	bool d;
	//Passando valores para as vari�veis
	a = 20;
	b = 1.3;
	c = 'w';
	d = true;
	
	//Imprimindo vari�veis na tela
	cout << "Valor: " << a <<"\n"; //Para separar inform��es utiliza o sinal de menor menor "<<"
	cout << "Valor: " << b <<"\n";
	cout << "Valor: " << c <<"\n";
	cout << "Valor: " << d <<"\n";
	cout << "------------------------------\n";
	
	//Solicitando ao usu�rio novos valores
	cout << "Me informe o novo valor de a:";
	cin >> a; //Para ler informa��es utiliza o sinal de maior maior ">>"
	cout << "\nMe informe o novo valor de b:";
	cin >> b;
	cout << "\nMe informe o novo valor de c:";
	cin  >> c;
	cout << "\nMe informe o novo valor de d:";
	cin  >> d;
	
	//Imprindo novo valor
	cout << "\nO Novo Valor �: " << a << "\n";
	cout << "O Novo Valor �: " << b << "\n";
	cout << "O Novo Valor �: " << c << "\n";
	cout << "O Novo Valor �: " << d << "\n";
	
	return 0;	
}


