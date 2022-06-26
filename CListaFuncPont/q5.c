/*
	5. Faça um programa que leia dois valores inteiros e chame uma
	função que receba estes 2 valores de entrada e retorne o maior
	valor na primeira variável e o menor valor na segunda variável.
	Escreva o conteúdo das 2 variáveis na tela.
*/

#include <stdio.h>

void comparator(int *pa, int *pb);

int main(int argc, char** argv) {
	int A, B;

	printf("Insira o valor de A: ");
	scanf("%d", &A);
	printf("Insira o valor de B: ");
	scanf("%d", &B);
	printf("\n");
	
	comparator(&A, &B);
	
	printf("Valor de A: %d", A);
	printf("\nValor de B: %d", B);
	
	return 0;
}

void comparator(int *pa, int *pb) {
	int auA;
	if(*pa > *pb)
	{
		return;
	}
	else 
	{
		auA = *pa;
		*pa = *pb;
		*pb = auA;
	}
	return;
}