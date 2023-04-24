/*
55) Escreva um programa que calcule a soma dos n primeiros termos da série
S = 1 3 3 -5 - 5 - 5 7 7 7 7 - 9 - 9 -9 -9 -9 11 11 11 11 11 11 …
*/
#include <stdio.h>

int main() {
    int n, num = 1, sum = 0, sign = 1, count = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    while (count < n) {
        if (sign > 0) {
            sum += num;
        } else {
            sum -= num;
        }
        num += 2;
        sign *= -1;
        count++;
    }
    printf("A soma dos %d primeiros termos da série é %d\n", n, sum);
    return 0;
}