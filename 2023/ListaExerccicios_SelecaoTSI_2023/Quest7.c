/*
7) Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. O
algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total,
usando a tabela abaixo: 
Código do produto   Preço unitário 
1001                5,40 
1324                7,00
6548                2,37 
3987                5,32 
7623                6,45
*/
#include<stdio.h>

int main(){
    int codigo, quantidade;
    float valorFinal;

    printf("Insira o codigo do produto.:");
    scanf("%d",&codigo);
    printf("Insira a quantidade do produto.:");
    scanf("%d",&quantidade);

    switch (codigo)
    {
    case 1001:
        valorFinal=quantidade*5.4;
        printf("\n\nTotal da conta é.:\t%.2f",valorFinal);
        break;
    case 1324:
        valorFinal=quantidade*7.0;
        printf("\n\nTotal da conta é.:\t%.2f",valorFinal);
        break;
    case 6548:
        valorFinal=quantidade*2.37;
        printf("\n\nTotal da conta é.:\t%.2f",valorFinal);
        break;
    case 3987:
        valorFinal=quantidade*5.32;
        printf("\n\nTotal da conta é.:\t%.2f",valorFinal);
        break;
    case 7623:
        valorFinal=quantidade*6.45;
        printf("\n\nTotal da conta é.:\t%.2f\n\n",valorFinal);
        break;
    
    default:
        break;
    }
    return 0;
}