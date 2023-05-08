#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    char nome[30];
    float nota1,nota2,media;
    printf("Nome do Aluno:");
    fflush(stdin);
    gets(nome);
    printf("Nota 1:");
    fflush(stdin);
    scanf("%f",&nota1);
    printf("Nota 2:");
    fflush(stdin);
    scanf("%f",&nota2);
    media = (nota1 + nota2)/2;
    printf("O aluno %s tirou as notas %.1f e %.1f\n", nome,nota1,nota2);
    printf("A média final foi de %.1f",media);

}
