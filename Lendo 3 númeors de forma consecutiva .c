/*Crie um algoritmo que leia 3 n�meros interios de uma s� vez e
coloque o resultado da multiplica��o entre os 3, em uma vari�vel pr�pria, 
depois exiba essa vari�vel*/
#include <stdio.h>
#include <locale.h>
int main(){
	//Para usar acentos
	setlocale(LC_ALL,"Portuguese");
	//Declarando vari�veis
	int num1,num2,num3,resultado;
	//Lendo os 3 valores
	printf("Informe 3 n�meros:");
	scanf("%d %d %d",&num1,&num2,&num3);
	//Calculo 
	resultado = num1 * num2 * num3;
	//Exibindo resultado
	printf("O resultado �: %d",resultado);
}
