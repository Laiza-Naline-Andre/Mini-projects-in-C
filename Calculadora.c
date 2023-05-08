/*Crie um algoritmo que leia dois valores 
e depois crie um menu (Usando Switch Case) de 4 op��es:
 1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar. 
Depois que o usu�rio escolher uma op��o, mostre o resultado da opera��o escolhida com os dois valores lidos. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	//Comando de Acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Declarando Vari�veis
	float num1,num2,resultado;
	int opcao;
	
	//Comando de Entrada de Dados
	printf("-------------------------------");
	printf("\n \t CALCULADORA");
	printf("\n-------------------------------");
	//Solicitando dois n�meros
	printf("\nDigite um n�mero:");
	scanf("%f",&num1);
	
	printf("Digite outro n�mero:");
	scanf("%f",&num2);
	
	//Op��es de calculos
	printf("\n Escolha uma op��o:");
	printf("\n 1-Adi��o");
	printf("\n 2-Subtra��o");
	printf("\n 3-Divis�o");
	printf("\n 4-Multipli��o");
	printf("\n 5-Resto da Divis�o \n");
	scanf("%d",&opcao);
	//Escolher qual o calculo
	switch(opcao){
		case 1:
			resultado = num1 + num2;
			printf("A soma entre %.1f e %.1f = %.1f",num1,num2,resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtra��o entre %.1f e %.1f = %.1f",num1,num2,resultado);
			break;
		case 3:
			resultado = num1 / num2;
			printf("A subtra��o entre %.2f e %.2f = %.2f",num1,num2,resultado);
			break;
		case 4:
			resultado = num1 * num2;
			printf("A multiplica��o entre %.2f e %.2f = %.2f",num1,num2,resultado);
			break;
		case 5:
			resultado = (int)num1 % (int)num2;
			printf("O resto da divis�o � entre %.2f e %.2f = %.2f",num1,num2,resultado);
			break;
		default:
			printf("Op��o Inv�lida");
			break;
	} 
  return 0;

} 
