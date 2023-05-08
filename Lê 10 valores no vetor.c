/*Programa que lê 10 valores inteiros e armazena-os em um vetor, 
em seguida, os valores lidos são exibidos na tela*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Comando de acentuação
	setlocale(LC_ALL,"Portuguese");
	//Declarando variávies
	int vetor[10],i;
	//Solicitando ao usario que informe os valores dentro de um vetor
	for(i=0; i<10; i++){
		printf("Digite o %dº valor:",i+1);
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
