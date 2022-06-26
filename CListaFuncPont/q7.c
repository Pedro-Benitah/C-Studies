/*
	7. Crie um programa que contenha um array de float contendo 10
	elementos. Imprima o endereço de cada posição desse array.
*/

#include <stdio.h>
#define MAX_LENGHT 10

int main(int argc, char** argv)
{
	float array[MAX_LENGHT] = {0.1,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	
	for(int i=0; i<MAX_LENGHT; i++){
		printf("Endereco da posicao %d da array: %d\n", i, &array[i]);
	}
		
	return 0;
}