#include <stdio.h>
#include <stdlib.h>
//Chamando as fun��es 
retornaComMaisDez(int numero);
void aumentaDez(int *numero);
int main(){
	//Declarando Vari�veis 
	int a = 5;
	//Apresentando o valor
	printf("%d \n",a);
	//Aumentando 10
	a = retornaComMaisDez(a);
	//Apresentando outro valor
	printf("%d \n",a);
	//Fun��o que aumenta 10 diretamente 
	aumentaDez(&a);
	//Apresentando o novo valor
	printf("%d \n",a);
	return 0;
	
}
int retornaComMaisDez(int numero){
	return numero + 10;
}
void aumentaDez(int *numero){
	*numero = *numero + 10;
}

