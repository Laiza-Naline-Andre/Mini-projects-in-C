//Crie um algoritmo que informe se o valor lido é primo ou não
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Comando de Acentuação do código
	setlocale(LC_ALL,"Portuguese");
	int num,i,aux=0;
		printf("Informe um número:");
		scanf("%d",&num);
	for(i = 1;i <= num; i++){
		if(num % 1 == 0){
			aux++;
		}
		}
        //Exibe o resto da divisão na tela
        printf("%d / %d tem o resto = %d \n",num,i,num % i);
        if(aux == 2){
        	printf("O número é primo!");
		} else {
			printf("O número não é primo, porque ele tem %d divisores",aux);
		}
}

 
