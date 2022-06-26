#include <stdio.h>

/*
	15. Leia uma matriz 6 x 6 e atribuir o valor 0 para os valores negativos encontrados
	fora das diagonais principal e secundaria.
*/

int main(int argc, char** argv) {
	int resp;
	int matriz[6][6];
	int i;
	int j;
	int contador;
	int d_sec;
	
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
			contador = -1;
			for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
				for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
					matriz[j][i] = contador;
					contador--;
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
	
	printf("\nMatriz inicial: \n");
	
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
	
	d_sec = (sizeof(matriz)/sizeof(matriz[0]))-1;
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
			if(matriz[i][j] != matriz[i][i] && matriz[i][j] != matriz[i][d_sec-i]){
				if(matriz[i][j]<0){
					matriz[i][j] = 0;
				}
			}
		}
	}
	
	printf("\nMatriz final: \n");
	
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
	return 0;
}