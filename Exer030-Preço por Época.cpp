//Exer030-Preço por Época//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float preco,aumento,desconto,nv_preco;
	int opcao;
	printf("Digite o preço de um produto:R$");
	scanf("%f",&preco);
	fflush(stdin);
	printf("ESCOLHA UMA PERÍODO\n");
	printf("=======================\n");
	printf("1 \t Carnaval[+10]\n");
	printf("2 \t Férias Escolares[+20]\n");
	printf("3 \t Dia das Crianças[+5]\n");
	printf("4 \t Black Friday [-30]\n");
	printf("5 \t Natal [-5] \n");
	printf("Digite sua opção => ");
	scanf("%i",&opcao);
	switch(opcao){
		case 1: 
			aumento = preco * 10 / 100;
			nv_preco = preco + aumento;
			printf("Na época de Carnaval, o preço vai para R$%.1f",nv_preco);
			break;
		case 2:
			aumento = preco * 20/100;
			nv_preco = preco + aumento;
			printf("Na época de Férias Escolares, o preço vai para R$%.1f",nv_preco);
			break;
		case 3:
			aumento = preco * 5/100;
			nv_preco = preco + aumento;
			printf("Na época do Dia das Crianças, o preço vai para R$%.1f",nv_preco);
		case 4:
			desconto = preco * 30/100;
			nv_preco = preco - desconto;
			printf("Na época da Black Friday, o preco vai para R$%.1f",nv_preco);
			break;
		case 5: 
			desconto = preco * 5/100;
			nv_preco = preco - desconto;
			printf("Na época do Natal, o preço vai para R$%.1f",nv_preco);
		default:
			printf("Em épocas assim mantém o preço do produto em R$%.1f",preco);
		
	}
	
	
}
