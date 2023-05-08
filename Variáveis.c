#include <stdio.h>
#include<locale.h>
void main(){
unsigned int idade = 19;
float peso = 73.7;
char sexo = 'F';
char nome[] = "Láiza";
setlocale(LC_ALL,"portuguese");
    printf("%s tem %d anos, pesa %.2f e é do sexo %c\n",nome,idade,peso,sexo);
    printf("%s é do sexo %c, tem %d anos e pesa %.2f",nome,sexo,idade,peso);
}
