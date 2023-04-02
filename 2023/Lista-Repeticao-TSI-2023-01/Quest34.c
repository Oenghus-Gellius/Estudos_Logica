/*
34) Faça um programa que calcule a soma dos N (>0) primeiros termos da série Fibonacci 
S = 1 1 2 3 5 8 13 ...
*/
#include <stdio.h>

int main() {
    int n, i;
    int fibonacci_atual = 1, fibonacci_anterior = 1, fibonacci_anterior_anterior = 0;
    int soma = 2; // a soma começa com 2, pois os dois primeiros termos da série são 1 e 1

    printf("Digite o número de termos da série de Fibonacci para somar: ");
    scanf("%d", &n);

    if (n <= 2) {
        soma = n; // se n for 1 ou 2, a soma é igual a n
    } else {
        for (i = 3; i <= n; i++) {
            // atualiza os valores dos termos da série
            fibonacci_anterior_anterior = fibonacci_anterior;
            fibonacci_anterior = fibonacci_atual;
            fibonacci_atual = fibonacci_anterior + fibonacci_anterior_anterior;

            soma += fibonacci_atual // adiciona o termo atual à soma
        }
    }

    printf("A soma dos %d primeiros termos da série de Fibonacci é: %d\n", n, soma);

    return 0;
}