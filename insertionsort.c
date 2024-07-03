/*
NAME: insertionsort.c
AUTHOR: Guilherme francini de Oliveira
DATE: 15/05/2024 9:48am
DESCRIPTION:Implementação do metodo de ordenação insertion sort
*/

# include <stdio.h>

//prototipação
void insertionSort(int*,int);

int main()
{
	int vet[] ={17, 24, -5, 8,15, 10, 1, 19, 12,3};
	int i;
	int tam= sizeof(vet)/sizeof(int);
	
	puts("vetor ORIGINAL:");
	for(i=0;i<tam;i++)
	printf("%d|",vet[i]);
	
	insertionSort(vet, tam);
	
    puts("\nvetor ORDENADO pelo insertion Sort:");
	for(i=0;i<tam;i++)
	printf("%d|",vet[i]);
	
	
}//fim do main

void insertionSort(int vet[], int tam)
{
	int trocas =0;
	int comparacao=0;
	int i, j, chave;
	for(i=1;i<tam;i++)
	{
		chave= vet[i];
		j=i-1;
		comparacao++;
		while (j>=0 && vet[j] > chave)
		{
			comparacao++;
			trocas++;
			vet[j+1]= vet[j];
			j= j-1;
		}
		
			vet[j+1] = chave;

	}
		printf("\ncomparacao:%d",comparacao);
		printf("\ntrocas:%d",trocas);
}