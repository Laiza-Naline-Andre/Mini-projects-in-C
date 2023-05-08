//Laço de repetição For
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num,i;
	printf("Digite um numero:");
	scanf("%d",&num);
	//Contagem Crescente
	for(i=0;i<=num;i++){
		//Imprimindo "i"
		printf("%d\n",i);
	}
	printf("\n---------------------------------------------\n");
	//Contagem Decrescente
	i=num; /*Tem que igualar porque se colocar o i>= num, vai dar errado ou se colocar i<= vai dar um loop infinito*/
	for(i=num;i>=0;i--){ //Para que der certo o i = num, ou a i = variável
		//Imprimindo "i"
		printf("%d\n",i);
	}
	system("pause"),
	return 0;
	
}
