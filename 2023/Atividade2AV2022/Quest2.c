/*
Questão 02)
Escreva um programa que calcule a soma dos N primeiros termos da série
S = -1 3 3 -5 - 5 - 5 7 7 7 7 - 9 - 9 -9 -9 -9 11 11 11 11 11 11 …
*/
#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    // loop para percorrer cada bloco de números ímpares
    for (int i = 1; i <= n; i++) {
        // define o primeiro número do bloco
        int primeiro = (-1) * (i % 2 == 0 ? i : i + 1);

        // loop para percorrer os números do bloco
        for (int j = primeiro; j < primeiro + 2*i; j++) {
            soma += j;
        }
    }

    printf("A soma dos N primeiros termos da série é: %d\n", soma);

    return 0;
}
