#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	//Comando de Acentução
	setlocale(LC_ALL,"Portuguese");
	//Declarando Variáveis
	int a;
	float b;
	char c;
	bool d;
	//Passando valores para as variáveis
	a = 20;
	b = 1.3;
	c = 'w';
	d = true;
	
	//Imprimindo variáveis na tela
	cout << "Valor: " << a <<"\n"; //Para separar informções utiliza o sinal de menor menor "<<"
	cout << "Valor: " << b <<"\n";
	cout << "Valor: " << c <<"\n";
	cout << "Valor: " << d <<"\n";
	cout << "------------------------------\n";
	
	//Solicitando ao usuário novos valores
	cout << "Me informe o novo valor de a:";
	cin >> a; //Para ler informações utiliza o sinal de maior maior ">>"
	cout << "\nMe informe o novo valor de b:";
	cin >> b;
	cout << "\nMe informe o novo valor de c:";
	cin  >> c;
	cout << "\nMe informe o novo valor de d:";
	cin  >> d;
	
	//Imprindo novo valor
	cout << "\nO Novo Valor é: " << a << "\n";
	cout << "O Novo Valor é: " << b << "\n";
	cout << "O Novo Valor é: " << c << "\n";
	cout << "O Novo Valor é: " << d << "\n";
	
	return 0;	
}


