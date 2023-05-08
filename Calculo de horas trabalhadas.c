/*14.	Escreva um algoritmo que leia o número de horas trabalhadas por um funcionário durante um mês, 
o valor que recebe por hora, o número de horas extras trabalhadas e o número de dependentes. 
O algoritmo deve calcular e escrever o salário deste funcionário, sabendo-se que para cada hora extra o valor recebido
é o dobro do valor normal e que cada dependente acrescenta 5% ao salário normal (sem contabilizar horas extras).*/
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(){
	//Comando para acentuação
	setlocale(LC_ALL,"Portuguese");
	//Declaração de váriaveis
	float horas_trabalhadas,valor_hora,horas_extras,salario_bruto,salario_liquido,salario_horas_extras,adic_numdependentes;
	int num_dependentes; 

	printf("Informe o valor que recebe por hora:");
	scanf("%f",&valor_hora);
	
	printf("Informe a quantidade de horas trabalhadas no mês:");
	scanf("%f",&horas_trabalhadas);
	
	printf("Informe o número de horas extras trabalhadas:");
	scanf("%f",&horas_extras);
	
	printf("Informe o número de dependentes:");
	scanf("%d",&num_dependentes);
	//Calculo do salario
	salario_bruto = valor_hora * horas_trabalhadas;
	//Calculo número de Horas Extras
	salario_horas_extras = salario_bruto * 2;
	//Calculo número de Dependentes
	salario_bruto =  num_dependentes * 0.05);

	//Finalização
	printf("O seu salário é R$ %2.f\n",salario_bruto);
	printf("Seu salário com %2.f de horas extras é R$ %2.f\n",horas_extras,salario_horas_extras);
	printf("Seu salário com %d dependentes é de R$ %2.f\n",num_dependentes,salario_bruto);
	
	
	return 0;
}

