//EX028 - Calculadora v1.0//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main (){
	setlocale(LC_ALL,"Portuguese");
	float num1,num2;
	char operacao;
	printf("VALOR 1:");
	scanf("%f",&num1);
	printf("VALOR 2:");
	scanf("%f",&num2);
	printf("========================\n");
	printf("+ \t Adição\n");
	printf("- \t Subtração\n");
	printf("* \t Multplicação\n");
	printf("/ \t Divisão");
	printf("\n========================\n");
	printf("Digite sua opção:");
	scanf("%s",&operacao);
	switch(operacao){
		case '+':
			printf("O resultado de %.1f + %.1f = %.1f",num1,num2,num1 + num2);
			break;
		case '-':
			printf("O resultado de %.1f - %.1f = %.1f",num1,num2,num1 - num2);
			break;
		case '*':
			printf("O resultado de %.1f * %.1f = %.1f",num1,num2,num1 * num2);
			break;
		case '/':
			printf("O resultado de %.1f / %.1f = %.1f",num1,num2,num1 / num2);
			break;
		default:
			printf("-----------------------------------------\n");
			printf("Não foi possivel fazer a operação.Tente Novamente.");
			printf("\n-----------------------------------------");
		
	}
}
