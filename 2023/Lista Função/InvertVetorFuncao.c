#include <stdio.h>
#define TAM 5

void invertVetFun(int vet[]){
    int i,aux;
    for (i = 0; i < TAM/2; i++)
    {
        aux=vet[i];
        vet[i]=vet[TAM-i-1];
        vet[TAM-i-1]=aux;
    }
}

int main (){
    int vetor[TAM]={1,2,3,4,5};
    int k;

    invertVetFun(vetor);
    for (k = 0; k < TAM; k++)
    {

        printf("%d,",vetor[k]);
    }

    return 0;
}