#include <stdio.h>
#include <math.h>

/*
	2. Declare um vetor de 10 posições e o preencha com os 10 primeiros números
	impares e o escreva.
*/

int main() {
	int i;
	int vetor[10];
	int aux = 1;
	
	for(i=0; i<10; i++){
		vetor[i] = aux;
		aux = aux+2;
	}
	
	printf("O vetor: [");
	
	for (i = 0; i<sizeof(vetor)/sizeof(vetor[0]); i++){
		if(i!=(sizeof(vetor)/sizeof(vetor[0]))-1){
		printf("%d,", vetor[i]);
		}else{
			printf("%d]\n", vetor[i]);
		}
	}
	
	return 0;
}