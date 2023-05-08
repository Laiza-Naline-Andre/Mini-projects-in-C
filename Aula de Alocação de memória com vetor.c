#include <stdio.h>
#include <stdlib.h>

int main(){
	//Criando um ponteiro que vai apontar para o vetor criado
	int *vetor,tam,i;
	
	//Solicitando o tamanho do vetor
	printf("Digite um tamanho para o vetor:");
	scanf("%d",&tam);
	//Vetor vai receber um endere�o de mem�ria com o vetor que foi alocado, na fun��o
	  //ponteiro = ENDERE�O DE MEM�RIA OU PONTEIRO
	  //*ponteiro = Valor;
	vetor = alocaVetor(tam);
	//Colando valores no vetor
	for(i=0;i<tam;i++){
		vetor[i] = 90;//Atribuindo um valor fixo ao vetor
		printf("%d\n",vetor[i]);
	}
	free(vetor);
}
//Criando uma fun��o que aloca um vetor do tamanho pedido
int alocaVetor(int tam){
//Criando um ponteiro
 int *v;
 //Alocando a mem�ria e o ponteiro recebe o endere�o de mem�ria dele
 v = (int *) malloc (tam * sizeof (int));
 //Retornando o ponteiro
 return *v;
}
