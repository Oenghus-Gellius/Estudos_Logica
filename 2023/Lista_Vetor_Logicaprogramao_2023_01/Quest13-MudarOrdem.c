/*
13) Faça um programa que inverta a ordem dos elementos de um vetor, ou seja, o primeiro
passa a ser o último e o último passa a ser o primeiro e assim por diante. Não é permitido
usar um vetor auxiliar
*/
#include <stdio.h>
#define TAM 10

int main(){
    int vetNum[TAM],i,k,aux;

    printf("\nOrdem crescente.:\t\t");
    for (i = 0; i < TAM; i++)
    {
        vetNum[i]=i+1;
        printf("%d\t",vetNum[i]);
    }
    for (i = 0; i < TAM/2; i++)
    {
        aux=vetNum[i];
        vetNum[i]=vetNum[TAM-1-i];
        vetNum[TAM-1-i]=aux;

    }

    printf("\nOrdem Decrescente.:\t\t");
    for (i = 0; i < TAM; i++)
    {
        printf("%d\t",vetNum[i]);
    }
    
    
    return 0;
}