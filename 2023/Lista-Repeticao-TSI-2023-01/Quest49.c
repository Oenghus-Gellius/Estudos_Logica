/*
49) Faça um programa que realize o produto de A (número real) por B (número inteiro), ou seja, A*B, através de adições (somas).
*/
#include <stdio.h>
int main(){
    int A,B,i,resultado=0;

    printf("Insira o valor de 'A'.:");
    scanf("%d",&A);
    printf("Insira o valor de 'B'.:");
    scanf("%d",&B);
    
    for (size_t i = 0; i < B; i++)
    {
        resultado=resultado+A;
    }
    printf("O resutado da multiplicação de %d por %d = %d",A,B,resultado);
    return 0;
}