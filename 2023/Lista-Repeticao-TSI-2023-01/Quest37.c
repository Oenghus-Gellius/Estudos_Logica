/*
37) Escrever um programa que leia um valor X e calcule e mostre os 20 primeiros termos da série: 
1 - 1 + 1 - 1 ...
X   X
        2 X
            3 X
*/
#include <stdio.h>
#include <math.h>

int main(){
    int x,i;
    int sinal;
    float termos;
    const int QTD = 20;

    printf("\nInsira o valor de 'x'.:");
    scanf("%d",&x);

    sinal=1;

    for (i = 1; i <= QTD; i++)
    {
        termos=(float)sinal/pow(x,i);

        sinal=sinal*-1;
        printf("\n%f",termos);
    }
    
    return 0;
}