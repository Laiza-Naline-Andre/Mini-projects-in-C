/*	Determine o resultado l�gico das express�es mencionadas (Verdadeira ou Falsa). 
Considere ara as respostas os seguintes valores: X=1, A=3, B=5, C=8 e D=7.
a)	N�O (X > 3)
b)	(X < 1) E (N�O (B > D))
c)	N�O ((D < 0) E (C > 5))
d)	N�O ((X > 3) OU (C < 7))*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int x = 1, a = 3, b = 5, c = 8 ,d = 7;

	if(!x > 3){
		printf("Verdadeiro");
	} else if(x<1 && !(b > d)){
		printf("Verdadeiro");
	} 
	return 0;
}

