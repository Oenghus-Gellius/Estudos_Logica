/*
10) Uma empresa que possui 20 funcionários, guarda a quantidade vendida por cada um de seus
funcionários em cada um dos 7 dias dasemana.
Faça um programa que:
a) Mostre a quantidade vendida por cada funcionário;
b) Mostre em qual ou quais dias da semana cada funcionário vendeu mais;
c) O nome do funcionário ou funcionários com maior valor de venda na semana;
d) Para cada dia da semana, a quantidade vendida por cada funcionário.
*/

#include <stdio.h>
#define FUNC 5
#define DIASEMANA 7

int main(){
    int vendas[FUNC][DIASEMANA]={{0},{0},{0},{0},{0}};
    int numF,diaSemana,numVendas,sair,vendaFunc,maisVendaDia,diaMaisVenda;
    int i,k;

    do
    {
        do
        {
            printf("\nInsira o numero do funcionario.:");
            scanf("%d",&numF);
            printf("\nInsira o numero do dia da semana");
            scanf("%d",&diaSemana);
            if (numF<0 || numF > FUNC || diaSemana<0 || diaSemana>DIASEMANA)
            {
                printf("Dados invalidos!!!");
            }
            else
            {
                printf("\nInsira o numero de vendas.:");
                scanf("%d",&numVendas);
                vendas[numF][diaSemana]=numVendas;
            }
        } while (numF<0 || numF > FUNC || diaSemana<0 || diaSemana>diaSemana);
        printf("\n1-SIM 2-Não\ndeseja cadastrar vendas>:");
        scanf("%d",&sair);
    } while (sair!=2);
    //relatorios
    printf("\nRELATORIOS");
    for (i = 0; i < FUNC; i++)//total de vendas por funcionario
    {
        vendaFunc=0;
        for (k = 0; k < DIASEMANA; k++)
        {
            vendaFunc=vendaFunc+vendas[i][k];
        }
        if (vendaFunc>0)
        {
            printf("\n o funcionario %d vendeu %d",i,vendaFunc);
        }
    }
    for (i = 0; i < FUNC; i++)
    {
        maisVendaDia=0;
        for (k = 0; k < DIASEMANA; k++)
        {
            if (maisVendaDia<vendas[i][k])
            {
                maisVendaDia=vendas[i][k];
                diaMaisVenda=k;
            }
        }
        if (maisVendaDia>0)
        {
            printf("\nO vendendor %d vendeu %d mais no dia %d",i,maisVendaDia,diaMaisVenda);
        }
    }
    return 0;
}