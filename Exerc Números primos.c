//Crie um algoritmo que informe se o valor lido � primo ou n�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Comando de Acentua��o do c�digo
	setlocale(LC_ALL,"Portuguese");
	int num,i,aux=0;
		printf("Informe um n�mero:");
		scanf("%d",&num);
	for(i = 1;i <= num; i++){
		if(num % 1 == 0){
			aux++;
		}
		}
        //Exibe o resto da divis�o na tela
        printf("%d / %d tem o resto = %d \n",num,i,num % i);
        if(aux == 2){
        	printf("O n�mero � primo!");
		} else {
			printf("O n�mero n�o � primo, porque ele tem %d divisores",aux);
		}
}

 
