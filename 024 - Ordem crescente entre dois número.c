//024 - Ordem crescente entre dois n�mero//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	printf("Me diga dois n�meros e eu colocarei os dois em ordem crescente\n");
	printf("Primeiro n�mero:");
	scanf("%d",&n1);
	printf("Segundo n�mero:");
	scanf("%d",&n2);
	if(n1>n2){
		printf("Os n�meros em ordens s�o %d e %d",n2,n1);
	} else {
		if(n1<n2){
			printf("Os n�meros em ordens s�o %d e %d",n1,n2);
		}else {
			printf("Os n�meros em ordens s�o %d e %d",n2,n1);
		}
	}
	
}
