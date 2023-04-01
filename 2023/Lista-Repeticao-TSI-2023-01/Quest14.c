/*
14) Escreva um programa que calcule a média dos números digitados pelo usuário, se eles forem 
pares. Termine a leitura se o usuário digitar zero (0).
*/
#include<stdio.h>
int main(){
    int num,i=0;
    float media=0;
    do
    {
        printf("\nDigite um numero.:");
        scanf("%d",&num);

        if (num%2==0)
        {
            media=media+num;
            i++;
        }
    }while(num!=0);

    media=(float)media/i;
    printf("\nA media da soma dos numeros pares são.:%.1f",media);
    return 0;
}