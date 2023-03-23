/*
13) Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão
para o garçom. Faça um algoritmo que leia o valor gasto com despesas realizadas em um
restaurante e imprima o valor da gorjeta e o valor total com a gorjeta.
*/
#include <stdio.h>

int main(){
    float compra,gorjeta,total;

    printf("Digite o valor de compra.:");
    scanf("%f",&compra);

    total=compra+compra*0.10;
    gorjeta=total-compra;

    printf("O valor total de consumo foi.: %.2f. Valor da gorjeta.: %.2f",total,gorjeta);
    return 0;
}