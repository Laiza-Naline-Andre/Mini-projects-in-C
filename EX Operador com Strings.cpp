//Exemplo usando Operador com Strings//
#include<stdio.h>
#include<string.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome1[] = "Laiza";
	char nome2 []= "Camila";
	int comp = strcmp(nome1,nome2);
	printf("O resultado da comparação é %i",comp);
}
