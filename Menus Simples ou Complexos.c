//Menus Simples ou Complexos
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Comando de Acentua��o 
	setlocale(LC_ALL,"Portuguese");
	//Definindo Vari�veis
	int opcao;
	//Conferir valida��o 
	while(opcao < 1 || opcao > 3){/*for(opcao < 1;opcao > 3; opcao++);*/
		//Interface do Menu
		printf("Escolha uma Op��o\n");
		printf("\n 1 - Op��o 1");
		printf("\n 2 - Op��o 2");
		printf("\n 3 - Op��o 3");
		printf("\n 4 - Op��o 4\n");
		scanf("%d",&opcao);
	switch(opcao){
		case 1:
			printf("Op��o 1 foi escolhida");
			break;
		case 2:
			printf("Op��o 2 foi escolhida\n");
			break;
		case 3:
			printf("Op��o 3 foi escolhida\n");
			break;
		case 4:	
			printf("Op��o 4 foi escolhida\n");
			break;
		default:
			printf("Op��o Inv�lida\n");
			break;
	}
}
	system("pause");
	return 0;
}
