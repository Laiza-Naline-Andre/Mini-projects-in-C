// EX016 - Consumidor ganha Desconto //
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	float valor,desconto,nv_valor;
	setlocale(LC_ALL,"portuguese");
	printf("Qual foi o valor total das compras?");
	scanf("%f", &valor);
	printf("-------------------------------\n");
	printf("Você comprou %.1f na nossa loja\n",valor);
		if(valor >= 500){
			printf("====== ATENÇÃO ======\n");
			desconto = valor * 10 / 100;
			printf("Por mais de R$500 em compras, você vai receber R$%.1f de desconto\n",desconto);
			nv_valor = valor - desconto;
			printf("O valor a ser pago é R$ %.1f! Volte Sempre!", nv_valor);
		}
	system("PAUSE");
	
}
