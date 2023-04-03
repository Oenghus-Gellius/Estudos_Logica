/*
51) Escreva um programa que calcule o quociente da divisão de A por B (número inteiros
e positivos), ou seja, A div B, através de subtrações sucessivas. 
*/
#include <stdio.h>
int main(){
    int A,B,quoq=0,resto;

    printf("Insira o valor de 'A'.:");
    scanf("%d",&A);
    printf("Insira o valor de 'B'.:");
    scanf("%d",&B);

    while (A>=B)
    {
        A=A-B;
        quoq++;
        resto=A;
    }
    printf("\nO quociente da divisão de A por B = %d",quoq);
    printf("\nO resto da subtração = %d",resto);

    return 0;
}