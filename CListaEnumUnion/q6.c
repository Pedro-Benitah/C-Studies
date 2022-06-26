/*
	6. Utilizando unions, crie um programa capaz de receber um determinado valor e
	calcular o módulo de 256 desse valor (dica: utilize char[sizeof(int)]).
*/

union inteiro
{
	int i;
};
union modulo
{
	int m;
};

int main(int argc, char** argv)
{
	union inteiro val;
	union modulo val2;
	printf("Insira um valor inteiro: ");
	scanf("%d", &val.i);
	val2.m = val.i%256;
	printf("O modulo de %d eh ", val.i); 
	printf("%d", val2.m);
	return 0;
}