//Exerc027 - Três Valores em ordem//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int n1,n2,n3;
	setlocale(LC_ALL,"Portuguese");
	printf("Primeiro Número:");
	scanf("%i",&n1);
	printf("Segundo Número:");
	scanf("%i",&n2);
	printf("Terceiro Número:");
	scanf("%i",&n3);
	printf("-----------------------------\n");
	if(n1<=n2 && n2 <= n3){
		printf("A ordem crescente é: %d %d %d\n", n1, n2, n3);
		printf("MAIOR: %i",n3);
	} else if (n1<=n3 && n3<=n2){
		printf("A ordem crescente é: %d, %223d , %d\n",n1,n3,n2);
		printf("MAIOR: %i",n2);
	}   else if (n2 <= n1 && n1 <= n3){
      printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
    }
}
