
/*
Name: selection_sort.cpp
Author: Guilherme Francini de Oliveira
Date: 08/05/2024 10:12
Description: Implementação do Selection Sort (Método Seleção)
*/

#include <stdio.h>
#include <stdlib.h>

int vector[] = {17, 24, -5, 8, 15, 10, 1, 19, 12, 3};
//int vector[7826];


int main() {
    int tam, i, j, aux, menor;
    int comp = 0, trocas = 0; 
	// Inicializando as variáveis
    tam = sizeof(vector) / sizeof(int);
	//srand(time(NULL));
	
	//implementação da geração de um numero aleatorio
	//for(i=0;i<7826;i++)
	//vector[i]=rand()%1000000;

    // Imprimindo o vetor desordenado
    puts("Vetor Desordenado:\n");
    for (i = 0; i < tam; i++) {
        printf("%d|", vector[i]);
    }

    // Implementação do Selection Sort
    for (i = 0; i < tam - 1; i++) {
        menor = i;
        for (j = i + 1; j < tam; j++) {
            comp++;
            if (vector[j] < vector[menor]) {
            menor = j;
            }
        }

        if (i != menor) {
            trocas++;
            aux = vector[i];
            vector[i] = vector[menor];
            vector[menor] = aux;
        }
    }

    // Imprimindo o vetor ordenado
    puts("\nVetor Ordenado com Selection Sort:");
    for (i = 0; i < tam; i++) {
        printf("%d|", vector[i]);
    }

    // Imprimindo o número de trocas e comparações
    printf("\n\nNúmero de trocas: %d", trocas);
    printf("\nNúmero de comparações: %d", comp);

    return 0;
}
