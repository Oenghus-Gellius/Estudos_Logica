/*
7) Faça um programa em linguagem c que tenha como entrada 2 vetores X(10) e Y(10). Criar, a seguir, um
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

#define TAMVET 5

int main(){
    int vetX[TAMVET]={1,2,3,4,5},vetY[TAMVET]={4,5,6,7,8},vetZ[TAMVET*2];
    int i,k,j,posZ,achei,intersected;

    printf("\nVetor X\t\t");
    for (i = 0; i < TAMVET; i++)
    {
        printf("%d\t",vetX[i]);
    }
    printf("\nVetor Y\t\t");
    for (i = 0; i < TAMVET; i++)
    {
        printf("%d\t",vetY[i]);
    }
    //União
    posZ=0;
    for (i = 0; i < TAMVET; i++)
    {
        vetZ[i]=vetX[i];
        posZ++;
    }
    for (k = 0; k < TAMVET; k++)
    {
        i=0;
        achei=0;
        while (i < posZ && achei==0)
        {
            if (vetX[i]==vetY[k])
            {
                achei=1;
            }
            else
            {
                i++;
            }
        }
        if (achei==0)
        {
            vetZ[posZ]=vetY[k];
            posZ++;
        }
    }
    //saida união
    printf("\nUnião.:");
    for (i = 0; i < posZ; i++)
    {
        printf("\t%d",vetZ[i]);
    }
    
    //Diferença
    k=0;
    for (i = 0; i < TAMVET; i++)
    {
        j=0;
        intersected=0;
        while (j < TAMVET && intersected==0)
        {
            if (vetX[i]==vetY[j])
            {
                intersected=1;
            }
            j++;
        }
        if (intersected==0)
        {
            vetZ[k]=vetX[i];
            k++;
        }        
    }
        

    //Saida diferença
    printf("\nDiferença.:");
    for (i = 0; i < k; i++)
    {
        printf("\t%d",vetZ[i]);
    }

    //intercessão
    k=0;
    for (i = 0; i < TAMVET; i++)
    {
        j=0;
        intersected=0;
        while (j < TAMVET && intersected==0)
        {
            if (vetX[i]==vetY[j])
            {
                intersected=1;
            }
            j++;
        }
        if (intersected==1)
        {
            vetZ[k]=vetX[i];
            k++;
        }
    }
    //Saida intercessão
    printf("\nintercessão.:");
    for (i = 0; i < k; i++)
    {
        printf("\t%d",vetZ[i]);
    }

    printf("\nPosZ=%d",posZ);
    printf("\ni=%d",i);
    printf("\nk=%d",k);
    
    return 0;
}