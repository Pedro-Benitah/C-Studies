#include <stdio.h>

/*
	16. Considere uma matriz de distância entre cidades 6 x 6:
	
				1.(Cáceres) 2.(BBugres) 3.(Cuiabá) 4.(VGrande) 5.(Tangará) 6.(PLacerda)
	1.(Cáceres) 				63 			210 		190 					190
	2.(BBugres)		63 						160 		150 		95
	3.(Cuiabá) 		210 		160 					10
	4.(VGrande) 	190 		150 		10
	5.(Tangará) 				95 												80
	6.(PLacerda) 	190 											80
	
	
	
	Considere também um vetor de viagem indo de Cuiabá até Cáceres pela seguinte
	rota:
	
	Indice 1 2 3 4 5 6
	Cidade 3 4 2 5 6 1
	
	Faça um programa que leia a matriz e o vetor e calcule a distancia percorrida
	durante a viagem.
*/

int main(int argc, char** argv) {
	int matriz[6][6];
	int vetor[6];
	int i;
	int j;
	int resp = 0;
	
	for(i = 0; i<sizeof(matriz)/sizeof(matriz[0]); i++){
		for(j = 0; j<sizeof(matriz)/sizeof(matriz[0]); j++){
			matriz[j][i] = 0;
		}
	}
	
	matriz[0][1] = 63;
	matriz[0][2] = 210;
	matriz[0][3] = 190;
	matriz[0][5] = 190;
	matriz[1][0] = 63;
	matriz[1][2] = 160;
	matriz[1][3] = 150;
	matriz[1][4] = 95;
	matriz[2][0] = 210;
	matriz[2][1] = 160;
	matriz[2][3] = 10;
	matriz[3][0] = 190;
	matriz[3][1] = 150;
	matriz[3][2] = 10;
	matriz[4][1] = 95;
	matriz[4][5] = 80;
	matriz[5][0] = 	190;
	matriz[5][4] = 80;
	
	vetor[0] = 3;
	vetor[1] = 4;
	vetor[2] = 2;
	vetor[3] = 5;
	vetor[4] = 6;
	vetor[5] = 1;
	
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
	
	printf("\nVetor: [");
	
	for (i = 0; i<sizeof(vetor)/sizeof(vetor[0]); i++){
		if(i!=(sizeof(vetor)/sizeof(vetor[0]))-1){
		printf("%d,", vetor[i]);
		}else{
			printf("%d]\n", vetor[i]);
		}
	}
	
	for (i = 0; i<(sizeof(vetor)/sizeof(vetor[0]))-1; i++){
		resp += matriz[vetor[i]-1][vetor[i+1]-1];
	}
	
	printf("\nA distancia total percorrida durante a viagem eh de %d.", resp);	//10+150+95+80+190
	return 0;
}