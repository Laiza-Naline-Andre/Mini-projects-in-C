#include <stdio.h>
#include <stdlib.h>
//Chamando as funções 
void imprimiVetor(int *vetor,int tamanho);
int aumentavalorVetor(int *vetor, int tamanho);
int main(){
	//Declarando variáveis
	int tamanho;
	//Solicitando ao usuário o valor do vetor
	printf("Informe o tamanho do vetor:");
	scanf("%d",&tamanho);
	//Alocando o espaço de memória para o vetor
	int *vetor = (int*) malloc(tamanho * sizeof(int));
	//Chamando a função imprimiVetor
	imprimiVetor(vetor,tamanho);
	//Chamando a função que aumenta + 1
	aumentavalorVetor(vetor,tamanho);
}
void imprimiVetor(int *vetor,int tamanho){
	//Declando variável 
	int i;
	//Percorrendo o vetor
	for(i=0; i<tamanho; i++){
		printf("%d\n",vetor[i]);
	}
}
int aumentavalorVetor(int *vetor, int tamanho){
	//Declarando variável
	int i;
	//Percorredno o vetor e aumentando + 1
	for(i=0;i < tamanho;i++){
		vetor[i] = vetor[i] + 1;
		printf("%d\n",vetor[i]);
	}
}

