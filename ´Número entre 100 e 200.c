//Faça um algoritmo que receba um número e diga se este número está no intervalo entre 100 e 200//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Declarando Variáveis
	int num;
	//Comando de Acentuação
	setlocale(LC_ALL,"Portuguese");
	//Comandos de Entrada e Saída
	printf("Digite um número:");
	scanf("%d",&num);
	if(num >= 100 && num <= 200){
		printf("O número %d,está no intervalo entre 100 e 200",num);
	} else {
		printf("O número %d, não está no intervalo entre 100 e 200",num);
	}
	return 0;
}
