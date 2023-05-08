//Exemplo 1 de operadores de Atribuição//
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int a = 24;
	a += 9;	//É a mesma coisa que: a = a + 9//
	printf("O valor de A é %i",a);
	system("PAUSE");
}



