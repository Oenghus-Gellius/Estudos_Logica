/*
6) Faça um algoritmo ara resolver um sistema de equações do primeiro grau
*/
#include <stdio.h>

int main() {
    float a1, b1, c1, a2, b2, c2;
    float x, y;

    // Leitura dos coeficientes das equações
    printf("Digite os coeficientes da primeira equacao (a1 b1 c1): ");
    scanf("%f %f %f", &a1, &b1, &c1);

    printf("Digite os coeficientes da segunda equacao (a2 b2 c2): ");
    scanf("%f %f %f", &a2, &b2, &c2);

    // Cálculo das soluções do sistema
    x = (c1*b2 - c2*b1) / (a1*b2 - a2*b1);
    y = (c1*a2 - c2*a1) / (b1*a2 - b2*a1);

    // Impressão das soluções
    printf("Solucao do sistema: x = %.2f, y = %.2f\n", x, y);

    return 0;
}