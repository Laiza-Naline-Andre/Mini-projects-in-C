//Exemplo 1 de operadores de Atribui��o//
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int a = 24;
	a += 9;	//� a mesma coisa que: a = a + 9//
	printf("O valor de A � %i",a);
	system("PAUSE");
}



