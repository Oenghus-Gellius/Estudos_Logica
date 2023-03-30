/*
18) Faça um algoritmo que tenha como entrada a idade de uma pessoa e informe a sua situação
perante a Justiça Eleitoral:
• não eleitor (abaixo de 16 anos);
• eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
• eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).
*/
#include<stdio.h>
int main(){
    int idade;

    printf("Insira a sua idade.:");
    scanf("%d",&idade);

    if (idade>0)
    {
        if (idade<16)
        {
            printf("Não eleitor!!!");
        }
        else
            if (idade>=18 && idade<65)
            {
                printf("Eleitor obrigatório!!!");
            }
            else
                if (idade>=16 && idade<18)
                {
                    printf("Eleitor facultativo!!!");
                }
                else
                    if (idade>=25)
                    {
                        printf("Eleitor facultativo!!!");
                    } 
    }
    else
    {
        printf("Idade ivalida!!!");
    }   
    return 0;
}