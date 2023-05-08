#include <stdio.h>
#include <stdlib.h>
void main(){
 char letra,antes,depois;
 printf("Digite uma letra:");
 fflush(stdin);
 letra = getchar();
 antes = letra - 1;
 depois = letra + 1;
 printf("Antes da letra %c temos a letra %c. Depois temos a letra %c" , letra, antes , depois);

 }
