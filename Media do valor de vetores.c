/*Crie um algoritmo que leia 3 valores para um vetor de 3 posi��es 
e depois calcule a m�dia dos valores acessando o vetor*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Comando de Acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Declarando vari�veis
	int i;
	float vetor[3],media;
	for(i=0;i<3;i++){
	//Solicitando um valor
	printf("Informe um valor:");
	scanf("%f",&vetor[i]);
	}
	for(i=0; i<3; i++){
		printf("\n vetor[%d] = %.1f",i,vetor[i]);
	}
	media = (vetor[0] + vetor[1] + vetor[2])/3;
	printf("\n A media dos vetores �: %.1f",media);
}
