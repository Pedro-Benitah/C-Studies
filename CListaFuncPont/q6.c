/*
	6. Elaborar um programa que leia dois valores inteiros (A e B). Em
	seguida faça uma função que retorne a soma do dobro dos dois
	números lidos. A função dever ́a armazenar o dobro de A na
	própria variável A e o dobro de B na própria variável B.
*/

#include <stdio.h>

int soma(int *pa, int *pb);

int main(int argc, char** argv) {
	int A, B, resp;

	printf("Insira o valor de A: ");
	scanf("%d", &A);
	printf("Insira o valor de B: ");
	scanf("%d", &B);
	printf("\n");
	
	resp = soma(&A, &B);
	
	printf("O valor da soma de %d + %d eh: %d", A, B, resp);
	
	return 0;
}

int soma(int *pa, int *pb) {
	int resp;
		*pa = *pa*2;
		*pb = *pb*2;
	return *pa+*pb;
}