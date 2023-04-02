/*
28) Escreva um programa que leia um valor n inteiro e positivo e que calcule a seguinte soma: 
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
*/
#include<stdio.h>
int main(){
    int n,i;
    float soma=0;

    printf("insira o valor de n.:");
    scanf("%d",&n);

    for (i = 1; i < n; i++)
    {
        soma=soma+1/(float)i;
    }
    printf("O resultado da soma é.: %.2f",soma);
    
    return 0;
}