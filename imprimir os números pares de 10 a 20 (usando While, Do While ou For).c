//Crie um algoritmo que imprima os números pares de 10 a 20 (usando While, Do While ou For)
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(){
	int i = 10;//Tem que inicializar a variável i
	//Utilizando WHILE para imprimir os números pares de 10 a 20
	while(i <= 20){
		if(i % 2 == 0){//O if tem que ser dentro do WHILE
			printf("%d \n",i);
    	}
		i++; //O incremento tem que ser fora do if
	}
	//Utilizando DO WHILE para imprimir os números pares de 10 a 20
	int i = 10;
	do{
		if(i % 2 == 0){ //O if tem que ser dentro DO WHILE
			printf("%d \n",i);
    	}
		i++; //O incremento tem que ser fora do if
		
	}while(i <= 20)
	
return 0;
}




















