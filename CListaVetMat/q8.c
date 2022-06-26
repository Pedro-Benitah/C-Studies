#include <stdio.h>

/*
	8. Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.
*/

int main(int argc, char** argv) {
	int resp;
	int vetor[10];
	int vetor_aux[10];
	int i;
	int j;
	int k;
	int busca;
	int aux = 0;
	int aux_rep = 0;
	int aux_vet = 0;
	int aux_res = 1;
	char string[100];
	
	do {
		printf("Programa de leitura de vetor de 20 posicoes:\n");
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
	
	for (k = 0; k<sizeof(vetor_aux)/sizeof(vetor_aux[0]); k++){
		vetor_aux[k] = -111;
	}
	
	for (i = 0; i<(sizeof(vetor)/sizeof(vetor[0]))-1; i++){
		for (j = i+1; j<sizeof(vetor)/sizeof(vetor[0]); j++){
			if(vetor[i] == vetor[j]){
				aux_rep = 0;
				for (k = 0; k<sizeof(vetor_aux)/sizeof(vetor_aux[0]); k++){
					if(vetor[i] == vetor_aux[k]){
						aux_rep = 1;
					}
				}
				if(aux_rep == 0){
					aux = 1;
					if(aux_res == 1){
						printf("\nO valor %d se repete na posicao %d e na posicao %d", vetor[i], i, j);
						aux_res++;
					} else{
						printf("e na posicao %d ",j);
					}
					aux_vet = vetor[j];    
				}
				
			}
		}
		aux_res = 1;
		vetor_aux[i] = aux_vet;
	}
	if(aux == 0){
		printf("Nenhum valor do vetor se repete.");
	}
	
	return 0;
}