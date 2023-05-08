#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    srand(time(NULL));
    int n_a = rand () % 5 + 1;
    int n;
    printf("Vou pensar entre um numero entre 1 e 5. Tente advinhar!\n");
    printf("Qual seu palpite?");
    scanf("%d",n);
    printf("Eu pensei no numero %d e voce pensou no %d" ,n_a,n);
}
