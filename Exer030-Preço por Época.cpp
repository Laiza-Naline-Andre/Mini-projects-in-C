//Exer030-Pre�o por �poca//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float preco,aumento,desconto,nv_preco;
	int opcao;
	printf("Digite o pre�o de um produto:R$");
	scanf("%f",&preco);
	fflush(stdin);
	printf("ESCOLHA UMA PER�ODO\n");
	printf("=======================\n");
	printf("1 \t Carnaval[+10]\n");
	printf("2 \t F�rias Escolares[+20]\n");
	printf("3 \t Dia das Crian�as[+5]\n");
	printf("4 \t Black Friday [-30]\n");
	printf("5 \t Natal [-5] \n");
	printf("Digite sua op��o => ");
	scanf("%i",&opcao);
	switch(opcao){
		case 1: 
			aumento = preco * 10 / 100;
			nv_preco = preco + aumento;
			printf("Na �poca de Carnaval, o pre�o vai para R$%.1f",nv_preco);
			break;
		case 2:
			aumento = preco * 20/100;
			nv_preco = preco + aumento;
			printf("Na �poca de F�rias Escolares, o pre�o vai para R$%.1f",nv_preco);
			break;
		case 3:
			aumento = preco * 5/100;
			nv_preco = preco + aumento;
			printf("Na �poca do Dia das Crian�as, o pre�o vai para R$%.1f",nv_preco);
		case 4:
			desconto = preco * 30/100;
			nv_preco = preco - desconto;
			printf("Na �poca da Black Friday, o preco vai para R$%.1f",nv_preco);
			break;
		case 5: 
			desconto = preco * 5/100;
			nv_preco = preco - desconto;
			printf("Na �poca do Natal, o pre�o vai para R$%.1f",nv_preco);
		default:
			printf("Em �pocas assim mant�m o pre�o do produto em R$%.1f",preco);
		
	}
	
	
}
