/*
	2. Escreva um programa que contenha duas variáveis inteiras.  
	Compare seus endereços e exiba o maior endereço.
*/

#include <stdio.h>

int main()
{
	int x = 1; 
	int y = 2;
	
	if(&x > &y)
	{
		printf("%d", &x);
	} else
	{
		printf("%d", &y);
	} 
	
	
	return 0;
}