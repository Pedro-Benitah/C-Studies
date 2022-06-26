/*
	4. Faça um programa que leia 2 valores inteiros e chame uma
	função que receba estas 2 variáveis e troque o seu conteúdo, ou
	seja, esta função ´e chamada passando duas variáveis A e B por
	exemplo e, após a execução da função, A conter ´a o valor de B e
	B ter ´a o valor de A.
*/
#include <stdio.h>

void troca(int *pa, int *pb);

int main(int argc, char** argv)
{
	int a,b;
	
	printf("digite o valor de a: ");
	scanf("%d",& a);
	printf("digite o valor de b: ");
	scanf("%d",& b);
	
	troca(&b,&a);
	
	printf("Valor de 'a' trocado: %d\n", a);
	printf("Valor de 'b' trocado: %d\n\n", b);
		
	return 0;
}

void troca(int *pa, int *pb){
	int aux = *pa;
	*pa = *pb;
	*pb = aux;
}