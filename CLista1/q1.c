/*
	1. Fazer um programa em C que pergunta um valor em metros e imprime o
	correspondente em decímetros, centímetros e milímetros.
*/

#include <stdio.h>
#include <math.h>

int main() {
	float metro;
	float decimetro;
	float centimetro;
	float milimetro;
	
	printf("\n\nInsira um valor em metros: ");
	scanf("%f", &metro);
	
	decimetro = metro/10;
	centimetro = metro/100;
	milimetro = metro/1000;
	
	printf("\n\nValor em decimetros: %f", decimetro);
	printf("\n\nValor em centimetro: %f", centimetro);
	printf("\n\nValor em milimetro: %f", milimetro);
	
	//printf("%f", metro);
	return(0);
}