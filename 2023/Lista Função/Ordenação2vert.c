/*Crie dois vetores, junteos e ordne */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void funcVet(int vet1[], int vet2[], int vet3[]){
    int i,ultPos;

    for (i = 0; i < TAM; i++)
    {
        vet3[i]=vet1[i];
        ultPos++;
    }
    for (i = 0; i < TAM; i++)
    {
        vet3[ultPos]=vet2[i];
        ultPos++;
    }
}

void funcOrdenacao(int vet3[]){
    int i,k,aux,base;

    for (i = 0; i < TAM+TAM-1; i++)
    {
        base=i;
        for (k = (i+1); k < TAM+TAM; k++)
        {
            if (vet3[k] < vet3[base])
            {
                base=k;
            }
        }
        if (i !=base)
        {
            aux=vet3[i];
            vet3[i]=vet3[base];
            vet3[base]=aux;
        }
    }
}


int main (){

    int vet1[TAM]={1,55,22,33,44},vet2[TAM]={99,88,77,43,21},vet3[TAM+TAM];
    int i;

    funcVet(vet1,vet2,vet3);
    
    printf("Numeros vetor 3:\n");
    for (i = 0; i < TAM+TAM; i++)
    {
        printf("%d\t",vet3[i]);
    }

    funcOrdenacao(vet3);

    printf("\nOrdenados.:\n");
    for (i = 0; i < TAM+TAM; i++)
    {
        printf("%d\t",vet3[i]);
    }

    return 0;
}