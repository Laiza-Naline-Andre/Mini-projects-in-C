#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
	//Comando de Acentuação
	setlocale(LC_ALL,"Portuguese");
	//Definição e começo de Registro
	struct ALUNOS{
		char nome[30];
		int matricula;
		char endereco[50];
	};//Fim do Registro
	
	//Inicialização de todos os campos do registro
	struct ALUNOS aluno = {"PC",1000,"R.MILIONARIOS,200 apt 301"};
	//Apresentando o Registro Antigo
	printf("Nome do Aluno: %s \n",aluno.nome);//Mostrando o nome do aluno
	printf("Matrícula: %d \n",aluno.matricula);//Mostrando a matricula do aluno
	printf("Endereço: %s \n", aluno.endereco);//Mostrando o endereço  
	//Atribuindo novas informções as variáveis structs
	strcpy(aluno.nome, "Paulo Cesar");
	aluno.matricula = 2000;
	strcpy(aluno.endereco,"R.BILIONARIO,2000000");
	//Apresentando o novo Registro 
	printf("----------------------\n");
	printf("Nome do Aluno: %s \n", aluno.nome);
	printf("Matricula: %d \n",aluno.matricula);
	printf("Endereço: %s \n",aluno.endereco);
	printf("----------------------\n");
	system("pause");
}
