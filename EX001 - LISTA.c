#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Listagem de Alunos\n");
    printf("Nome\t \tNota\n");
    printf("-----------------------\n");
    printf("Ana Beatriz\t 8.5\n");
    printf("Bianca Martins\t 9.0\n");
    printf("Cláudio Sá\t 5.5\n");
    printf("Giovana Silva\t 7.5\n");
    printf("-----------------------\n");
    system("Pause");

}
