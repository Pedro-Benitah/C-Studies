/*
	1. Crie a UNIÃO integer com membros char c, short s, int i e long b. Escreva um
	programa que aceite valores do tipo char, shor, int e long e armazene os valores
	em variáveis de união do tipo union integer. Cada variável de união deve ser
	impressa com um char, um short, um int e um long. Os valores são impressos
	corretamente?
*/
#include <stdio.h>

union integer
{
	char c;
	short int s;
	int i;
	long int b;
};

int main(int argc, char** argv)
{
	union integer val;
	printf("Insira o valor char: ");
	scanf("%c", &val.c);
	printf("Insira o valor short: ");
	scanf("%hi", &val.s);
	printf("Insira o valor int: ");
	scanf("%d", &val.i);
	printf("Insira o valor long: ");
	scanf("%li", &val.b);
	
	printf("\nValor em char: %c", val.c);
	printf("\nValor em short: %hi", val.s);
	printf("\nValor em int: %d", val.i);
	printf("\nValor em long: %li", val.b);
	
	return 0;
}

//os valores impressos não saíram corretamente, pois ao ler as variáveis em sequência, os valores anteriores lidos são substituídos.