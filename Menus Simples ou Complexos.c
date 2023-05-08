//Menus Simples ou Complexos
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Comando de Acentuação 
	setlocale(LC_ALL,"Portuguese");
	//Definindo Variáveis
	int opcao;
	//Conferir validação 
	while(opcao < 1 || opcao > 3){/*for(opcao < 1;opcao > 3; opcao++);*/
		//Interface do Menu
		printf("Escolha uma Opção\n");
		printf("\n 1 - Opção 1");
		printf("\n 2 - Opção 2");
		printf("\n 3 - Opção 3");
		printf("\n 4 - Opção 4\n");
		scanf("%d",&opcao);
	switch(opcao){
		case 1:
			printf("Opção 1 foi escolhida");
			break;
		case 2:
			printf("Opção 2 foi escolhida\n");
			break;
		case 3:
			printf("Opção 3 foi escolhida\n");
			break;
		case 4:	
			printf("Opção 4 foi escolhida\n");
			break;
		default:
			printf("Opção Inválida\n");
			break;
	}
}
	system("pause");
	return 0;
}
