#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    /* Em outras IDES esse c�digo deu errado,por conta que estava utilizando no void main
e n�o no int main,no ide do codeblocks d� certo usar o void main sempre, mas em outros
IDES como DEVC++ e COMPILER C, tem que usar o int main*/
    char produt [30];
    float preco,desconto,novop;
    printf("Produto:");
    gets(produt);
    printf("Pre�o do %s: R$", produt);
    scanf("%f",&preco);
    printf("Desconto (%%)");
    scanf("%f",&desconto);
    novop = (preco * desconto/100);
    printf("O produto %s custava R$%.2f.\n", produt,preco);
    printf("por�m com %.1f%% de desconto passa a ser R$%.2f",desconto,novop);
}
