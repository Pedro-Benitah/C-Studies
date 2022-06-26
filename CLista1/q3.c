#include <stdio.h>
#include <math.h>

/*
	3. Fazer um programa em "C" que solicite 2 números e informe:
	a) A soma dos números;
	b) O produto do primeiro número pelo quadrado do segundo;
	c) O quadrado do primeiro número;
	d) A raiz quadrada da soma dos quadrados;
	e) O seno da diferença do primeiro número pelo segundo;
	f) O módulo do primeiro número.
*/

int main() {
	float a;
	float b;
	float soma;
	float produto;
	float quadrado;
	float raiz;
	float seno;
	float modulo;
	
	printf("Insira o valor de 'a' e de 'b' enviados separadamente ou separados por um espaco: ");
	scanf("%f %f",& a,& b);
	
	soma = a+b;
	produto = a*pow(b, 2);
	quadrado = pow(a, 2);
	raiz = sqrt((pow(a, 2)+pow(b, 2)));
	seno = sin((a-b));
	if(a<0){
		modulo = a*-1;
	} else {
		modulo = a;
	}
	
	printf("\na) A soma dos numeros: %f", soma);
	printf("\nb) O produto do primeiro numero pelo quadrado do segundo: %f", produto);
	printf("\nc) O quadrado do primeiro numero: %f", quadrado);
	printf("\nd) A raiz quadrada da soma dos quadrados: %f", raiz);
	printf("\ne) O seno da diferenca do primeiro numero pelo segundo: %f", seno);
	printf("\nf) O modulo do primeiro numero: %f\n", modulo);
	//printf("%f", modulo);
	//printf("valor a: %f valor b: %f", a, b);
	
	return 0;
}