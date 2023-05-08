#include <stdio.h>
#include <stdlib.h>
void main(){
    char nome[30];
    int idade;
    float peso;
    printf("Qual e o seu nome?");
    gets(nome);
    printf("Quantos anos voce tem?");
    scanf("%d",&idade);
    printf("Qual e o seu peso?(Kg)");
    scanf("%f",&peso);
    printf("\n-----------<<<PROCESSANDO>>>---------\n");
    printf("Muito prazer,%s. Voce tem %d anos e pesa %.2fKG, correto?\nFIM", nome,idade,peso);
    system("PAUSE");

}
