#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    char nome[30];
    char ender[40];
    printf("Digite seu nome:");
    fflush(stdin);
    gets(nome);
    printf("Digite seu endere�o:");
    gets(ender);
    printf("Voc� digitou \"%s\" que mora em \"%s\"", nome,ender);
    system("PAUSE");
}
