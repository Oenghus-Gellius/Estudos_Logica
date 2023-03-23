/*
5. Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes 
valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o triângulo 
é equilátero, isósceles ou escaleno.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int x,y,z;
    printf("\nInsira o valor de X");
    scanf("%d",&x);
    printf("\nInsira o valor de Y");
    scanf("%d",&y);
    printf("\nInsira o valor de Z");
    scanf("%d",&z);

    if (x+y>z || y+z>x || x+z>y)
    {
        printf("É um triangulo");
        if (x==y && y==z)
        {
            printf("\nO triangulo é equilátero");
        }
        if (x==y || y==z || z==x)
        {
            printf("\nO triangulo é isósceles");
        }
        else
        {
            printf("\nO triangulo é escaleno");
        }
    }
    else
    {
        printf("Não é um triangulo");
    }
    
    

    return 0;
}