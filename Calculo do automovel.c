/*O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com 
o pre�o dos impostos (45% do pre�o de f�brica) 
e a porcentagem do revendedor (28% do pre�o de f�brica).
Fa�a um algoritmo que leia a marca e o modelo de um autom�vel e o pre�o de f�brica e ao final imprima a marca, o modelo do autom�vel e o pre�o final.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Comando para acentua��o
	setlocale(LC_ALL,"Portuguese");
    //Declara��o de Variav�is
    char marca_auto[50], modelo_auto[50];
    float preco_impostos, porcentagem_revendedor, preco_fabrica, preco_final;
    
    printf("Informe a Marca do seu automov�l:");
    scanf("%s",&marca_auto);
    
    printf("Informe o Modelo do seu automov�l:");
    scanf("%s",&modelo_auto);
    
    printf("Informe o pre�o de f�brica do automov�l:R$");
    scanf("%f",&preco_fabrica);
    
 
   preco_impostos = 0.45 * preco_fabrica; // = preco_impostos = preco_fabrica + (preco_fabrica * (45/100));//
  porcentagem_revendedor = 0.28 * preco_fabrica ;
  preco_final = preco_impostos + porcentagem_revendedor;
   
  
    printf("A Marca �: %s\n",marca_auto);
    printf("O Modelo �: %s\n",modelo_auto);
    printf("O Pre�o final �:R$ %.5f",preco_fabrica);
    printf("O Valor do Imposto �: R$ %.5f", preco_impostos);
    printf("A Porcentagem do revendendor �: R$ %.5f", porcentagem_revendedor);
    
}
