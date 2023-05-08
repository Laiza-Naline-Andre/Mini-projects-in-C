/*14.	Escreva um algoritmo que leia o n�mero de horas trabalhadas por um funcion�rio durante um m�s, 
o valor que recebe por hora, o n�mero de horas extras trabalhadas e o n�mero de dependentes. 
O algoritmo deve calcular e escrever o sal�rio deste funcion�rio, sabendo-se que para cada hora extra o valor recebido
� o dobro do valor normal e que cada dependente acrescenta 5% ao sal�rio normal (sem contabilizar horas extras).*/
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(){
	//Comando para acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Declara��o de v�riaveis
	float horas_trabalhadas,valor_hora,horas_extras,salario_bruto,salario_liquido,salario_horas_extras,adic_numdependentes;
	int num_dependentes; 

	printf("Informe o valor que recebe por hora:");
	scanf("%f",&valor_hora);
	
	printf("Informe a quantidade de horas trabalhadas no m�s:");
	scanf("%f",&horas_trabalhadas);
	
	printf("Informe o n�mero de horas extras trabalhadas:");
	scanf("%f",&horas_extras);
	
	printf("Informe o n�mero de dependentes:");
	scanf("%d",&num_dependentes);
	//Calculo do salario
	salario_bruto = valor_hora * horas_trabalhadas;
	//Calculo n�mero de Horas Extras
	salario_horas_extras = salario_bruto * 2;
	//Calculo n�mero de Dependentes
	salario_bruto =  num_dependentes * 0.05);

	//Finaliza��o
	printf("O seu sal�rio � R$ %2.f\n",salario_bruto);
	printf("Seu sal�rio com %2.f de horas extras � R$ %2.f\n",horas_extras,salario_horas_extras);
	printf("Seu sal�rio com %d dependentes � de R$ %2.f\n",num_dependentes,salario_bruto);
	
	
	return 0;
}

