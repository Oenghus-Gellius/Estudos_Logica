/*
54) O valor aproximado do número π pode ser calculado usando-se a série 
S = 1 -1/3^3 + 1/5^3 - 1/7^3 + 1/9^3 - 1/11^3 + ...
sendo π = 3√S*32
Faça um programa que calcule o valor de π usando os N primeiros termos da séria acima. 
*/
#include <stdio.h>
#include <math.h>

int main(){
    int n,i,soma,sinal=1,deniminador,pi;

    printf("\nInsira o valor de numeiros da serie.:");
    scanf("%d",&n);

    soma=1;
    sinal=1;
    deniminador=1;
    
    for (i = 1; i <= n; i++)
    {
        soma=((float)soma*sinal)/(deniminador+2);//
        sinal=sinal*-1;
        deniminador=deniminador+2;
    }
    pi=3*(sqrt(soma)*32);

    printf("\n%f\tÉ o valor de Pi usando os %d termos da séria acima",pi,n);
    
    return 0;
}