/*
3) Faça um programa que leia um vetor de 13 elementos inteiros, que é o Gabarito de um
teste da loteria esportiva, contendo os valores 1(coluna 1), 2 (coluna 2) e 3 (coluna do
meio). Leia, a seguir, para cada apostador, o número do seu cartão e um vetor de Respostas
de 13 posições. Verificar para cada apostador o número de acertos, comparando o vetor de
Gabarito com o vetor de Respostas. Escreva o número do apostador e o número de acertos.
*/
#include <stdio.h>
#define GAB 3

int main(){

    int gabVet[GAB],apostVet[GAB];
    int numApostador,i,chute,acerto=0;

    for (i = 0; i < GAB; i++)
    {
        do
        {
            printf("\nInsira o resultado o %dº da loteria esportiva.:",i+1);
            scanf("%d",&gabVet[i]);
            if (gabVet[i]<=0 || gabVet[i]>=4)
            {
                printf("Insira um valor correspondente!");
            }  
        } while (gabVet[i]<=0 || gabVet[i]>=4);
    }
    do
    {
        printf("\nInsira o Numero do Apostador.:");
        scanf("%d",&numApostador);

        if (numApostador>0)
        {
            for (i = 0; i < GAB; i++)
            {
                do
                {
                    printf("\nQual sua %dª aposta.:",i+1);
                    scanf("%d",&apostVet[i]);
                    if (apostVet[i]<=0 || apostVet[i]>=4)
                    {
                        printf("\nOpção incorreta!!!");
                    }
                    if (apostVet[i]==gabVet[i])
                    {
                        acerto++;
                    }
                } while (apostVet[i]<=0 || apostVet[i]>=4); 
            }
        }
        printf("\n%d\tNumero apostador com %d acertos",numApostador,acerto);//saida
        acerto=0;
    } while (numApostador>0);
    
    return 0;
}