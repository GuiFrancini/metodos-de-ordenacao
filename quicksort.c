/*
	Name: QuickSort.c
	Author: Guilherme Francini de OLiveira
	Date: 29/05/24 09:48
	Description: Implemetação do algorimotmo de ordenação
				 Quick Sort
*/

#include <stdlib.h>
#include <stdio.h>

void quickSort(int*, int, int);
int particionar(int*, int, int);

int main()
{
	int vector[] = {17, 24, -5, 8, 15, 10,1,19,12,3};
	int i, tam;
	
	tam = sizeof(vector)/sizeof(int);
	
	puts("Vetor Desordenado");
	for(i = 0; i < tam; i++)
		printf("%d|", vector[i]);
	
	puts("\n");
		
	quickSort(vector, 0, tam-1);
	
	
	puts("Vetor ordenado pelo Quick Sort");
	for(i = 0; i < tam; i++)
		printf("%d|", vector[i]);
		
		
		
	return 0;
}//Fim do main

void quickSort(int* vet, int inicio, int fim)
{
	int pivot;
	
	if(fim > inicio){
		pivot = particionar(vet, inicio, fim);
		quickSort(vet, inicio, pivot-1);
		quickSort(vet, pivot+1, fim);
	}
}// Fim do Quick Sort

int particionar(int *vet, int inicio, int fim)
{
	int right, left, pivo, aux;
	
	left = inicio;
	right = fim;
	pivo = vet[inicio];
	
	while(left < right)
	{
		while(vet[left] <= pivo)
			left++;
		
		while(vet[right] > pivo)
			right--;
			
			
		if(left < right){
			aux = vet[left];
			vet[left] = vet[right];
			vet[right] = aux;
		}
	}// fim do while 
	
	vet[inicio] = vet[right];
	vet[right] = pivo;
	

	return right;
	
}//Fim do particionar