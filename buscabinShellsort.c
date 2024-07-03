/*
	Name: buscaBinaria.c
	Author: Guilherme Francini de Oliveteira
	Date: 05/06/24 
	Description: Implementação do metodo de busca Binaria com o shellsort como metódo de ordenacao
				 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void buscaBinaria(int*, int, int);
void shellSort(int *, int);

int trocas=0;
int comp= 0;

int main()
{
	//int vector[] =	{17,24,-5,8,15,10,1,19,12,3};
	int vector[10];
	int tam = sizeof(vector)/sizeof(int);
	
	srand(time(NULL));
	for(int i=0; i<tam;i++)
		vector[i] = rand()%100;
	
	
	puts("vetor Original");
	for(int i =0; i<tam; i++)
		printf("%d|", vector[i]);
		
		
	shellSort(vector, tam);

	puts("\n");
	
	puts("vetor Ordenado pelo Shell Sort");
	for(int i =0; i
	<tam; i++)
		printf("%d|", vector[i]);
		
	puts("\n");
	puts("Realizando uma Busca Binaria ou Logartmica");
	buscaBinaria(vector, 0, tam - 1);

	
}//fim do main


void shellSort(int vector[], int tam)
{
	int i, j, chavete;
	int h = 1;
	
	while(h < tam){
		h=3*h+1;
	}
	
	while(h > 0)
	{
		for(i = h; i < tam; i++)
		{
			chavete = vector[i];
			j = i;
			while(j > h-1 && chavete <= vector[j - h])
			{
				vector[j] = vector[j - h];
				j = j-h;
			}
			vector[j] = chavete;
		}
		h = h/2;
	}
	
}//Fim da função Shell Sort

void buscaBinaria(int *vet, int inicio, int fim)
{
	int elemento = 0;
	int meio = 0;
	int achou = 0;  
	
	printf("Digite o elemento que deseja encontrar: ");
	scanf("%d", &elemento);
	
	while(inicio <= fim)
	{
		
		meio = (inicio + fim)/2;
		printf("\nMeio: %d", meio);
		if(elemento == vet[meio])
		{
			achou = 1;
			break;
		}
		else if(elemento < vet[meio])
			fim = meio - 1;
		else
			inicio = meio + 1;
				
	}//Fim do While
	
	if(achou == 1)
		printf("\nO elemento esta na posicao %d do vetor", meio+1);
	else
		printf("\nElemento nao encontrado");
	
	
}//Fim da função busca Binaria