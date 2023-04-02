/*
40) Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a cada um deles 
anunciando um bônus especial. Escreva um programa que leia o nome do cliente e o valor das suas 
compras no ano passado e calcule um bônus de 10% se o valor das compras for menor que R$ 
500,01 e de 15 %, caso contrário.
*/
#include <stdio.h>

int main() {
    int i;
    char nome[50];
    float compras, bonus;

    for (i = 1; i <= 150; i++) {
        printf("Digite o nome do cliente %d: ", i);
        scanf("%s", nome);
        printf("Digite o valor das compras do cliente %d no ano passado: R$ ", i);
        scanf("%f", &compras);

        if (compras < 500.01) {
            bonus = compras * 0.1;
        } else {
            bonus = compras * 0.15;
        }

        printf("O cliente %s tem direito a um bônus de R$ %.2f\n\n", nome, bonus);
    }

    return 0;
}S