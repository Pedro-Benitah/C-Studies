#include <stdio.h>

/*
	5. Leia um vetor de 20 posições e acumule os valores do primeiro elemento no
	segundo, deste no terceiro e assim por diante. Ao final, escreva o vetor obtido.
*/

int main(int argc, char** argv) {
	int resp;
	int vetor[20];
	int i;
	int busca;
	int aux = 0;
	
	do {
		printf("Programa de leitura de vetor de 20 posicoes:\n");
		printf("Voce deseja que o vetor seja construido de forma manual ou automatica? (1-manual / 2-automatica)\nResposta: ");
		scanf("%d",& resp);
		if(resp == 1){
			printf("\nInsira os valores para cada posicao do vetor:\n");
			for(i = 0; i<sizeof(vetor)/sizeof(vetor[0]); i++){
				printf("Digite o valor do %d valor: ", i+1);
				scanf("%d",&vetor[i]);
			}
		} else if (resp == 2){
			for(i = 0; i<sizeof(vetor)/sizeof(vetor[0]); i++){
				vetor[i] = i+1;
			}
		} else{
			printf("Valor nao aceito, digite 3 para tentar de novo ou 0 para sair.\nResposta: ");
			scanf("%d",& resp);
			system("cls");
		}
	} while(resp == 3);
	if(resp == 0){
		return 0;
	}
	printf("O vetor inicial: [");
	
	for (i = 0; i<sizeof(vetor)/sizeof(vetor[0]); i++){
		if(i!=(sizeof(vetor)/sizeof(vetor[0]))-1){
		printf("%d,", vetor[i]);
		}else{
			printf("%d]\n", vetor[i]);
		}
	}
	
	for (i = 1; i<sizeof(vetor)/sizeof(vetor[0]); i++){
		vetor[i] = vetor[i]+vetor[i-1];
	}
	
	printf("O vetor final: [");
	
	for (i = 0; i<sizeof(vetor)/sizeof(vetor[0]); i++){
		if(i!=(sizeof(vetor)/sizeof(vetor[0]))-1){
		printf("%d,", vetor[i]);
		}else{
			printf("%d]\n", vetor[i]);
		}
	}
}