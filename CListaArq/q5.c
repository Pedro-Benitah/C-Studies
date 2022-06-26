/*
	5. (UFU) Faça um programa que receba do usuário um arquivo texto e um
	caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro do
	arquivo.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *arquivo = fopen("testes.txt", "r");
	char letra;
	char busca;
	int i, contador_de_vogais = 0;
	
	printf("Insira o caractere que voce deseja procurar: ");
	scanf("%c",& busca);
	
	while((letra = fgetc(arquivo))!= EOF)
	{
		if(letra==busca)
		{
			contador_de_vogais++;
		}
	}
	printf("O arquivo possui %d vogais.", contador_de_vogais);
	fclose(arquivo);
	
	return 0;
}