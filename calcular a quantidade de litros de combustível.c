/*10.	Elaborar um programa para calcular a quantidade de litros de combust�vel gasta em uma viagem, 
utilizando-se um autom�vel que faz 10 km por litro. Para obter o c�lculo, 
o usu�rio dever� fornecer o tempo gasto na viagem em horas e a velocidade m�dia durante a mesma. 
Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA = TEMPO * VELOCIDADE. 
Tendo o valor da dist�ncia,
basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula: LITROS_USADOS - DISTANCIA/10. 
O programa dever� apresentar os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem.*/
 
 
#include <stdio.h>
#include<locale.h>
 int main(){
 	//Declara��o de Vari�vel
 	float distancia,tempo,velocidade,litros_usados,litros;
 	//Declara��o de Constante
 	const float km_por_litro = 10.0;
 	//Comando de acentua��o 
 	setlocale(LC_ALL,"Portuguese");
 	//comandos de entrada e saida de dados
 	printf("Este programa ir� calcular a quantidade de litros de combust�vel gasta em uma viagem\n");
 	
 	printf("Informe quanto tempo,em horas,a viagem transcorreu(h):");
 	scanf("%f",&tempo);
 	
 	printf("Informe a velocidade do carro durante o percusso(km/h):");
 	scanf("%f",&velocidade);
 	
 	distancia = tempo * velocidade;
 	
 	printf("A dist�ncia percorrida foi %.2f\n",distancia);
 	litros_gastos = distancia/10;
 	//Comandos de sa�da
 	printf("Os LITROS gastos:%.2f km/h \n",litros_gastos);
 	printf("A VELOCIDADE utilizada: %.2f Km/h \n",velocidade);
 	printf("O TEMPO gasto: %.2f h \n",tempo);
 	printf("A DIST�NCIA percorrida:%.2f km \n",distancia);
 	return 0;
 	
 }
 
