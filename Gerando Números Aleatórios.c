//Gerando N�meros Aleat�rios//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	//Respons�vel por alimentar o rand de forma diferente
	srand((signed int)time(NULL));
	int aleatorio = rand();
	//Imprime o valor
	printf("%d\n", aleatorio);
	//Vari�vel que recebe o resto da divis�o do n�mero por 5 (aleatorio entre 1 e 6)
	int aleatorioSegundo = (rand()%6) + 1;
	//Imprime o valor
	printf("%d\n",&aleatorioSegundo);
	//Pausa o programa ap�s executar
	system("pause");
}
