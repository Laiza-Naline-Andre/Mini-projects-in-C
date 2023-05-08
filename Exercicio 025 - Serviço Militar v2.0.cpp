//Exercicio 025 - Serviço Militar v2.0//
#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <time.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	//Adicionando Ponteiro Para Pegar o ANO ATUAL//
	time_t t;
	time(&t);
	struct tm *data;
	data =localtime(&t);
	int ano_atual = data -> tm_year + 1900;
	//Adicionando entrada e saida de dados//
	int ano_nasc,idade,ano_alis,tempo;
	printf("Atualmente estamos no ano de %d \n",ano_atual);
	printf("Em que ano você nasceu?");
	scanf("%d",&ano_nasc);
	printf("------------------------------------------------------\n");
	idade = ano_atual - ano_nasc;
	printf("Sua idade atual é %i anos\n",idade);
	if(idade>18){
		ano_alis = ano_nasc + 18;
		tempo = ano_atual - ano_alis;
		printf("Seu alistamento foi em %d.Já se passaram %d anos",ano_alis,tempo);
	} else {
		if(idade<18){
			ano_alis = ano_nasc + 18;
			tempo = ano_alis - ano_atual;
			printf("Seu aliseamnto será em %d.Ainda falta %d anos",ano_alis,tempo);
		} else {
			printf("Você completa 18 anos exatamente em %d.Vá se alistar", ano_atual);
		}
	}
	printf("\n------------------------------------------------------");	
	system("PAUSE");
}
