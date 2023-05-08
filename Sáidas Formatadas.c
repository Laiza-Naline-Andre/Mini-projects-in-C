#import <stdio.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    printf("O %s tem %d anos de idade \n", "Gustavo", 39);
    printf("Seu peso atual é de %6.2fKg\n",97.5);
    printf("Seu sexo é %c",'F');
}
