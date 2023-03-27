/*
11) Escrever um algoritmo que lê um valor inteiro e calcula qual o menor número possível de notas
de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de
notas necessárias. 
*/

#include <stdio.h>

int main(){
    int saque,n100,n50,n10,n5,n1;

    printf("Insira o valor de saque.:");
    scanf("%d",&saque);

    printf("\n\nO valor de saque é.:%d\n\n",saque);
    if (saque >0)
    {
        n100=saque/100;
        saque=saque%100;
        n50=saque/50;
        saque=saque%50;
        n10=saque/10;
        saque=saque%10;
        n5=saque/5;
        saque=saque%5;
        n1=saque/1;
        saque=saque%1;

        if (n100>0)
        {
            printf("\n%d\tNotas de 100",n100);
        }
        if (n50>0)
        {
            printf("\n%d\tNotas de 50",n50);
        }
        if (n10>0)
        {
            printf("\n%d\tNotas de 10",n10);
        }
        if (n5>0)
        {
            printf("\n%d\tNotas de 5",n5);
        }
        if (n1>0)
        {
            printf("\n%d\tNotas de 1",n1);
        }
    }
    else
    {
        printf("Valor invalido");
    } 
    return 0;
}
