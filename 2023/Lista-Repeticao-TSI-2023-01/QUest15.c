/*
15) Escreva um programa que leia 50 valores e encontre o maior e o menor deles. Mostre o 
resultado. 
*/
#include<stdio.h>
int main(){
    int num,maior,menor,i,start=1;

    for (i = 0; i < 50; i++)
    {
        printf("\nInsira o %dº numero.:",i+1);
        scanf("%d",&num);
        if (start==1)
        {
            maior=num;
            menor=num;
            start=0;
        }
        if (maior<num)
        {
            maior=num;
        }
        if (menor>num)
        {
            menor=num;
        } 
    }
    printf("\nO maior numero é.:%d",maior);
    printf("\nO menor numero é %d",menor);
    
    return 0;
}