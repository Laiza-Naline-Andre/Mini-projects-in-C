/*Crie um algoritmo que leia 3 números interios de uma só vez e
coloque o resultado da multiplicação entre os 3, em uma variável própria, 
depois exiba essa variável*/
#include <stdio.h>
#include <locale.h>
int main(){
	//Para usar acentos
	setlocale(LC_ALL,"Portuguese");
	//Declarando variáveis
	int num1,num2,num3,resultado;
	//Lendo os 3 valores
	printf("Informe 3 números:");
	scanf("%d %d %d",&num1,&num2,&num3);
	//Calculo 
	resultado = num1 * num2 * num3;
	//Exibindo resultado
	printf("O resultado é: %d",resultado);
}
