#include <stdio.h>

/*
	6. Leia um vetor de 5 posições contendo os caracteres de um numero. Em seguida
	escreva esse numero por extenso.
*/

int main(int argc, char** argv) {
	int i;
	char vetor[6];
	
	printf("Escreva separadamente 5 caracteres do numero desejado.\n\n");
	for (i = 0; i<(sizeof(vetor)/sizeof(vetor[0]))-1; i++){
		printf("Caracter numero %d: ", i+1);
		scanf("%s",& vetor[i]);
	}
	printf("\n\n");
	printf("%s", vetor);
}