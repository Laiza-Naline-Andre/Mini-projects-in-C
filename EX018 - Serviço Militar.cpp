//EX018 - Servi�o Militar//
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
	printf("Em que ano voc� nasceu?",ano_nasc);
	scanf("%i",&ano_nasc);
	idade = ano_atual - ano_nasc;
	printf("----------------------------------\n");
	printf("Sua idade atual � %i anos\n", idade);
	if (idade >= 18){
		printf("J� fez 18 anos. Espero sinceramente que voc� tenha se alistado");
	} else {
		printf("Voc� ainda n�o tem 18 anos. N�o pode se alistar");
	}
	
}
