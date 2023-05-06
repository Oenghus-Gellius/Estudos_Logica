/*
11) Faça um programa que a partir de dois vetores v1 e v2 de 10 posições de valores
inteiros, estando-os ordenados, gere um terceiro vetor v3 de inteiros que será formado pelos
elementos de v1 e v2 . O vetor v3 deve ficar ordenado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define QTD 5

int main(){
    int vet1[QTD],vet2[QTD],vet3[QTD*2];
    int i,k,j,posVet3,VarSelShot,base;

    posVet3=0;
    for (i = 0; i < QTD; i++)
    {
        vet1[i]=rand()%100+1;
        vet2[i]=rand()%100+1;
    }
    printf("\nVet 1.:\t");
    for (i = 0; i < QTD; i++)
    {
        printf("\t%d",vet1[i]);
    }
    printf("\nVet 2.:\t");
    for (i = 0; i < QTD; i++)
    {
        printf("\t%d",vet2[i]);
    }
    //prenchendo o vetor 3.
    for (i = 0; i < QTD; i++)
    {
        vet3[i]=vet1[i];
        posVet3++;
    }
    for ( i = 0; i < QTD; i++)
    {
        vet3[posVet3]=vet2[k];
        posVet3++;        
    }
    printf("\nVet 3 Des.:");
    for (i = 0; i < posVet3; i++)
    {
        printf("\t%d",vet3[i]);
    }
    //ordenando select short
    for (i = 0; i < posVet3-1; i++)
    {
        base=i;
        for (j = (i+1); j < posVet3; j++)
        {
            if (vet3[j] < vet3[base])
            {
                base=j;
            }
        }
        if (i != base)
        {
            VarSelShot=vet3[i];
            vet3[i]=vet3[base];
            vet3[base]=VarSelShot;
        }
    }
    //saida

    printf("\nVet 3 ORd.:");
    for (i = 0; i < posVet3; i++)
    {
        printf("\t%d",vet3[i]);
    }
    return 0;
}