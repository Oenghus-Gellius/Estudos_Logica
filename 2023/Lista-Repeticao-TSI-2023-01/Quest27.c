/*
27) Faça um programa que leia um conjunto de valores, um de cada vez, acompanhados de um 
código 1 ou 2. O valor representa o número de cobaias utilizadas em cada uma das experiências 
feitas e os códigos 1 e 2 representam respectivamente coelhos e ratos. Quer-se saber o total de 
cobaias utilizadas, o total de coelhos, o total de ratos, a percentagem de coelhos e a percentagem de 
ratos. Escrever estes valores.
Obs. Flag de saída código igual a 3
*/
#include <stdio.h>
int main(){
    int qtdCobaias=0,codigo,qtdcoelhos=0,qtdRatos=0,qtdTotal;
    float percCoelhos,percentRatos;

    do
    {
        printf("1-Coelhos\t2-ratos\t3-sair.\nQual o codigo.:");
        scanf("%d",&codigo);
        if (codigo!=3)
        {
            printf("insira a quantidade de cobaias por esperimento.:");
            scanf("%d",&qtdCobaias);
            if (codigo==1)
            {
                qtdcoelhos=qtdcoelhos+qtdCobaias;
            }
            else
                if (codigo==2)
                {
                    qtdRatos=qtdRatos+qtdCobaias;
                }
        }
    } while (codigo!=3);

    qtdTotal=qtdcoelhos+qtdRatos;
    percCoelhos=((float)qtdcoelhos/qtdTotal)*100;
    percentRatos=((float)qtdRatos/qtdTotal)*100;

    printf("\n%d\tTotal de cobaias",qtdTotal);
    printf("\n%d\tQuantidade de Coelhos.",qtdcoelhos);
    printf("\n%d\tQuantidade de Ratos.",qtdRatos);
    printf("\n%.1f\tPercentual de Coelhos.",percCoelhos);
    printf("\n%.1f\tPercentual de Ratos.",percentRatos);

    return 0;
}