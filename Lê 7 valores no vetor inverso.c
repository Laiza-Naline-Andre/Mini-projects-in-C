/*Programa que lê 7 valores inteiros e armazena-os em um vetor, 
em seguida, imprime os valores lidos em ordem inversa à leitura.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Comando de acentuação
	setlocale(LC_ALL,"Portuguese");
	//Decalrando variáveis
	int vetor[7],i;
	//Solicitando ao usuário que digite valores dentro de um vetor
	for(i=0; i<7; i++){
		printf("Informe %d valor:",i+1);
		scanf("%d",&vetor[i]);
	}
	printf("\nValores Lidos:\n");
	for(i=0; i<7; i++){
		printf("%d\n",vetor[i]);
	}
	printf("\nValores Lidos na Ordem INVERSA:\n");
	for(i=7-1; i>=0; i--){
		printf("%d\n",vetor[i]);
	}
	system("pause");
	return 0;
}
	
	
