#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Vari�veis
    char palavra[256];

    //Instru��o
    printf("Digite uma palavra: ");

    //Limpa o Buffer
    fflush(stdin);

    //L� a String
    fgets(palavra, 256, stdin);

    //Limpa as casas n�o utilizadas
    palavra[strcspn(palavra, "\n")] = '\0';

    //Imprime na tela
    printf("%s\n", palavra);

    //Pausa o programa ap�s executar
    getchar();

    return 0;
}

