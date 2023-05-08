/*Crie um algoritmo que imprima os n�meros de 10 a 0 de 
forma regressiva. (usando While, Do While ou For)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	//Comando de Acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Declarando Vari�veis
	int num,i,opcao;
	//Criando Menu
	while(1){/*O c�digo apresenta um loop infinito no menu,pois o comando for n�o possui uma condi��o de parada.
	Para corrigir, � necess�rio adicionar uma condi��o que possa ser avaliada como falsa para encerrar o loop.Usando o while*/
	printf("--------------Escolha uma Op��o -------------\n");
	printf("1- \t Contagem Regressiva While\n");
	printf("2- \t Contagem Regressiva Do While\n");
	printf("3- \tContagem Regressiva com For\n");
	printf("0 -\t Sair\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
		//Solicitando um N�mero
		printf("Digite um n�mero:");
		scanf("%d",&num);
		//Igualando i a num
		i = num;
		//Contagem Regressiva
		while(i>=0){
			//Imprimindo 'i'
			printf("\n %d  ",i);
			//Decremento
			i--;     
}  
			break;
			
		case 2:
		//Solicitando um N�mero
		printf("Digite um n�mero:");
		scanf("%d",&num);
		//Igualando i a num
		i = num;
		//Contagem Regressiva
		do{
			printf("\n %d ",i);
			i--;
		}while(i>=0);
		break;
		
		case 3:
		//Solicitando um N�mero
		printf("Digite um n�mero:");
		scanf("%d",&num);
		//Contagem Regressiva
		for(i=num;i>=0;i--){
			printf("\n %d",i);
		}
			break;
		
		case 0: 
			printf("Encerrando o programa......\n");
			exit(0);
			break;
		default:
			printf("Op��o Inv�lida!Tente Novamente");
			break;
	} 
	return 0;
	}
}
	
