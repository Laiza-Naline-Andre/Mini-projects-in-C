/*10.	Elaborar um programa para calcular a quantidade de litros de combustível gasta em uma viagem, 
utilizando-se um automóvel que faz 10 km por litro. Para obter o cálculo, 
o usuário deverá fornecer o tempo gasto na viagem em horas e a velocidade média durante a mesma. 
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE. 
Tendo o valor da distância,
basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS - DISTANCIA/10. 
O programa deverá apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.*/
 
 
#include <stdio.h>
#include<locale.h>
 int main(){
 	//Declaração de Variável
 	float distancia,tempo,velocidade,litros_usados,litros;
 	//Declaração de Constante
 	const float km_por_litro = 10.0;
 	//Comando de acentuação 
 	setlocale(LC_ALL,"Portuguese");
 	//comandos de entrada e saida de dados
 	printf("Este programa irá calcular a quantidade de litros de combustível gasta em uma viagem\n");
 	
 	printf("Informe quanto tempo,em horas,a viagem transcorreu(h):");
 	scanf("%f",&tempo);
 	
 	printf("Informe a velocidade do carro durante o percusso(km/h):");
 	scanf("%f",&velocidade);
 	
 	distancia = tempo * velocidade;
 	
 	printf("A distância percorrida foi %.2f\n",distancia);
 	litros_gastos = distancia/10;
 	//Comandos de saída
 	printf("Os LITROS gastos:%.2f km/h \n",litros_gastos);
 	printf("A VELOCIDADE utilizada: %.2f Km/h \n",velocidade);
 	printf("O TEMPO gasto: %.2f h \n",tempo);
 	printf("A DISTÂNCIA percorrida:%.2f km \n",distancia);
 	return 0;
 	
 }
 
