/*
9) Considere que o número de uma placa de veículo é composto por quatro algarismos. Construa
um algoritmo que leia este número e apresente o algarismo correspondente à casa das centenas.

Explicação:
Declaramos as variáveis numero e centenas.
Pedimos ao usuário para digitar o número da placa do veículo, usando a função printf.
Usamos a função scanf para armazenar o valor digitado pelo usuário na variável numero.
Para encontrar o algarismo das centenas, dividimos o número por 100 (para remover os dois últimos dígitos), e depois pegamos o resto da divisão por 10 (para obter apenas o terceiro dígito).
Usamos a função printf para mostrar o resultado ao usuário.
*/
#include <stdio.h>

int main() {
    int numero, centenas;

    printf("Digite o número da placa do veículo (4 dígitos): ");
    scanf("%d", &numero);

    centenas = (numero / 100) % 10;

    printf("O algarismo das centenas é: %d\n", centenas);

    return 0;
}
