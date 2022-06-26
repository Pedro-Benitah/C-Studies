#include <stdio.h>

/*
	9. Considere um vetor de trajetórias de 9 elementos, onde cada elemento possui o
	valor do próximo elemento do vetor a ser lido.
	Índice 1 2 3 4 5 6 7 8 9
	Valor 5 7 6 9 2 8 4 0 3
	Assim, a seqüência da leitura seria 1, 5, 2, 7, 4, 9, 3, 6, 8, 0
	Faça um algoritmo que seja capaz de ler esse vetor e seguir a trajetória.
*/

int main(int argc, char** argv) {
	int vetor[10];
	int index = 0;
	int aux = 1;
	
	vetor[0] = 1;
	vetor[1] = 5;
	vetor[2] = 7;
	vetor[3] = 6;
	vetor[4] = 9;
	vetor[5] = 2;
	vetor[6] = 8;
	vetor[7] = 4;
	vetor[8] = 0;
	vetor[9] = 3;
	
	printf("valor %d: %d\n", aux, vetor[index]);
	index = vetor[index];
	aux++;
	
	do{
		printf("valor %d: %d\n", aux, vetor[index]);
		index = vetor[index];
		aux++;
	} while(index != (vetor[0])-1);
	
	return 0;
}