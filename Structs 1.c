#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
	//Comando de Acentua��o
	setlocale(LC_ALL,"Portuguese");
	//Defini��o e come�o de Registro
	struct ALUNOS{
		char nome[30];
		int matricula;
		char endereco[50];
	};//Fim do Registro
	
	//Inicializa��o de todos os campos do registro
	struct ALUNOS aluno = {"PC",1000,"R.MILIONARIOS,200 apt 301"};
	//Apresentando o Registro Antigo
	printf("Nome do Aluno: %s \n",aluno.nome);//Mostrando o nome do aluno
	printf("Matr�cula: %d \n",aluno.matricula);//Mostrando a matricula do aluno
	printf("Endere�o: %s \n", aluno.endereco);//Mostrando o endere�o  
	//Atribuindo novas inform��es as vari�veis structs
	strcpy(aluno.nome, "Paulo Cesar");
	aluno.matricula = 2000;
	strcpy(aluno.endereco,"R.BILIONARIO,2000000");
	//Apresentando o novo Registro 
	printf("----------------------\n");
	printf("Nome do Aluno: %s \n", aluno.nome);
	printf("Matricula: %d \n",aluno.matricula);
	printf("Endere�o: %s \n",aluno.endereco);
	printf("----------------------\n");
	system("pause");
}
