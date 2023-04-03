/*
50) Faça um programa que calcule o resto da divisão de A por B (número inteiros e positivos), ou 
seja, A mod B, através de subtrações sucessivas.
*/
#include<stdio.h>
int main(){
    int A,B,i,resto;

    printf("Insira o valor de 'A'.:");
    scanf("%d",&A);
    printf("Insira o valor de 'B'.:");
    scanf("%d",&B);

    while (A>=B)
    {
        A=A-B;
    }
    resto=A;
    printf("O resto da subtração = %d",resto);
        
    return 0;
}