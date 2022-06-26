#include <stdio.h>

/*
	5.Fazer uma rotina em "C" que recebe um vetor de números inteiros como
	parâmetro onde todos os valores exceto o último são positivos e devolve:
	- a média dos valores do vetor;
	- o menor valor do vetor (sem considerar o último)
	- o maior valor do vetor
*/

int main(int argc, char** argv) {
	int vetor[11];
	float total = 0;
	float media;
	float maior_val;
	float menor_val;
	
	for (int i = 0; i<10; i = i+1){
		vetor[i] = i+1;
	}
	vetor[10] = -5;
	
	for (int i = 0; i<=10; i = i+1){
		total = total + vetor[i];
		media = total/(i+1);
		if(vetor[i]>=maior_val){
			maior_val=vetor[i];
		}
	}
	menor_val = maior_val;
	for (int i = 10; i>=0; i = i-1){
		if(i!=10){
			if(vetor[i]<=menor_val)
			menor_val = vetor[i];
		}
	}
	printf("O vetor: [");
	
	for (int i = 0; i<=10; i = i+1){
		if(i!=10){
		printf("%d,", vetor[i]);
		}else{
			printf("%d]\n", vetor[i]);
		}
	}
	
	printf("\n- a media dos valores do vetor: %f\n", media);
	printf("- o menor valor do vetor (sem considerar o ultimo): %f\n", menor_val);
	printf("- o maior valor do vetor: %f\n", maior_val);
	
	//printf("%f", menor_val);
	
	/*
	for (int i = 0; i<=10; i = i+1){
		printf("%d\n", vetor[i]);
	}
	vetor[0] = 48;
	printf("\n\n%d\n\n", vetor[11]);
	*/
	return 0;
}
