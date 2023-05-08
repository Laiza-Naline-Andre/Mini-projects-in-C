//024 - Ordem crescente entre dois número//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	printf("Me diga dois números e eu colocarei os dois em ordem crescente\n");
	printf("Primeiro número:");
	scanf("%d",&n1);
	printf("Segundo número:");
	scanf("%d",&n2);
	if(n1>n2){
		printf("Os números em ordens são %d e %d",n2,n1);
	} else {
		if(n1<n2){
			printf("Os números em ordens são %d e %d",n1,n2);
		}else {
			printf("Os números em ordens são %d e %d",n2,n1);
		}
	}
	
}
