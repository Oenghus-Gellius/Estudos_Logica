/*
10) Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas
oferecendo desconto. Faça um algoritmo que possa entrar com o valor de um produto e imprima o
novo valor tendo em vista que o desconto foi de 9%. Além disso, imprima o valor do desconto.
*/
#include <stdio.h>

int main(){
    float valorProd,valorDes,total;
    
    printf("\nInsira o valor do produto.:");
    scanf("%f",&valorProd);

    total=valorProd+valorProd*0.09;
    valorDes=total-valorProd;

    printf("\nO valor final do produto é.: %.2f - O desconto foi de %.2f",total,valorDes);
    
    return 0;
}
