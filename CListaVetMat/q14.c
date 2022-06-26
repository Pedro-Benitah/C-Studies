#include <stdio.h>

/*
	14. Leia uma matriz 8x 8 e escreva o maior elemento da diagonal principal e a soma
	dos elementos da diagonal secundaria.
*/

int main(int argc, char** argv) {
	int resp;
	int matriz[8][8];
	int i;
	int j;
	int contador;
	int maior_x=0;
	int soma=0;
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
	d_sec = (sizeof(matriz)/sizeof(matriz[0]))-1;
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		if(matriz[i][i]>maior_x){
			maior_x = matriz[i][i];
		}
		soma += matriz[i][d_sec-i];
	}
	printf("O maior elemento da diagonal principal eh: %d\nE a soma dos elementos da diagonal secundaria eh: %d", maior_x, soma);
	return 0;
}