#include <stdio.h>
#include <stdlib.h>
//Chamando as fun��es 
void imprimiVetor(int *vetor,int tamanho);
int aumentavalorVetor(int *vetor, int tamanho);
int main(){
	//Declarando vari�veis
	int tamanho;
	//Solicitando ao usu�rio o valor do vetor
	printf("Informe o tamanho do vetor:");
	scanf("%d",&tamanho);
	//Alocando o espa�o de mem�ria para o vetor
	int *vetor = (int*) malloc(tamanho * sizeof(int));
	//Chamando a fun��o imprimiVetor
	imprimiVetor(vetor,tamanho);
	//Chamando a fun��o que aumenta + 1
	aumentavalorVetor(vetor,tamanho);
}
void imprimiVetor(int *vetor,int tamanho){
	//Declando vari�vel 
	int i;
	//Percorrendo o vetor
	for(i=0; i<tamanho; i++){
		printf("%d\n",vetor[i]);
	}
}
int aumentavalorVetor(int *vetor, int tamanho){
	//Declarando vari�vel
	int i;
	//Percorredno o vetor e aumentando + 1
	for(i=0;i < tamanho;i++){
		vetor[i] = vetor[i] + 1;
		printf("%d\n",vetor[i]);
	}
}

