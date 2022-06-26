#include <stdio.h>

/*
	12. Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela
	possui.
*/

int main(int argc, char** argv) {
	int resp;
	int matriz[6][6];
	int i;
	int j;
	int contador;
	int quantidade=0;
	
	do {
		printf("Voce deseja que a matriz seja construida de forma manual ou automatica? (1-manual / 2-automatica)\nResposta: ");
		scanf("%d",& resp);
		if(resp == 1){
			contador = 1;
			printf("\nInsira os valores para cada posicao do matriz:\n");
			for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
				for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
					printf("Digite o valor do %d valor da matriz a: ", contador);
					scanf("%d",&matriz[j][i]);
					contador++;
				}
			}
		} else if (resp == 2){
			contador = 1;
			for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
				for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
					matriz[j][i] = contador;
					contador++;
				}
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
	
	printf("\nMatriz: \n");
	
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
			if(matriz[j][i]>10){
				quantidade++;
			}
			if(j == 0){
				printf("[\t%d\t",matriz[j][i]);
			} else{
				printf("%d\t",matriz[j][i]);
			}
			
		}
		printf("]\n");
	}
	printf("\n\nEsta matriz apresenta %d valores maiores que 10.\n\n", quantidade);
	return 0;
}