//Fa�a um algoritmo que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Declarando Vari�veis
	int num;
	//Comando de Acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Comandos de Entrada e Sa�da
	printf("Digite um n�mero:");
	scanf("%d",&num);
	if(num >= 100 && num <= 200){
		printf("O n�mero %d,est� no intervalo entre 100 e 200",num);
	} else {
		printf("O n�mero %d, n�o est� no intervalo entre 100 e 200",num);
	}
	return 0;
}
