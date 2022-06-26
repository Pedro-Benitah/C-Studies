/*
	2. Crie a UNIÃO pontoFlutuante com membros float f, double d e long double x.
	Escreva um programa que aceite valores do tipo float, double e long double e
	armazene os valores em variáveis de união do tipo union pontoFlutuante. Cada
	variável de união deve ser impressa com um float, um double e um long double.
	Os valores são impressos corretamente?
*/

#include <stdio.h>

union pontoFlutuante
{
	float f;
	double d;
	long double x;
};

int main(int argc, char** argv)
{
	union pontoFlutuante val1;
	union pontoFlutuante val2;
	union pontoFlutuante val3;
	
	long double w;
	
	printf("Insira o valor float: ");
	scanf("%f", &val1.f);
	printf("Insira o valor double: ");
	scanf("%lf", &val2.d);
	printf("Insira o valor long double: ");
	scanf("%Lf", &val3.d);
	
	printf("\nValor em float: %f", val1.f);
	printf("\nValor em double: %lf", val1.d);
	printf("\nValor em long double: %Lf", val1.x);
	printf("\n\nValor em float: %f", val2.f);
	printf("\nValor em double: %lf", val2.d);
	printf("\nValor em long double: %Lf", val2.x);
	printf("\n\nValor em float: %f", val3.f);
	printf("\nValor em double: %lf", val3.d);
	printf("\nValor em long double: %Lf", val3.x);
	
	return 0;
} // Os valores são impressos corretamente apenas para as variáveis dos tipos atribuídos corretamente.