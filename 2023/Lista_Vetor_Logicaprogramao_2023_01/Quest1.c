/*
1) Faça um programa que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Imprimir o vetor
resultante. 
*/
#include <stdio.h>
#define QTDN 10

int main(){

    int vet1[QTDN],vet2[QTDN],vetResultado[QTDN],i;

    for (i = 0; i < QTDN; i++)
    {
        vet1[i]=i;
        vet2[i]=i;
        vetResultado[i]=vet1[i]*vet2[i];
    }
    for (i = 0; i < QTDN; i++)
    {
        printf("%d\t",vetResultado[i]);
    }
    
    return 0;
}