//Exemplo 2 de incremento e decremento//
#include <stdio.h>	
#include <stdlib.h>
	int main (){
		int x = 7;
		int y = 5 + x--;/* --x soma direto, x-- só soma
		se tiver linha após ela*/	
		printf("Os valores sao %d e %d",x,y);
		system("PAUSE");
	}


