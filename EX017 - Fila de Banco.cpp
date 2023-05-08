// EX017 - Fila de Banco //
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int ano_nasc,idade;
	printf("Em que ano você nasceu?");
	scanf("%i",&ano_nasc);
	printf("----------------------------\n");
	time_t t;
	time(&t);
	struct tm *data;
	data = localtime(&t);
	int ano_atual = data -> tm_year + 1900;
	idade = ano_atual - ano_nasc;
	printf("Você tem %i anos, certo?\n",idade);
	printf("Seja bem - vindo(a) ao Banco Estudonauta!\n");
		if(idade >= 65){
			printf("===== ATENÇÃO! Dirija-se para a Fila Preferencial ===== \n");
		}
	printf("----------------------------\n");
	system("PAUSE");	
}
