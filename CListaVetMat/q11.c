#include <stdio.h>

/*
	11. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos entre
	as primeiras
*/

int main(int argc, char** argv) {
	int resp;
	int matriz_a[4][4];
	int matriz_b[4][4];
	int i;
	int j;
	int contador_a;
	int contador_b;
	
	do {
		printf("Voce deseja que as matrizes sejam construidas de forma manual ou automatica? (1-manual / 2-automatica)\nResposta: ");
		scanf("%d",& resp);
		if(resp == 1){
			contador_a = 1;
			printf("\nInsira os valores para cada posicao do matriz_a:\n");
			for(i = 0; i<sizeof(matriz_a)/sizeof(matriz_a[0]); i++){
				for(j = 0; j<sizeof(matriz_a)/sizeof(matriz_a[0]); j++){
					printf("Digite o valor do %d valor da matriz a: ", contador_a);
					scanf("%d",&matriz_a[j][i]);
					contador_a++;
				}
			}
			printf("\n");
			contador_a = 1;
			for(i = 0; i<sizeof(matriz_a)/sizeof(matriz_a[0]); i++){
				for(j = 0; j<sizeof(matriz_a)/sizeof(matriz_a[0]); j++){
					printf("Digite o valor do %d valor da matriz b: ", contador_a);
					scanf("%d",&matriz_b[j][i]);
					contador_a++;
				}
			}
		} else if (resp == 2){
			contador_a = 1;
			contador_b = ((sizeof(matriz_a)/sizeof(matriz_a[0]))*(sizeof(matriz_a)/sizeof(matriz_a[0])));
			for(i = 0; i<sizeof(matriz_a)/sizeof(matriz_a[0]); i++){
				for(j = 0; j<sizeof(matriz_a)/sizeof(matriz_a[0]); j++){
					matriz_a[j][i] = contador_a;
					matriz_b[j][i] = contador_b;
					contador_a++;
					contador_b--;
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
	
	printf("Matriz a: \n");
	
	for(i = 0; i<sizeof(matriz_a)/sizeof(matriz_a[0]); i++){
		for(j = 0; j<sizeof(matriz_a)/sizeof(matriz_a[0]); j++){
			if(j == 0){
				printf("[\t%d\t",matriz_a[j][i]);
			} else{
				printf("%d\t",matriz_a[j][i]);
			}
			
		}
		printf("]\n");
	}
	
	printf("Matriz b: \n");
	
	for(i = 0; i<sizeof(matriz_a)/sizeof(matriz_a[0]); i++){
		for(j = 0; j<sizeof(matriz_a)/sizeof(matriz_a[0]); j++){
			if(j == 0){
				printf("[\t%d\t",matriz_b[j][i]);
			} else{
				printf("%d\t",matriz_b[j][i]);
			}
			
		}
		printf("]\n");
	}
	
	printf("Matriz final: \n");
	
	for(i = 0; i<sizeof(matriz_a)/sizeof(matriz_a[0]); i++){
		for(j = 0; j<sizeof(matriz_a)/sizeof(matriz_a[0]); j++){
			if(matriz_a[j][i]>matriz_b[j][i]){
				if(j == 0){
					printf("[\t%d\t",matriz_a[j][i]);
				} else{
					printf("%d\t",matriz_a[j][i]);
				}
			} else{
				if(j == 0){
					printf("[\t%d\t",matriz_b[j][i]);
				} else{
					printf("%d\t",matriz_b[j][i]);
				}
			}
			
		}
		printf("]\n");
	}
	
	return 0;
}