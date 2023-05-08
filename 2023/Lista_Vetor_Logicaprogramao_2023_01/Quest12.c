/*
12) Faça um programa que determine a posição da última ocorrência do valor máximo e a
posição da primeira ocorrência do valor mínimo em um vetor de inteiros de 100 elementos
*/

#include <stdio.h>
#include <time.h>
#define TAM 10

int main(){
    int vetNum[TAM];
    int i,j,maiorPos,menorPos,maior,menor;

        for (i = 0; i < TAM; i++)
        {
            vetNum[i]=rand()%100+1;
        }
        printf("\nVetor Numeros.:");

        for (i = 0; i < TAM; i++)
        {
             printf("\t%d",vetNum[i]);
        }

        maior=vetNum[0];
        menor=vetNum[0];
        menorPos=0;
        maiorPos=0;

        for (i = 0; i < TAM; i++)
        {
            if (vetNum[i] > maior)
            {
                maior=vetNum[i];
                maiorPos=i;
            }
            if (vetNum[i] < menor)
            {
                menor=vetNum[i];
                menorPos=i;
            }
        }
        printf("\nMenor valor.: %d na posição.: %d",menor,menorPos);
        printf("\nMaior valor.:%d na posiçaõ.:%d",maior,maiorPos);
        
    return 0;
}