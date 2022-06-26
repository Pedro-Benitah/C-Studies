#include <stdio.h>

/*
	7. Leia 3 vetores de 9 posições e crie outro com o 1o terço do primeiro, o segundo
	3o. do segundo e o ultimo terço do 3o. Escrever o vetor resultante ao final.
*/

int main(int argc, char** argv) {
	int resp;
	int vetor1[9];
	int vetor2[9];
	int vetor3[9];
	int vetorf[9];
	int i;
	int aux = 1;
	
	do {
		printf("Programa de reorganizacao de vetores.\n");
		printf("Voce deseja que o vetor seja construido de forma manual ou automatica? (1-manual / 2-automatica)\nResposta: ");
		scanf("%d",& resp);
		if(resp == 1){
			printf("\nInsira os valores para cada posicao do 1 vetor:\n");
			for(i = 0; i<sizeof(vetor1)/sizeof(vetor1[0]); i++){
				printf("Digite o valor do %d valor: ", i+1);
				scanf("%d",&vetor1[i]);
			}
			printf("\nInsira os valores para cada posicao do 2 vetor:\n");
			for(i = 0; i<sizeof(vetor2)/sizeof(vetor2[0]); i++){
				printf("Digite o valor do %d valor: ", i+1);
				scanf("%d",&vetor2[i]);
			}
			printf("\nInsira os valores para cada posicao do 3 vetor:\n");
			for(i = 0; i<sizeof(vetor3)/sizeof(vetor3[0]); i++){
				printf("Digite o valor do %d valor: ", i+1);
				scanf("%d",&vetor3[i]);
			}
		} else if (resp == 2){
			for(i = 0; i<sizeof(vetor1)/sizeof(vetor1[0]); i++){
				vetor1[i] = i+11;
			}
			for(i = 0; i<sizeof(vetor2)/sizeof(vetor2[0]); i++){
				vetor2[i] = i+21;
			}
			for(i = 0; i<sizeof(vetor3)/sizeof(vetor3[0]); i++){
				vetor3[i] = i+31;
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
	printf("\nO vetor 1: [");
	
	for (i = 0; i<sizeof(vetor1)/sizeof(vetor1[0]); i++){
		if(i!=(sizeof(vetor1)/sizeof(vetor1[0]))-1){
		printf("%d,", vetor1[i]);
		}else{
			printf("%d]\n", vetor1[i]);
		}
	}
	printf("O vetor 2: [");
	
	for (i = 0; i<sizeof(vetor2)/sizeof(vetor2[0]); i++){
		if(i!=(sizeof(vetor2)/sizeof(vetor2[0]))-1){
		printf("%d,", vetor2[i]);
		}else{
			printf("%d]\n", vetor2[i]);
		}
	}
	printf("O vetor 3: [");
	
	for (i = 0; i<sizeof(vetor3)/sizeof(vetor3[0]); i++){
		if(i!=(sizeof(vetor3)/sizeof(vetor3[0]))-1){
		printf("%d,", vetor3[i]);
		}else{
			printf("%d]\n", vetor3[i]);
		}
	}
	
	for (i = 0; i<sizeof(vetorf)/sizeof(vetorf[0]); i++){
		if(i%3 == 0 && i != 0){
			aux++;
		}
		switch(aux){
			case 1:{
				vetorf[i] = vetor1[i];
				break;
			}
			case 2:{
				vetorf[i] = vetor2[i];
				break;
			}
			case 3:{
				vetorf[i] = vetor3[i];
				break;
			}	
		}
	}
				
	printf("O vetor final: [");
	for (i = 0; i<sizeof(vetorf)/sizeof(vetorf[0]); i++){
		if(i!=(sizeof(vetorf)/sizeof(vetorf[0]))-1){
		printf("%d,", vetorf[i]);
		}else{
			printf("%d]\n", vetorf[i]);
		}
	}
	
	return 0;
}