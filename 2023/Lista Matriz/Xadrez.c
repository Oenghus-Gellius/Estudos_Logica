/*
O jogo de xadrez possui várias peças com movimentos curiosos: uma delas é a dama, que pode se
mover qualquer quantidade de casas na mesma linha, na mesma coluna, ou em uma das duas
diagonais, conforme exemplifica a figura abaixo:
Faça um programa que dada a posição de uma dama em um tabuleiro de xadrez vazio (ou seja, um
tabuleiro 8 × 8, com 64 casas), de quantos movimentos, no mínimo, ela precisa para chegar em
outra casa do tabuleiro?

*/

#include <stdio.h>
#define TAB 8
int main (){
    int posDama[TAB][TAB],posCasaDestny[TAB][TAB];
    int casaHor,casaVert,casaDestH,casaDestV,i,k;

    printf("\n\nIndique a posição da Dama.:");
    do
    {
        printf("\nInsira o numero da casa Horizontal.:");
        scanf("%d",&casaHor);
        printf("\nInsira o numero da casa Vertical.:");
        scanf("%d",&casaVert);
        if (casaHor>TAB || casaHor<0 ||casaVert>TAB || casaVert<0)
        {
            printf("\nValor incorreto!!!");
        }
    } while (casaHor>TAB || casaHor<0 ||casaVert>TAB || casaVert<0);
    printf("\nA Dama esta na casa %d/%d",casaHor,casaVert);

    printf("\n\nIndique a posição de destino da Dama.:");
    do
    {
        printf("\nInsira o numero da casa Horizontal de destino.:");
        scanf("%d",&casaDestH);
        printf("\nInsira o numero da casa Vertical de destino.:");
        scanf("%d",&casaDestV);
        if (casaDestH>TAB || casaDestH<0 ||casaDestV>TAB || casaDestV<0)
        {
            printf("\nValor incorreto!!!");
        }
    } while (casaDestH>TAB || casaDestH<0 ||casaDestV>TAB || casaDestV<0);
    printf("\nA casa de destino da Dama é.: %d/%d",casaDestH,casaDestV);

    if ((casaHor-casaDestH)==(casaVert-casaDestV)|| (casaHor-casaDestH)==-(casaVert-casaDestV) || casaHor==casaDestH || casaVert==casaDestV)
    {
        printf("\nPara a A Dama alncançar a casa de destino precisa apenas de um movimento.");
    }
    else
    {
        printf("\nPara a A Dama alncançar a casa de destino precisa  de Dois movimento.");
    } 
    
    return 0;
}