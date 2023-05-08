// Laço de Repetição DO while
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num, i;
	printf("Digite um numero:");
	scanf("%d",&num);
	do{
	//Imprimindo o 'i'
	printf("%d\n",i);
	//Incremento
		i++;	
	}while(i <= num);
	
	printf("\n-------------------------------\n");
	
	//Contagem Regressiva
	i = num; //Incilaizar a variável de contagem com o valor digitado pelo usuário
	do{
		//Imprimindo o 'i'
		printf("%d\n",i);
		//Decremento
		i--;
	} while(i >= 0);//Executar o laço enquanto i for maior ou igual a zero
	
	system("pause"),
	return 0;

}
