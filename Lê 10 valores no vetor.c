/*Programa que l� 10 valores inteiros e armazena-os em um vetor, 
em seguida, os valores lidos s�o exibidos na tela*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Comando de acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Declarando vari�vies
	int vetor[10],i;
	//Solicitando ao usario que informe os valores dentro de um vetor
	for(i=0; i<10; i++){
		printf("Digite o %d� valor:",i+1);
		scanf("%d",&vetor[i]);
	}
	printf("\nValores lidos:\n");
	//Vetor apresentando os valores lidos
	for(i=0; i<10; i++){
		printf("%d \n",vetor[i]);
	}
	system("pause");
	return 0;
	
}
