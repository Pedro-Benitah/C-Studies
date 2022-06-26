/*
	3. Crie uma estrutura representando os alunos de um determinado curso. A
	estrutura deve conter a matrícula do aluno, nome, nota da primeira
	prova, nota da segunda prova e nota da terceira prova.
		a. Permita ao usuário entrar com os dados de 5 alunos.
		b. Encontre o aluno com maior nota da primeira prova.
		c. Encontre o aluno com maior média geral.
		d. Encontre o aluno com menor média geral
		e. Para cada aluno diga se ele foi aprovado ou reprovado,
			considerando o valor 6 para aprovação.
*/

#include <stdio.h>
#define MAX_LENGHT 5

typedef struct 
{
	int matricula;
	char nome[100];
	int nota_1;
	int nota_2;
	int nota_3;
	int mediaGeral;
}aluno;

int main(int argc, char** argv)
{
	int i;
	int melhor_aluno = 0;
	int pior_aluno = 0;
	int melhor_aluno_prova_1 = 0;
	aluno turma[5];
	
	for (i=0; i<MAX_LENGHT; i++)
	{
		printf("Insira o nome do %d aluno: ", i+1);
		if(i==0){
			gets(turma[i].nome);
		}else
		{
			gets(turma[i].nome);
			gets(turma[i].nome);
		}
		printf("Insira a matricula do %d aluno: ", i+1);
		scanf("%d",& turma[i].matricula);
		printf("Insira a nota do %d aluno na 1 prova: ", i+1);
		scanf("%d",& turma[i].nota_1);
		printf("Insira a nota do %d aluno na 2 prova: ", i+1);
		scanf("%d",& turma[i].nota_2);
		printf("Insira a nota do %d aluno na 3 prova: ", i+1);
		scanf("%d",& turma[i].nota_3);
		printf("\n");
		turma[i].mediaGeral = (turma[i].nota_1+turma[i].nota_2+turma[i].nota_3)/3;
	}
	
	for (i=0; i<MAX_LENGHT; i++)
	{
		if(turma[i].mediaGeral >= 6)
		{
			printf("Aluno %s: APROVADO\n", turma[i].nome);
		}else
		{
			printf("Aluno %s: REPROVADO\n", turma[i].nome);
		}
		if(turma[melhor_aluno].mediaGeral < turma[i].mediaGeral)
		{
			melhor_aluno = i;
		}
		if(turma[pior_aluno].mediaGeral > turma[i].mediaGeral)
		{
			pior_aluno = i;
		}
		if(turma[melhor_aluno_prova_1].nota_1 < turma[i].nota_1)
		{
			melhor_aluno_prova_1 = i;
		}
	}
	
	printf("\nAluno com a maior media: %s\n", turma[melhor_aluno].nome);
	printf("Aluno com a menor media: %s\n", turma[pior_aluno].nome);
	printf("Aluno com a maior nota na primeira prova: %s\n\n" , turma[melhor_aluno_prova_1].nome);
	
	return 0;
}