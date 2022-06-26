/*
	4. (UFU) Faça um programa que receba do usuário um arquivo texto e mostre
	na tela quantas letras são vogais e quantas são consoantes.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *arquivo = fopen("testes.txt", "r");
	char vogais[] = "aeiouAEIOU";
	char letra;
	int i, contador_de_vogais, contador_de_consoantes = 0;
	
	while((letra = fgetc(arquivo))!= EOF)
	{
		for(i=0; vogais[i]!='\0'; i++)
		{
			if(letra==vogais[i])
			{
				contador_de_vogais++;
			}else if(letra > 64 && letra < 123)
			{
				contador_de_consoantes++;
			}
		}
	}
	printf("O arquivo possui %d vogais e %d consoantes.", contador_de_vogais, contador_de_consoantes);
	fclose(arquivo);
	
	return 0;
}