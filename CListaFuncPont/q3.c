/*
	3.Escreva um programa que contenha duas variáveis inteiras. 
	Leia  essas variáveis do teclado. Em seguida, compare seus 
	endereços  e exiba o conteúdo do maior endereço.
*/
#include <stdio.h>

int main(int argc, char** argv)
{
	int x;
	int y;
	
	printf("digite o valor de x: ");
	scanf("%d",& x);
	printf("digite o valor de y: ");
	scanf("%d",& y);
	
	if(&x > &y)
	{
		printf("%d", &x);
	} else
	{
		printf("%d", &y);
	} 
	
	return 0;
} 