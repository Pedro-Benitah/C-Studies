/*
	6. (UFU) Faça um programa que receba do usuário um arquivo texto e mostre
	na tela quantas vezes cada letra do alfabeto aparece dentro do arquivo.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *arquivo = fopen("testes.txt", "r");
	char letra;
	int i, vetor[124];
	
	for(i=65; i<123; i++)
	{
		vetor[i]=0;
	}
	while((letra = fgetc(arquivo))!= EOF)
	{
		vetor[letra]++;
	}
	for(i=65; i<123; i++)
	{
		if(vetor[i]>0)
		{
			printf("No arquivo, a letra %c aparece %d vezes\n\n", i, vetor[i]);
		}
	}
	printf("O arquivo possui %d vogais.", letra);
	fclose(arquivo);
	
	return 0;
}