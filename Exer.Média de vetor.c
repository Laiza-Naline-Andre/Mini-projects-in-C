/*Crie um algoritmo que leia 3 valores para um vetor de 3 posi��es 
e depois calcule a m�dia dos valores acessando o vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Fun��o Principal do Programa
int main(){
	//Comando de Acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Declarando vari�veis de vetores
	float notas[3],media;
	float soma = 0;
	int i; //O i SEMPRE tem que ser do tipo int
	
	//Solicitando as notas das provas
	for(i = 0; i < 3; i++){
		printf("Digite a nota da %d� prova:",i+1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	//Apresentando os valores do vetor
	for(i = 0; i < 3; i++){
		printf("\n vetor[%d] = %.1f",i,notas[i]);
	}
	//Calculando a m�dia das notas das provas
	media = soma/3;
	printf("\nA sua m�dia � %.1f",media);
	return 0;
}
