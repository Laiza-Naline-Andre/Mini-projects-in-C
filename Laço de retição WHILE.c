//Laço de Repetição For
#include <stdio.h>
#include <stdlib.h>
int main(){
	//Definindo varariáveis
	int a = 0, b = 28;
	//Contando até 28
	while(a <= 28){
		printf("%d\n",a);
		//Incremento
		a++; //Para o programa fazer uma contagem crecente tem que utilizar o b++;
	}
	printf("\n--------------------------------\n");
	//Contagem Regressiva
	while(b >= 0){
		printf("%d\n",b);
		//Decremento
	 	b--; //Para fazer contagem regressiva tem que usar o b--;
	}
	system("pause");
	return 0;
}
