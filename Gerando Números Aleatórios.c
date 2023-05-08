//Gerando Números Aleatórios//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	//Responsável por alimentar o rand de forma diferente
	srand((signed int)time(NULL));
	int aleatorio = rand();
	//Imprime o valor
	printf("%d\n", aleatorio);
	//Variável que recebe o resto da divisão do número por 5 (aleatorio entre 1 e 6)
	int aleatorioSegundo = (rand()%6) + 1;
	//Imprime o valor
	printf("%d\n",&aleatorioSegundo);
	//Pausa o programa após executar
	system("pause");
}
