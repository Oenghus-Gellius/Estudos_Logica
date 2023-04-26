/*
7) Faça um programa que tenha como entrada 2 vetores X(10) e Y(10). Criar, a seguir, um
vetor Z que seja
a) a união de X com Y;
b) a diferença entre X e Y;
c) a soma entre X e Y;
d) o produto entre X e Y;
e) a intersecção entre X e Y.
Escreva o vetor Z a cada cálculo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMVET 10

int main(){
    int vetX[TAMVET],vetY[TAMVET],vetZ[TAMVET];
    int i,j,k=0;

    for (i = 0; i < TAMVET; i++)
    {
        vetX[i]=rand()%20+1;
        vetY[i]=rand()%20+1;
    }

    printf("\nVetor X\t");
    for (i = 0; i < TAMVET; i++)
    {
        printf("%d\t",vetX[i]);
    }
    printf("\nVetor Y\t");
    for (i = 0; i < TAMVET; i++)
    {
        printf("%d\t",vetY[i]);
    }

    for (i = 0; i < TAMVET; i++)//Quest A
    {
        for (j = 0; j < TAMVET; j++)
        {
            if (vetX[i]==vetY[j])
            {
                vetZ[k]=vetX[i];  
                k++;   
            }
        }
    }
    printf("\nA união de X e Y.:\t");//Quest A
    for (i = 0; i < k; i++)
    {
        printf("%d\t",vetZ[i]);
    }
    
    printf("\nA diferença entre X e Y.:\t");//Quest B
    for (i = 0; i < TAMVET; i++)
    {
        vetZ[i]=vetX[i]-vetY[i];
        printf("%d\t",vetZ[i]);
    }
    printf("\nA soma entre X e Y.:\t");//Quest C
    for (i = 0; i < TAMVET; i++)
    {
        vetZ[i]=vetX[i]+vetY[i];
        printf("%d\t",vetZ[i]);
    }
    printf("\nO produto entre X e Y.:\t");//Quest D
    for (i = 0; i < TAMVET; i++)
    {
        vetZ[i]=vetX[i]*vetY[i];
        printf("%d\t",vetZ[i]);
    }
    for (i = 0; i < TAMVET; i++)
    {
        if (vetX)
        {
            /* code */
        }
    }
    
    return 0;
}