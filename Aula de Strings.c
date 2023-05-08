#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Variáveis
    char palavra[256];

    //Instrução
    printf("Digite uma palavra: ");

    //Limpa o Buffer
    fflush(stdin);

    //Lê a String
    fgets(palavra, 256, stdin);

    //Limpa as casas não utilizadas
    palavra[strcspn(palavra, "\n")] = '\0';

    //Imprime na tela
    printf("%s\n", palavra);

    //Pausa o programa após executar
    getchar();

    return 0;
}

