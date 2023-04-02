/*
31) Faça um programa que implemente o jogo "hi-lo". A finalidade do jogo é que o usuário acerte 
um número entre 1 e 100, escolhido aleatoriamente pelo programa. A cada palpite do usuário, o 
programa deve responder indicando se este é inferior ou superior ao número escondido. Quando o 
usuário acertar, o programa deve dar-lhe os parabéns e indicar em quantas jogadas acertou.
Obs.:
rand (x) = um número aleatório, menor que x e maior ou igual a zero.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num,pass,count=0;
    
    printf("\nBem vindo ao Jogo!!!\n");
    pass=rand()%100+1;
    do
    {
        printf("\nInsira um numero de 0 a 100.:");
        scanf("%d",&num);
        
        if (num>pass)
        {
            printf("\n%d SUPERIOR a o HI-LO!!!",num);
        }
        else
        {
            printf("\n%d INFERIOR a o HI-LO!!!",num);
        }
        
    } while (num!=pass);

    printf("\n\n'HI-LO!!!!\n\n");
    
    
    return 0;
}
