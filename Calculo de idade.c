/*13.	Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a.	A idade da pessoa em anos;
b.	A idade da pessoa em meses;
c.	A idade da pessoa em dias;
d.	A idade da pessoa em semanas.*/
#include <stdio.h>
#include <locale.h>
int main(){
    //Declaração de Variáveis
    int dia_nasc, dia_atual, ano_nasc, ano_atual, mes_nasc, mes_atual,semana_nasc,semana_atual;
    int dias,meses,anos,semanas;
    setlocale(LC_ALL,"Portuguese");
    //Nascimento
     printf("Informe o dia em que você nasceu:");
     scanf("%d",&dia_nasc);
     
     printf("Informe a semana em que você nasceu:");
     scanf("%d",&semana_nasc);
     
     printf("Informe o mês em que você nasceu:");
     scanf("%d",&mes_nasc);
     
     printf("Informe o ano em que você nasceu:");
     scanf("%d",&ano_nasc);
     
     printf("-------------------------------------------\n");
     //Atual
    printf("Informe o dia atual:");
    scanf("%d",&dia_atual);
    
    printf("Informe a semana atual:");
    scanf("%d",&semana_atual);
     
    printf("Informe o mês atual:");
    scanf("%d",&mes_atual);
     
    printf("Informe o ano atual:");
    scanf("%d",&ano_atual);
    dias =  dia_atual * 365; //ERRADO
    semanas = semana_nasc * 4;
    meses = mes_nasc * 12;
    anos = ano_atual - ano_nasc;
    printf("\nSua Data de Nascimento é %d / %d / %d",dias,meses,anos);
    printf("\nSua idade em Anos é: %d",anos);
    printf("\nSua idade em Meses é: %d",meses);
    printf("\nSua idade em semanas é: %d",semanas);
    printf("\nSua idade em dias é: %d",dias);
   
    }
