/*
46) Faça um programa que calcule e imprima o valor da série S= 1/N + 2/(N-1) + 3/(N2) + 4/(N-3) 
+ ... + (N-1)/2 + N/1.
*/
#include<stdio.h>
int main(){
    int n,i,sinal=1;
    float soma,denominador;

    printf("Insira o valor de 'N' da serie.:");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        soma=soma+(float)1+i/n*sinal*i;
        sinal=sinal*-1;
    }
    printf("\nA soma da serie.: %f",soma);
    
    return 0;
}