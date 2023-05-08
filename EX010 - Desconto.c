#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    /* Em outras IDES esse código deu errado,por conta que estava utilizando no void main
e não no int main,no ide do codeblocks dá certo usar o void main sempre, mas em outros
IDES como DEVC++ e COMPILER C, tem que usar o int main*/
    char produt [30];
    float preco,desconto,novop;
    printf("Produto:");
    gets(produt);
    printf("Preço do %s: R$", produt);
    scanf("%f",&preco);
    printf("Desconto (%%)");
    scanf("%f",&desconto);
    novop = (preco * desconto/100);
    printf("O produto %s custava R$%.2f.\n", produt,preco);
    printf("porém com %.1f%% de desconto passa a ser R$%.2f",desconto,novop);
}
