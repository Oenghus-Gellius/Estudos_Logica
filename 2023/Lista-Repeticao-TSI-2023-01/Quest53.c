/*
53) Faça um programa que converta um número da base 10 para a base 2 .
*/
#include <stdio.h>

int main() {
    int num, resto, binario = 0, base = 1;
    
    printf("Digite um numero inteiro na base 10: ");
    scanf("%d", &num);
    
    while (num > 0) {
        resto = num % 2;
        binario = binario + base * resto;
        base = base*10;
        num = num / 2;
    }
    
    printf("O numero na base 2 eh: %d\n", binario);
    
    return 0;
}