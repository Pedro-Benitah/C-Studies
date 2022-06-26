#include <stdio.h>
#include <ctype.h>

/*
	4.Fazer um programa em "C" que lê um string qualquer de no máximo 80
	caracteres e imprime:
	- Quantos caracteres tem o string;
	- Quantos caracteres são números;
	- Quantos caracteres são minúsculas.
*/

int main() {
	char texto[79];
	int tamanho = 0;
	int num_numeros = 0;
	int num_minusculo = 0;
	
	printf("Insira um texto de no maximo 80 caracteres: ");
	gets(texto);
	
	for(int i=0; texto[i]!='\0';i=i+1){	
		if(isalnum(texto[i])){
			tamanho = tamanho + 1;
		}
		if(isdigit(texto[i])){
			num_numeros = num_numeros+1;
		}
		if(islower(texto[i])){
			num_minusculo = num_minusculo+1;
		}
	}
	
	printf("\nQuantidade de caracteres: %d\n", tamanho);
	printf("Quantidade de numeros: %d\n", num_numeros);
	printf("Quantidade de caracteres minusculos: %d\n", num_minusculo);
	
	//printf("%d %d %d\n", tamanho, num_numeros, num_minusculo);
	//printf("%s", texto);

	return(0);
}