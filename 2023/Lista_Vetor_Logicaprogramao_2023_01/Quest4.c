/*
4) Faça um programa que leia um vetor de 80 elementos inteiros. Encontre e mostre o
menor elemento e sua(s) posição(ões) no vetor
*/
#include <stdio.h>
#define QTDE 5

int main(){

    int vetE[QTDE];
    int i,check=0,menorNum,menorPos;

    for (i = 0; i < QTDE; i++)
    {
        printf("\nInsira um numero.:");
        scanf("%d",&vetE[i]);
        if (check==0)
        {
            menorNum=vetE[i];
            menorPos=i;
            check++;
        }
        if (menorNum>=vetE[i])
        {
            menorNum=vetE[i];
            menorPos=i;
        }
    }
    printf("\nO menor Elemento.:%d",menorNum);
    printf("\nMenor posição.:%d",menorPos);
    
    return 0;
}