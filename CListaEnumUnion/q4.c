/*
	4. Utilizando uma única variável union, crie uma função que receba um inteiro e
	calcule seu quadrado, em seguida, receba um caractere e, caso maiúsculo,
	imprima minúsculo, caso minúsculo, imprima maiúsculo, e por último, receba
	uma string de no máximo 8 caracteres e imprima seu inverso.
*/

#include <stdio.h>
#include <ctype.h>
#include<string.h>

union valor
{
	int i;
	char c;
	char s[8];
};

int main(int argc, char** argv)
{
	union valor val;
	printf("Insira um valor inteiro: ");
	scanf("%d", &val.i);
	printf("O valor de %d ao quadrado eh %d", val.i, val.i*val.i);
	
	printf("\nInsira um valor char: ");
	scanf("%c", &val.c);
	scanf("%c", &val.c);
	if(val.c > 96)
	{
		printf("O valor de %c maisuculo eh %c", val.c, toupper(val.c));
	} else
	{
		printf("O valor de %c minusculo eh %c", val.c, tolower(val.c));
	}
	printf("\nInsira um valor no maximo 8 caracteres: ");
	gets(val.s);
	gets(val.s);
	printf("%s inverso eh ", val.s);
	printf("%s", strrev(val.s));
	
	return 0;
}