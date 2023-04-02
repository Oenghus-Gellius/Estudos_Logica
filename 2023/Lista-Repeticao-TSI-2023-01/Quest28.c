/*
20) Uma empresa deseja aumentar seus preços em 20%. Faça um programa que leia o código e o 
preço de custo de cada produto e calcule o preço novo. Calcule também, a média dos preços com e 
sem aumento. Mostre o código e o preço novo de cada produto e, no final, as médias. A entrada de 
dados deve terminar quando for lido um código de produto negativo.
*/
#include<stdio.h>
int main(){
    int codigo,count=0;
    float precoCusto,precoFinal,mediaCusto=0,mediaFinalCusto=0;
    do
    {
        printf("\nInsira o codigo do produto.:");
        scanf("%d",&codigo);
        if (codigo>0)
        {
            printf("\nInsira o valor de custo do Produto.:");
            scanf("%f",&precoCusto);

            precoFinal=precoCusto*1.20;
            mediaCusto=mediaCusto+precoCusto;
            mediaFinalCusto=mediaFinalCusto+precoFinal;

            printf("\n%.2f\tPreço final do pruduto com o codigo %d.",precoFinal,codigo);

            count++;
        }
        
    }while(codigo>0);

    mediaCusto=mediaCusto/count;
    mediaFinalCusto=mediaFinalCusto/count;

    printf("\n%.2f\tPreço medio dos prudutos.",mediaCusto);
    printf("\n%.2f\tPreço medio de venda dos prudutos.",mediaFinalCusto);

    return 0;
}