/*Fa�a uma matriz 2x2, que imprima cada elemento
 e mostre os valores que o usuario digitou*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 int main(){
 	//Comando de Acentua��o
 	setlocale(LC_ALL,"Portuguese");
 	//Declarando vari�veis
 	int matriz[2][2],i,j;
 	//Solicitando que o us�rio digite valores na posi��o da matriz
 	for(i=0; i<2 ;i++){
 		for(j=0; j<2 ;j++){
 			printf("Digite o valor da posi��o [%d][%d]:",i,j);
 			scanf("%d",&matriz[i][j]);
		 }
	 }
	//Imprimindos valores lidos
	printf("Valores Lidos:\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
 }
