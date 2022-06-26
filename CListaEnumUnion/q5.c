/*
	5. Variáveis de 32 bits do tipo int podem representar valores entre -2,147,483,647
	e +2,147,483,647, enquanto variáveis de 32 bits do tipo unsigned int podem
	representar valores entre 0 e +4,294,967,295. Crie um programa que receba um
	valor negativo do tipo int e mostre qual o valor resultante da conversão para o
	tipo unsigned int.
*/

#include <stdio.h>


int main(int argc, char** argv)
{
	int val;
	printf("Insira um valor inteiro: ");
	scanf("%d", &val);
	printf("O valor int de %d em unsigned int eh %u", val, val);
	
	return 0;
}