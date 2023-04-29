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

#define TAMVET 5

int main(){
    int vetX[TAMVET]={1,2,3,4,5},vetY[TAMVET]={4,5,6,7,8},vetZ[TAMVET*2];
    int i,j,k=0,posZ=0,achou;

    /*for (i = 0; i < TAMVET; i++)
    {
        vetX[i]=rand()%20+1;
        vetY[i]=rand()%20+1;
    }
    */
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
    //QuestA
    printf("\nUnião.:\t\t");
    for (i = 0; i < TAMVET; i++)
    {
        vetZ[i]=vetX[i];
    }

    posZ=TAMVET-1;//Ãºltima posiÃ§Ã£o preenchida do vetorZ
    for(k=0;k<TAMVET;k++){
        //verificando se o elemento da posiÃ§Ã£o k de vetorY
        //estÃ¡ presente em vetorX
        i=0;//usada para percorrer o vetor vetorX
        achou=0;//usada para indicar o status da busca
        while(i<TAMVET && achou==0){
            if(vetX[i]==vetY[k])
               achou=1;
            else
               i++;
        }
        if(achou==0){
            posZ++;
            vetZ[posZ]=vetY[k];
        }
    }
    printf("\nVetorZ\t\t");
    for (i = 0; i <= posZ; i++)
    {
        printf("%d\t",vetZ[i]);
    }
    printf("\nposZ %d",posZ);

        for(i=0;i<TAMVET;i++)
       vetZ[i]=vetX[i];
    
    printf("\nIntercessao");
    posZ=TAMVET-1;//Ãºltima posiÃ§Ã£o preenchida do vetorZ
    for(k=0;k<TAMVET;k++){
        //verificando se o elemento da posiÃ§Ã£o k de vetorY
        //estÃ¡ presente em vetorX
        i=0;//usada para percorrer o vetor vetorX
        achou=0;//usada para indicar o status da busca
        while(i<TAMVET && achou==0){
            if(vetX[i]==vetY[k])
               achou=1;
            else
               i++;
        }
        if(achou==1){
            posZ++;
            vetZ[posZ]=vetY[k];
        }
    }
        printf("\nVetorZ\t\t");
    for (i = 0; i <= posZ; i++)
    {
        printf("%d\t",vetZ[i]);
    }
    printf("\nposZ %d",posZ);
    
    return 0;
}