#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Comando para acentuação
	setlocale(LC_ALL,"Portuguese");
	//Declarçaõ de Variáveis
	char nome[30];
	float nota1,nota2,nota3,media;
	//Comandos de Entrada e Saída de Dados
	printf("Informe seu nome:");
	gets(nome);
	
	printf("Informe sua Primeira nota:");
	scanf("%f",&nota1);
	
	printf("Informe a Segunda nota:");
	scanf("%f",&nota2);
	
	printf("Informe a Terçeira nota:");
	scanf("%f",&nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if(media >= 7){
		printf("%s foi Aprovado(a) com média %.2f\n", nome, media);
	} else if(media >= 5.1 && media <= 6.9){
		printf("%s está em Recuperação com média %.2f\n", nome, media);
	} else if( media <= 5) {
		printf("%s foi Reprovado(a) com média %.2f\n", nome, media);
	}
	return 0;
	}
	
