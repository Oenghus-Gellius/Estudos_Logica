/*
18) Escrever um programa que leia um número não determinado de valores e calcule a média 
aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores negativos e 
o percentual de valores negativos e positivos. Mostre os resultados. Adote um falg de saída.
*/
#include<stdio.h>
int main(){
    int num,count=0,qtdNegativo=0,qtdPositivo=0;
    float pctNegativo=0,pctPositivo=0;

    do
    {
        printf("Insira um numero.:");
        scanf("%d",&num);
        if (num!=0)
        {
            if (num > 0)
            {
                qtdPositivo++;
            }
            else
            {
                qtdNegativo++;
            }
            count++;            
        }
    }while(num!=0);

    if (count>0)
    {
        printf("\n%d\tNumeros Positivos.",qtdPositivo);
        printf("\n%d\tQuantidade Negativo.",qtdNegativo);

        pctPositivo=((float)qtdPositivo/count)*100;
        pctNegativo=((float)qtdNegativo/count)*100;

        printf("\n%.1f%%\tPositivos!!!",pctPositivo);
        printf("\n%.1f%%\tNEGATIVO!!!!",pctNegativo);
    }
    

    return 0;
}