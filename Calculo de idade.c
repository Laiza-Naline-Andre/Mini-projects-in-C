/*13.	Fa�a um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a.	A idade da pessoa em anos;
b.	A idade da pessoa em meses;
c.	A idade da pessoa em dias;
d.	A idade da pessoa em semanas.*/
#include <stdio.h>
#include <locale.h>
int main(){
    //Declara��o de Vari�veis
    int dia_nasc, dia_atual, ano_nasc, ano_atual, mes_nasc, mes_atual,semana_nasc,semana_atual;
    int dias,meses,anos,semanas;
    setlocale(LC_ALL,"Portuguese");
    //Nascimento
     printf("Informe o dia em que voc� nasceu:");
     scanf("%d",&dia_nasc);
     
     printf("Informe a semana em que voc� nasceu:");
     scanf("%d",&semana_nasc);
     
     printf("Informe o m�s em que voc� nasceu:");
     scanf("%d",&mes_nasc);
     
     printf("Informe o ano em que voc� nasceu:");
     scanf("%d",&ano_nasc);
     
     printf("-------------------------------------------\n");
     //Atual
    printf("Informe o dia atual:");
    scanf("%d",&dia_atual);
    
    printf("Informe a semana atual:");
    scanf("%d",&semana_atual);
     
    printf("Informe o m�s atual:");
    scanf("%d",&mes_atual);
     
    printf("Informe o ano atual:");
    scanf("%d",&ano_atual);
    dias =  dia_atual * 365; //ERRADO
    semanas = semana_nasc * 4;
    meses = mes_nasc * 12;
    anos = ano_atual - ano_nasc;
    printf("\nSua Data de Nascimento � %d / %d / %d",dias,meses,anos);
    printf("\nSua idade em Anos �: %d",anos);
    printf("\nSua idade em Meses �: %d",meses);
    printf("\nSua idade em semanas �: %d",semanas);
    printf("\nSua idade em dias �: %d",dias);
   
    }
