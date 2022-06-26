#include <stdio.h>

/*
	8. Crie um programa que contenha uma matriz de float contendo 3
	linhas e 3 colunas. Imprima o endereço de cada posição dessa
	matriz.
*/

int main(int argc, char** argv) {

	float matriz[3][3];
	int i, j, contador;

	contador = 1;
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
			matriz[j][i] = contador;
			contador++;
		}
	}
		
	printf("\nMatriz de enderecos: \n");
	
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
			if(j == 0){
				printf("[\t%d\t\t",&matriz[j][i]);
			} else{
				printf("%d\t\t",&matriz[j][i]);
			}
		}
		printf("]\n\n");
	}
}