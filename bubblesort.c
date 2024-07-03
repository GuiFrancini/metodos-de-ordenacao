/*NAME: bubblesort.c
AUTHOR: Guilherme francini de Oliveira
DATE: 24/04/2024 10:00
DESCRIPTION:implementação do algoritmo do methodo de ordenação chamado bubble sort ou metodo da bolha
*/
 
#include<stdio.h>
 
int vet[]={17, 24, -5, 8, 15, 10, 1, 19, 12, 3}; 

int main()
{
	//int tam =10;
	int tam= sizeof(vet)/sizeof(int);//tecnica para encontrar o tamanho do vetor 
	//tamanho do int e 4 bytes então nos dividimos o tamanho de vetor por 4/sizeof() encontra o tamanho
	int i =0;
	int j= 0;
	int aux =0;
	int trocas=0;
	int comparacoes=0;
	puts("Vetor Desordenado");
	//printf("tamanho do vector:\n%d",tam);
	for(i=0;i<tam;i++)
	{
		printf("%d|",vet[i]);
	}
    
	j=0;
	//ordenação com os dados com o bubble sort
	while(j < tam)
    {
	
		for(i=0;i<tam-1;i++)
		{
			comparacoes++;
			if(vet[i]>vet[i+1])//decrescente  e crescente
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				trocas++;
			}
		}//fim do for
		//comparacoes=10;
		tam--;//ou j++;
	}//fim do while
 
	//puts("\nVetor Ordenado");
	for(i=0;i<tam;i++)
	{
		printf("%d|",vet[i]);
	}
	 tam= sizeof(vet)/sizeof(int);
	 puts("\nValor Ordenado com Bubble sort\n");
	 for(i=0;i<tam;i++)
	 {
	 	printf("|%d",vet[i]);
	 }
	printf("\nNumero de trocas:%d", trocas);
	printf("\nNumero de comparacoes:%d", comparacoes);

}//fim do programa