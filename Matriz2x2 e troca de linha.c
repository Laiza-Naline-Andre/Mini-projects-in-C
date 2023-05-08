/*Preencha uma matriz 2x2 lendo valores do usu�rio 
e depois troque os valores entre a primeira e a segunda linha.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//Coamando de Acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Declarando Vari�veis
	int i,j,matriz[2][2],aux1,aux2,valor;
	//Solicitando um n�mero ao usu�rio e preenchendo a matriz
	for(i = 0;i < 2;i++){
		for(j = 0;j < 2;j++){
			printf("Me informe um valor para [%d][%d]:",i,j);
			scanf("%d",&valor);	
			matriz[i][j] = valor; // armazenando o n�mero na posi��o (i,j) da matriz
		}
	}
	//Imprimindo a matriz preenchida
	for(i = 0;i < 2;i++){
		for(j = 0;j < 2;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n"); 
	}
	//Criando variaveis auxiliares
	aux1 = matriz[0][0];
	aux2 = matriz[0][1];
	//Invertendo as matrizes com variaveis auxiliares
	matriz[0][0] = matriz[1][0];
	matriz[0][1] = matriz[1][1];
	matriz[1][0] = aux1;
	matriz[1][1] = aux2;
	printf("O novo valor �:\n");

	//Imprindo a invers�o de posi��es da matriz
	for(i = 0;i < 2;i++){
		for(j = 0; j < 2; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
/*------------------------
EXPLICA��O DA MUDAN�A DE POSI��ES
matriz[0][0] = 1; 
matriz[0][1] = 2;
matriz[1][0] = 3;
matriz[1][1] = 4;

trocar: 1 - 3
        2 - 4
	    3 - 2
	    4 - 1
aux1 = matriz[0][0];
aux2 = matriz[0][1]
matriz[0][0] = matriz[1][0];
matriz[0][1] = matriz[1][1];*/
	return 0;
}
