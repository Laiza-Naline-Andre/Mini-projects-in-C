//Exercicio 1 :Crie um algoritmo que leia 2 notas e mostre a m�dia entre elas
#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	//Declarando vari�veis
	float nota1,nota2,media;
	//Comandos de Entrada e Saida de dados
	printf("----------------------\n");
	printf("Digite a Primeira Nota:");
	scanf("%f",&nota1);
	printf("Digite a Segunda Nota:");
	scanf("%f",&nota2);
	media = (nota1 + nota2)/2;
	printf("Sua m�dia �: %.2f",media);
	printf("\n----------------------");
	return 0;
}
