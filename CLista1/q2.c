#include <stdio.h>

/*
	2. Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
	imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
	abaixo:
		a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula
	C=(f-32.0) * (5.0/9.0).
		b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula
	C=(f-32)*(5/9).
*/

int main() {
	double Fahrenheit_d;
	int Fahrenheit_i;
	double Celsius;
	
	printf("Conversor Fahrenheit - Celsius.");
	printf("\n\na) Insira qualquer valor em graus Fahrenheit: ");
	scanf("%lf",& Fahrenheit_d);
	
	Celsius = (Fahrenheit_d-32.0) * (5.0/9.0);
	
	printf("\nO valor de Fahrenheit convertido pra Celsius eh igual a: %lf", Celsius);
	
	printf("\n\nb) Agora insira um valor inteiro em graus Fahrenheit: ");
	scanf("%d",& Fahrenheit_i);
	
	Celsius = (Fahrenheit_i-32.0) * (5.0/9.0);
	
	printf("\nO valor inteiro de Fahrenheit convertido pra Celsius eh igual a: %lf", Celsius);
	
	//printf("%lf", Fahrenheit);
	return(0);
}