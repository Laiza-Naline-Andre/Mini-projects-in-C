#include <stdio.h>
#include <stdlib.h>
#define TAM 3
int main(){
	//Declarando os vetores
	int vetor[TAM],cont;
	//Passando valores para o vetor
	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;
	
	//Adicionando 1 para cada posição
	for(cont = 0; cont< TAM; cont++){
		vetor[cont] = vetor[cont] + 1;
	}
	
	//Exibindo os valores do vetor
	printf("\n Posicao 0: %d",vetor[0]);
	printf("\n Posicao 1: %d",vetor[1]);
	printf("\n Posicao 2: %d",vetor[2]);
	
	//Imprimindo vetor em um laço de repetição
	for(cont = 2; cont < TAM;cont++){
		printf("\n Posicao %d: %d\n",cont,vetor[cont]);
	}
	
	//Lendo 3 valores para o vetor
	for(cont = 0; cont <TAM; cont++){
		scanf("%d",&vetor[cont]);
	}
	//Imprimindo vetor em um laço de repetição
	for(cont = 0; cont < TAM; cont++){
		printf("\n Posicao %d: %d",cont,vetor[cont]);
	}
	//Pausa o programa após executar
	system("Pause");
}
