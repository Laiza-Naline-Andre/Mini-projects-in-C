#include <stdio.h>
#include<locale.h>
#include<stdlib.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    char nome1[30], nome2[30], nome3[30];
    char sexo1,sexo2,sexo3;
    float nota1,nota2,nota3;
    printf("Cadastrando a primeira pessoa:");
    printf("\n-------------------------------\n");
    fflush(stdin);
    printf("Nome:");
    gets(nome1);
    fflush(stdin);
    printf("Sexo[M/F]:");
    sexo1 = getchar();
    printf("Nota:");
    scanf("%f",&nota1);
    printf("Cadastrando a segunda pessoa:");
    printf("\n-------------------------------\n");
    fflush(stdin);
    printf("Nome:");
    fflush(stdin);
    gets(nome2);
    printf("Sexo[M/F]:");
    sexo2 = getchar();
    printf("Nota:");
    scanf("%f",&nota2);
    printf("Cadastrando a terceira pessoa:");
    printf("\n-------------------------------\n");
    fflush(stdin);
    printf("Nome:");
    gets(nome3);
    fflush(stdin);
    printf("Sex0[M/F]");
    sexo3 = getchar();
    printf("Nota:");
    scanf("%f",&nota3);
    printf("LISTAGEM COMPLETA");
    printf("\n-------------------------------\n");
    printf("NOME               SEXO     NOTA\n");
    printf("%-20s %c    %6.1f\n", nome1, sexo1, nota1);
    printf("%-20s %c    %6.1f\n", nome2, sexo2, nota2);
    printf("%-20s %c    %6.1f\n", nome3, sexo3, nota3);
    printf("\n-------------------------------");
    system("PAUSE");






}
