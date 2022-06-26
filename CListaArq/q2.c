/*
	2. (UFU) Faça um programa que receba do usuário um arquivo texto e mostre
	na tela quantas linhas esse arquivo possui.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *arquivo = fopen("testes.txt", "r");
	int quantidade_de_linhas = 0;
	char letra;
	
	while((letra = fgetc(arquivo))!= EOF)
	{
		if(letra == '\n')
		{
			quantidade_de_linhas++;
		}
	}
	printf("O arquivo possui %d linhas.", quantidade_de_linhas);
	fclose(arquivo);
	
	return 0;
}