// EX015 - Bons alunos merecem parab�ns //
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	float nota1,nota2,media;
	printf("Digite sua primeira nota:");
	scanf("%f",&nota1);
	printf("Digite sua segunda nota:");
	scanf("%f",&nota2);
	media = (nota1 + nota2)/2;
		if(media >= 7){
			printf("Meus Par�bens!");
		}
	printf("Sua m�dia final foi %.1f",media);
	system("PAUSE");
}
