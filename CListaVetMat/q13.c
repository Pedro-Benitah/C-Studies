#include <stdio.h>

/*
	13. Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer
	uma busca desse valor na matriz e, ao final escrever a localização (linha e
	coluna) ou uma mensagem de “não encontrado”.
*/

int main(int argc, char** argv) {
	int resp;
	int matriz[20][20];
	int i;
	int j;
	int contador;
	int busca;
	int aux_busca = 0;
	
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
			if(j == 0){
				printf("[\t%d\t",matriz[j][i]);
			} else{
				printf("%d\t",matriz[j][i]);
			}
			
		}
		printf("]\n\n");
	}
	
	printf("Insira o valor que voce deseja buscar: ");
	scanf("%d",& busca);
	
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
			if(matriz[i][j]==busca){
				printf("O valor %d foi encontrado na linha %d e coluna %d", busca, j+1, i+1);
				aux_busca = 1;
				break;
			}
		}
	}
	if(aux_busca == 0){
		printf("\n\nValor nao encontrado, sinto muito.");
	}
	return 0;
}