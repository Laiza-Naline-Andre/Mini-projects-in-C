//OPERAÇÕES BITWISE//
#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	int p1,p2;
	int oper_e,oper_ou,oper_ouex;
	printf("Digite o primeiro valor:");
	scanf("%d",&p1);
	printf("Digite o segundo valor:");
	scanf("%d",&p2);
	printf("--------OPERAÇÕES BITWISE--------\n");
	oper_e = p1 & p2;
	printf("Calculando %d & %d é igual a %d",p1,p2,oper_e);	
	printf("Calculando %d  %d ");
	system("PAUSE");
}

