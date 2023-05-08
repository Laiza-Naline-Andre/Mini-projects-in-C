//OPERAÇÕES BITWISE 2//
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	int pn1,pn2;
	int oper_e,oper_ou,oper_ouex;
	printf("Digite o primeiro valor:");
	scanf("%d",&pn1);
	printf("Digite o segundo valor:");
	scanf("%d",&pn2);
	printf("--------OPERAÇÕES BITWISE--------\n");
	oper_e = pn1 & pn2;
	printf("Calculando %d & %d é igual a %d\n",pn1,pn2,oper_e);	
	oper_ou = pn1 | pn2;
	printf("Calculando %d | %d é igual a %d\n",pn1,pn2,oper_ou);
	oper_ouex = pn1 ^ pn2;
	printf("Calculando %d ^ %d é igual a %d",pn1,pn2,oper_ouex);
	system("PAUSE");
}
