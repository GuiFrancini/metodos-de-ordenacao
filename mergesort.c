/*
Name: mergesort.c
Author: Guilherme Francini de Oliveira
Date: 22/05/2024 9:41am
Description: Algorirtmo que implementa do metodo de ordenação Merge Sort
*/

// sessão de prototipação
void mergeSort(int *, int, int); // função que divide
void merge(int *, int, int, int); // função que junta ou mescla(merge) o que ja foi dividido

// sessão de importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>

int vet[] = {17, 24, -5, 8, 15, 10, 1, 19, 12, 3};

int main() {
    int comeco, fim, i;
    comeco = 0;
    fim = sizeof(vet) / sizeof(int) - 1; // calculando onde é o fim

    puts("Vetor DESORDENADO!!");
    for (i = 0; i <= fim; i++)
        printf("%d|", vet[i]);

    mergeSort(vet, comeco, fim);

    puts("\nVetor Ordenado pelo Merge Sort!!");
    for (i = 0; i <= fim; i++)
        printf("%d|", vet[i]);

    return 0;
}

void mergeSort(int vet[], int inicio, int fim) {
    if (inicio < fim) { // continua a fazer as divisões até o fim de vetor
        int meio = (inicio + fim) / 2; // pega o índice do elemento de início e do fim, soma e divide ao meio
        mergeSort(vet, inicio, meio); // divide todos os elementos do lado esquerdo
        mergeSort(vet, meio + 1, fim); // divide todos os elementos do lado direito
        merge(vet, inicio, meio, fim); // junta todos os elementos únicos
    }
}

void merge(int vet[], int comeco, int meio, int fim) {
    int com1 = comeco;
    int com2 = meio + 1;
    int comAux = 0;
    int tam = fim - comeco + 1;
    int vetAux[tam];

    while (com1 <= meio && com2 <= fim) {
        if (vet[com1] < vet[com2]) {
            vetAux[comAux] = vet[com1];
            com1++;
        } else {
            vetAux[comAux] = vet[com2];
            com2++;
        }
        comAux++;
    }

    while (com1 <= meio) { // caso ainda haja elementos na primeira metade
        vetAux[comAux] = vet[com1];
        comAux++;
        com1++;
    }

    while (com2 <= fim) { // caso ainda haja elementos na segunda metade
        vetAux[comAux] = vet[com2];
        comAux++;
        com2++;
    }

    // move todos os elementos do vetor auxiliar para o vetor original
    for (comAux = comeco; comAux <= fim; comAux++) {
        vet[comAux] = vetAux[comAux - comeco];
    }
}
