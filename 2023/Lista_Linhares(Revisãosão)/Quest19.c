/*
19. Fazer um programa para mostrar todos os números perfeitos entre 1 e 100. Número perfeito 
é todo número inteiro cuja soma dos seus divisores é igual ao dobro do próprio número. 
*/
#include <stdio.h>

int main() {
    int i, j, sum;
    for (i = 1; i <= 100; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum =sum + j;
            }
        }
        if (sum == i * 2) {
            printf("%d\n", i);
        }
    }
    return 0;
}