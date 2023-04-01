/*
18. Fazer um programa para mostrar os 15 primeiros termos da série de Fibonacci.S
*/
#include <stdio.h>

int main() {
    int n = 15, i, termo_anterior = 0, termo_atual = 1, proximo_termo;

    printf("Os primeiros %d termos da serie de Fibonacci sao:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", termo_atual);
        proximo_termo = termo_anterior + termo_atual;
        termo_anterior = termo_atual;
        termo_atual = proximo_termo;
    }

    return 0;
}