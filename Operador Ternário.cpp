//Exemplo da aula de Operador Tern�rio//
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a = 2, b = 10;
	int c =(a>b)?1:0;
	printf("O resultado � %i\n",c);
	system("PAUSE");
}
