/*
	4. Nesse exercício vamos trabalhar com compromissos de uma pessoa.
	Um compromisso possui um texto (string de até 200 caracteres), uma
	data e um horário. Uma data deve possuir dia, mês e ano, todos
	números inteiros. Um horário deve possuir hora, minuto e segundo,
	todos também números inteiros.
		a. Crie em seu programa todas as estruturas necessárias para
		armazenar as informações de compromissos.
		b. Crie agora um vetor de compromissos de 20 posições. Use a
		diretiva define para definir o tamanho desse vetor.
		c. Inicialize o vetor de compromissos com números aleatórios da
		seguinte forma: o dia da data deve ser um número entre 1 e 20, o
		mês deve ser um número entre
		1 e 12, o ano deve ser um número entre 2016 e 2019. A hora do
		horário deve ser um número entre 0 e 23, o minuto um número
		entre 0 e 59, o segundo também um número entre 0 e 59. Por fim,
		o texto de todos os compromissos deve ser “Compromisso de
		teste gerado aleatoriamente.”.
		d. Imprima o vetor de compromissos inicializado anteriormente no
		seguinte formato:
		========Lista de Compromissos========
		Compromisso x:
		Data: xx/xx/xxxx
		Horario: xx:xx:xx
		Texto: Compromisso de teste gerado
		aleatoriamente.
		Compromisso x:
		Data: xx/xx/xxxx
		Horario: xx:xx:xx
		Texto: Compromisso de teste gerado
		aleatoriamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGHT 20

typedef struct
{
	int hora;
	int minutos;
	int segundos;
} horario;

typedef struct
{
	int dia;
	int mes;
	int ano;
} data;

typedef struct
{
	horario hora_compromisso;
	data data_compromisso;
	char txt_compromisso[200];
} compromisso;

int main(int argc, char** argv)
{
	compromisso compromissos[MAX_LENGHT];
	int i;
	
	printf("========Lista de Compromissos========\n");
	
	for(i=0; i<MAX_LENGHT; i++)
	{
		compromissos[i].data_compromisso.dia = 1+rand()%20;
		compromissos[i].data_compromisso.mes = 1+rand()%12;
		compromissos[i].data_compromisso.ano = 2016+rand()%4;
		compromissos[i].hora_compromisso.hora = rand()%24;
		compromissos[i].hora_compromisso.minutos = rand()%60;
		compromissos[i].hora_compromisso.segundos = rand()%60;
		//compromissos[i].txt_compromisso = "Compromisso de teste gerado aleatoriamente.";
		strcpy(compromissos[i].txt_compromisso, "Compromisso de teste gerado aleatoriamente.");
		
		printf("Compromisso %d:\n", i+1);
		printf("Data: %02d/%02d/%d\n", compromissos[i].data_compromisso.dia, compromissos[i].data_compromisso.mes, compromissos[i].data_compromisso.ano);
		printf("Horario: %02d:%02d:%02d\n", compromissos[i].hora_compromisso.hora, compromissos[i].hora_compromisso.minutos, compromissos[i].hora_compromisso.segundos);
		printf("Texto: %s\n\n", compromissos[i].txt_compromisso);
	}
	
	return 0;
}