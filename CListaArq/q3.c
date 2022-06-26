/*
	3. (UFU) Faça um programa que receba do usuário um arquivo texto e mostre
	na tela quantas letras são vogais.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *arquivo = fopen("testes.txt", "r");
	char vogais[] = "aeiouAEIOU";
	char letra;
	int i, contador_de_vogais = 0;
	
	while((letra = fgetc(arquivo))!= EOF)
	{
		for(i=0; vogais[i]!='\0'; i++)
		{
			if(letra==vogais[i])
			{
				contador_de_vogais++;
			}
		}
	}
	printf("O arquivo possui %d vogais.", contador_de_vogais);
	fclose(arquivo);
	
	return 0;
}