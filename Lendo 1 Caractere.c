#include <stdio.h>
void main(){
    //D� para se ler 1 caratere usando o Flush() ou fazendo uma gambiarra que � dando um espa�o antes da porcentagem
    char r;
    char s;
    printf("Digite so uma letra:");
    fflush(stdin);
    scanf("%c",&r);
    printf("Digite outra letra:");
    fflush(stdin);
    scanf("%c",&s);
    printf("Voce digitou as letras \"%c\" e \"%c\"", r, s);
}

// O SEGUNDO PROGRAMA N�O EST� PEGANDO POR CONTA DO  PRIEMIRO PROGRAMA, SE APAGAR O PRIMEIRO O SEGUNDO FUNCIONA.
#include <stdio.h>

void main(){
    //USANDO O GETCHAR()
    char r;
    char s;
    printf("Digite so uma letra:");
    fflush(stdin);
    r = getchar();
    printf("Digite outra letra:");
    fflush(stdin);
    s = getchar();
    printf("Voce digitou as letras \"%c\" e \"%c\"", r, s);

}
