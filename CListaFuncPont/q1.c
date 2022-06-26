/*
	1. Escreva um programa que declare um inteiro, um real e um char,  
	e ponteiros para inteiro, real e char. Associe as variáveis aos 
	ponteiros (use &). Modifique os valores de cada variável usando  
	os ponteiros. Imprima os valores das variáveis antes e após a 
	modificação. 
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int num = 96;
	double real = 96.96;
	char carac = 'P';
	int *ponti = NULL;
	double *pontr = NULL;
	char *pontc = NULL;
	
	ponti = &num;
	pontr = &real;
	pontc = &carac;
	
	printf("valor antigo do inteiro: %d\n", *ponti); 
	printf("valor antigo do real: %f\n", *pontr);
	printf("valor antigo do caractere: %c\n\n", *pontc);
	
	*ponti = 42;
	*pontr = 42.42;
	*pontc = 'B';
	 
	printf("valor novo do inteiro: %d\n", *ponti); 
	printf("valor novo do real: %f\n", *pontr);
	printf("valor novo do caractere: %c\n\n", *pontc);

	return 0;
}