/*Crie um algoritmo que leia 3 valores para um vetor de 3 posições 
e depois calcule a média dos valores acessando o vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Função Principal do Programa
int main(){
	//Comando de Acentuação
	setlocale(LC_ALL,"Portuguese");
	//Declarando variáveis de vetores
	float notas[3],media;
	float soma = 0;
	int i; //O i SEMPRE tem que ser do tipo int
	
	//Solicitando as notas das provas
	for(i = 0; i < 3; i++){
		printf("Digite a nota da %dº prova:",i+1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	//Apresentando os valores do vetor
	for(i = 0; i < 3; i++){
		printf("\n vetor[%d] = %.1f",i,notas[i]);
	}
	//Calculando a média das notas das provas
	media = soma/3;
	printf("\nA sua média é %.1f",media);
	return 0;
}
