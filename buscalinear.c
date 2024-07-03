/*
NAME: insertionsort.c
AUTHOR: Guilherme francini de Oliveira
DATE: 15/05/2024 9:48am
DESCRIPTION:Implementação do metodo de ordenação insertion sort
*/

# include <stdio.h>

int buscaLinear(int vet[], int tam, int target);

int main() {
    int vet[] = {17, 24, -5, 8, 15, 10, 1, 19, 12, 3};
    int tam = sizeof vet / sizeof vet[0];
    int pivot;
    
    printf("Digite o número que você quer buscar: ");
    scanf("%d", &pivot);
    
    int resultado = buscaLinear(vet, tam, pivot);
    
    if (resultado != -1) {
        printf("Número encontrado na posição: %d\n", resultado);
    } else {
        printf("Número não encontrado no vet.\n");
    }
    
    return 0;
}

int buscaLinear(int vet[], int tam, int pivot) {
    for (int i = 0; i < tam; i++) {
        if  (vet[i] == pivot) {
            return i; // Retorna a posição do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}
