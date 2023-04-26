/*
6) Faça um programa que converta um número da base 2 para a base 10. 
Obs.:
a) O número na base 2 é uma cadeia de caracteres.
b) O final de uma cadeia de caracteres é determinado pela presença do caracter \0.
*/
#include <stdio.h>

int main(){
    int bin, dec = 0, base = 1, rem;
    
    printf("Digite um número em binário: ");
    scanf("%d", &bin);
    
    // Realiza a conversão para decimal
    while (bin != 0) {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
        bin /= 10;
    }
    
    printf("O número em decimal é: %d\n", dec);
    
    return 0;
}