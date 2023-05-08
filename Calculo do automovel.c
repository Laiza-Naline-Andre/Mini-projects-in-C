/*O preço de um automóvel é calculado pela soma do preço de fábrica com 
o preço dos impostos (45% do preço de fábrica) 
e a porcentagem do revendedor (28% do preço de fábrica).
Faça um algoritmo que leia a marca e o modelo de um automóvel e o preço de fábrica e ao final imprima a marca, o modelo do automóvel e o preço final.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Comando para acentuação
	setlocale(LC_ALL,"Portuguese");
    //Declaração de Variavéis
    char marca_auto[50], modelo_auto[50];
    float preco_impostos, porcentagem_revendedor, preco_fabrica, preco_final;
    
    printf("Informe a Marca do seu automovél:");
    scanf("%s",&marca_auto);
    
    printf("Informe o Modelo do seu automovél:");
    scanf("%s",&modelo_auto);
    
    printf("Informe o preço de fábrica do automovél:R$");
    scanf("%f",&preco_fabrica);
    
 
   preco_impostos = 0.45 * preco_fabrica; // = preco_impostos = preco_fabrica + (preco_fabrica * (45/100));//
  porcentagem_revendedor = 0.28 * preco_fabrica ;
  preco_final = preco_impostos + porcentagem_revendedor;
   
  
    printf("A Marca é: %s\n",marca_auto);
    printf("O Modelo é: %s\n",modelo_auto);
    printf("O Preço final é:R$ %.5f",preco_fabrica);
    printf("O Valor do Imposto é: R$ %.5f", preco_impostos);
    printf("A Porcentagem do revendendor é: R$ %.5f", porcentagem_revendedor);
    
}
