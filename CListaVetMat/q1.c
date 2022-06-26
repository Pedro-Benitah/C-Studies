#include <stdio.h>
#include <stdlib.h>

/*
	1. Leia um vetor de 12 posições e em seguida ler também dois valores X e Y
	quaisquer correspondentes a duas posições no vetor. Ao final seu programa
	deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

int main() {
	int resp;
	int vetor[12];
	int i;
	int val_a;
	int val_b;
	
	do {
		printf("Programa de leitura de vetor de 12 posicoes:\n");
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
	printf("O vetor: [");
	
	for (i = 0; i<sizeof(vetor)/sizeof(vetor[0]); i++){
		if(i!=(sizeof(vetor)/sizeof(vetor[0]))-1){
		printf("%d,", vetor[i]);
		}else{
			printf("%d]\n", vetor[i]);
		}
	}
	
	printf("\n Insira 2 valores de posição do vetor de 0 a %d, separados por espaco ou enter.", (sizeof(vetor)/sizeof(vetor[0]))-1);
	scanf("%d%d",&val_a,&val_b);
	
	printf("A soma dos valores das posicoes %d e %d eh %d", val_a, val_b, vetor[val_a]+vetor[val_b]);
	
	
	return 0;
}