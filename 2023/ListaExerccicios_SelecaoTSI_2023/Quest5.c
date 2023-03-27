/*
5) O cardápio de uma lanchonete é o seguinte: 
Código Especificação Preço unitário
100 Pastel 2,5
101 Bauru simples 3,20
102 Bauru c/ovo 3,5 
103 Hamburger 4,10 
104 Cheeseburger 6,0 
105 Refrigerante 2,0
*/
#include <stdio.h>

int main(){

    int lanche,quantidade;
    float valorTotal;

    printf("Insira o lanche pedido.:");
    scanf("%d",&lanche);
    printf("Insira a quantidade de lanches.:");
    scanf("%d",&quantidade);

    switch (lanche)
    {
    case 100:
        valorTotal=2.5*quantidade;
        printf("\n%d Pastel - Total a pagar.:%.2f",quantidade,valorTotal);
        break;
    case 101:
        valorTotal=3*quantidade;
        printf("\n%d Bauru simples - Total a pagar.:%.2f",quantidade,valorTotal);
        break;
    case 102:
        valorTotal=3.5*quantidade;
        printf("\n%d Bauru c/ovo - Total a pagar.:%.2f",quantidade,valorTotal);
        break;
    case 103:
        valorTotal=4.1*quantidade;
        printf("\n%d Hamburger - Total a pagar.:%.2f",quantidade,valorTotal);
        break;
    case 104:
        valorTotal=6*quantidade;
        printf("\n%d Cheeseburger - Total a pagar.:%.2f",quantidade,valorTotal);
        break;
    case 105:
        valorTotal=2*quantidade;
        printf("\n%d Refrigerante - Total a pagar.:%.2f",quantidade,valorTotal);
        break;    
    default:
        break;
    }

    return 0;
}