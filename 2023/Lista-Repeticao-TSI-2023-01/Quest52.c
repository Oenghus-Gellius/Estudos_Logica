/*
52) Escreva um programa que determine se dois valores inteiros e positivos A e B são primos entre 
si. (dois números inteiros são ditos primos entre si, caso não exista divisor comum aos dois 
números).
*/

#include <stdio.h>

int main() {
    int a, b, i = 2, mdc = 1;
    
    printf("\nDigite o valor de A: ");
    scanf("%d", &a);
    
    printf("\nDigite o valor de B: ");
    scanf("%d", &b);
    
    while (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            mdc = i;
        }
        i++;
    }
    
    if (mdc == 1) {
        printf("\nOs numeros sao primos entre si.\n");
    } else {
        printf("\nOs numeros nao sao primos entre si. O MDC eh %d.\n", mdc);
    }
    
    return 0;
}