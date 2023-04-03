/*
47) Faça um programa que converta um número na base 10 para a base 2.
*/
#include <stdio.h>

int main() {
    int numero, resto, binario = 0, base = 1;

    printf("Digite um número na base 10: ");
    scanf("%d", &numero);

    while (numero > 0) {
        resto = numero % 2;
        binario=binario+resto*base;//binario += resto * base;
        base=base*10;//base *= 10;
        numero=numero/2;//numero /= 2;
    }

    printf("O número em binário é: %d\n", binario);j

    return 0;
}