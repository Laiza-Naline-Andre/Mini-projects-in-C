//EX018 - Serviço Militar//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	time_t temp;
	time(&temp);
	struct tm *ano;
	ano = localtime(&temp);
	int ano_atual = ano -> tm_year + 1900;
	int ano_nasc,idade;
	printf("Atuamente estamos no ano de %i\n",ano_atual);
	printf("Em que ano você nasceu?",ano_nasc);
	scanf("%i",&ano_nasc);
	idade = ano_atual - ano_nasc;
	printf("----------------------------------\n");
	printf("Sua idade atual é %i anos\n", idade);
	if (idade >= 18){
		printf("Já fez 18 anos. Espero sinceramente que você tenha se alistado");
	} else {
		printf("Você ainda não tem 18 anos. Não pode se alistar");
	}
	
}
