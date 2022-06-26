#include <stdio.h>

/*
	10. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os
	demais elementos. Escreva ao final a matriz obtida.
*/

int main(int argc, char** argv) {
	int matriz[5][5];
	int i;
	int j;
	
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
			matriz[i][j] = 0;
		}
	}
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		matriz[i][i] = 1;
	}
	
	printf("Matriz: \n");
	
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
			if(j == 0){
				printf("[ %d ",matriz[j][i]);
			} else{
				printf("%d ",matriz[j][i]);
			}
			
		}
		printf("]\n");
	}
	return 0;
}