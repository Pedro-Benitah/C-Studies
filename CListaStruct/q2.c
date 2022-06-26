/*
	2. Construa uma estrutura aluno com nome, número de matrícula e curso.
	Leia do usuário a informação de 5 alunos, armazene em vetor essa
	estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#define MAX_LENGHT 5

typedef struct 
{
	char nome[100];
	int matricula;
	char curso[100];
} aluno;

int main(int argc, char** argv)
{
	aluno turma[MAX_LENGHT];
	int i;
	
	for (i=0; i<MAX_LENGHT; i++)
	{
		printf("Insira o nome do %d aluno: ", i+1);
		gets(turma[i].nome);
		printf("Insira a matricula do %d aluno: ", i+1);
		scanf("%d",& turma[i].matricula);
		printf("Insira o curso do %d aluno: ", i+1);
		gets(turma[i].curso);
		gets(turma[i].curso);
		printf("\n");
	}
	
	for(i=0; i<MAX_LENGHT; i++)
	{
		printf("Aluno:\n");
		printf("Nome: %s\n", turma[i].nome);
		printf("Matricula: %d\n", turma[i].matricula);
		printf("Curso: %s\n\n", turma[i].curso);
	}
	
	return 0;
}