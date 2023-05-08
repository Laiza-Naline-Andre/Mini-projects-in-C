#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	struct ALUNOS{
		char nome[30];
		int matricula;
		struct NOTAS {
			int nota1;
			int nota2;
		}N;
	};
	struct ALUNOS aluno[3];
	//Preenchendo o Registro
	printf("Nome do aluno:");
	//Preenchendo "nome" na posição 1 do vetor
	gets(aluno[1].nome);
	//Solicitando a matricula
	printf("\nMatricula:");
	scanf("%d",&aluno[1].matricula);
	//Solicitando a Nota 1
	printf("\nInforme a 1º Nota:");
	scanf("%d",&aluno[1].N.nota1);
	//Solicitando a Nota 2
	printf("\nInforme a 2º Nota:");
	scanf("%d",&aluno[1].N.nota2);
	//Aprensentando o Registro
	printf("\nNome do aluno: %s \n",aluno[1].nome);
	printf("\nMatricula: %d \n",aluno[1].matricula);
	printf("\nNota 1: %d \n",aluno[1].N.nota1);
	printf("\nNota 2: %d \n",aluno[1].N.nota2);
	system ("pause");	
}

