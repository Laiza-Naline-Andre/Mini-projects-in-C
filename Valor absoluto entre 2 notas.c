#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	float nota1,nota2;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a Primeira Nota:");
	scanf("%f",&nota1);
	printf("Digite a Segunda Nota:");
	scanf("%f",&nota2);
    float valor_absoluto = fabs(nota1 - nota2);
	printf("A diferen�a entre os dois � de %.2f",valor_absoluto);
	return 0;
	}

	

	/*	LINGUAGEM C - VALOR ABSOLUTO TIPO INT
	//Crie um algoritmo que leia 2 notas e a diferen�a entre elas//
	setlocale(LC_ALL,"Portuguese");
	int nota1,nota2;
	// fun��o para calcular o valor absoluto de um n�mero //
	printf("Digite a Primeira Nota:");
	scanf("%d",&nota1);
	printf("Digite a Segunda Nota:");
	scanf("%d",&nota2);
	fflush(stdin);
	printf("A diferen�a entre os dois � de %d",abs(nota1 - nota2) );
	return 0;*/

