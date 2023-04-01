/*
7) Faça um programa que tenha como entrada um conjunto de numeros inteiros. Calcular e 
imprimir:
a) A media dos numeros lidos;
b) O maior número;
c) O menor número.
Obs. Flag de saida= numero zero (não deve ser considerado)
*/
#include<stdio.h>
int main(){
    int num=0,i=0,maiorNum,menorNum,start=1;
    float media=0;

    do
    {
        printf("Insira um numero.:");
        scanf("%d",&num);
        i++;
        media=media+num;
        
        if (start==1)
        {
            maiorNum=num;
            menorNum=num;
            start=0;
        }
        if (maiorNum<=num)
        {
            maiorNum=num;
        }
        else
            if (menorNum>=num)
            {
                menorNum=num;
            }
    } while (num!=0);
    printf("\nA meida dos numeros lidos são.:%.2f",media);
    printf("\nO maior numero é.:%d",maiorNum);
    printf("\nO menor numero é.:%d",menorNum);

    return 0;
}