/*Crie um algoritmo que leia dois valores 
e depois crie um menu (Usando Switch Case) de 4 opções:
 1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar. 
Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida com os dois valores lidos. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	//Comando de Acentuação
	setlocale(LC_ALL,"Portuguese");
	//Declarando Variáveis
	float num1,num2,resultado;
	int opcao;
	
	//Comando de Entrada de Dados
	printf("-------------------------------");
	printf("\n \t CALCULADORA");
	printf("\n-------------------------------");
	//Solicitando dois números
	printf("\nDigite um número:");
	scanf("%f",&num1);
	
	printf("Digite outro número:");
	scanf("%f",&num2);
	
	//Opções de calculos
	printf("\n Escolha uma opção:");
	printf("\n 1-Adição");
	printf("\n 2-Subtração");
	printf("\n 3-Divisão");
	printf("\n 4-Multiplição");
	printf("\n 5-Resto da Divisão \n");
	scanf("%d",&opcao);
	//Escolher qual o calculo
	switch(opcao){
		case 1:
			resultado = num1 + num2;
			printf("A soma entre %.1f e %.1f = %.1f",num1,num2,resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtração entre %.1f e %.1f = %.1f",num1,num2,resultado);
			break;
		case 3:
			resultado = num1 / num2;
			printf("A subtração entre %.2f e %.2f = %.2f",num1,num2,resultado);
			break;
		case 4:
			resultado = num1 * num2;
			printf("A multiplicação entre %.2f e %.2f = %.2f",num1,num2,resultado);
			break;
		case 5:
			resultado = (int)num1 % (int)num2;
			printf("O resto da divisão é entre %.2f e %.2f = %.2f",num1,num2,resultado);
			break;
		default:
			printf("Opção Inválida");
			break;
	} 
  return 0;

} 
