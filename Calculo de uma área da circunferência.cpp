//Calculo de uma área da circunferência//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float raio,area,pi,expoente;
	printf("Me informe o Raio:");
	scanf("%f",&raio);
	pi = 3.14;
	expoente = 2.0;
	area = pi * powf(raio,expoente);//powf() - Utiliza com tipo Float e Pow() com tipo Double e Int//
	printf("A área é %.2f",area);
	return 0;
}
