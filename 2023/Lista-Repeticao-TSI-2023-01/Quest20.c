/*
20) Escrever um programa que leia uma quantidade desconhecida de números e conte quantos deles 
estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar 
quando for lido um número negativo.
*/
#include<stdio.h>
int main(){
    int num,qtd1=0,qtd2=0,qtd3=0,qtd4=0,count=0;

    do
    {
        printf("Insira o numero.:");
        scanf("%d",&num);
        if (num>=0 && num<=100)
        {
            if (num<=25)
            {
                qtd1++;
            }
            else
                if (num<=50)
                {
                    qtd2++;
                }
                else
                    if (num<=75)
                    {
                        qtd3++;
                    }
                    else
                    {
                        qtd4++;
                    }
            count++; 
        }
    } while (num>=0);
    if (count>0)
    {
        printf("\n%d\tEntre 0 e 25.",qtd1);
        printf("\n%d\tEntre 26 e 50.",qtd2);
        printf("\n%d\tEntre 51 e 75.",qtd3);
        printf("\n%d\tEntre 76 e 100.",qtd4);
    }
    return 0;
}