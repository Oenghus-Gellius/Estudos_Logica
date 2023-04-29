/*
10) Faça um programa que 10 números, sem valores repetidos. Em seguida ler um número
qualquer. Escrever a mensagem ACHEI, se o número estiver entre os 10 números lidos
anteriormente, ou NÃO ACHEI caso contrário.
*/
#include <stdio.h>
#define QTD 10

int main(){

    int numVet[QTD]={1,3,5,8,9,13,18,20,23,27};
    int num,i,achei;

    do
    {
        printf("\nInsira um numero entre 0 e 30.:");
        scanf("%d",&num);
        if (num>0 && num<=30)
        {
            achei=0;
            for (i = 0; i < QTD; i++)
            {
                if (num==numVet[i])
                {
                    achei=1;
                }
                if (achei==0)
                {
                    achei=0;
                }
            }
            if (achei==1)
            {
                printf("ACHEI FDP!!!");
            }
            else
            {
                printf("NÃO ACHEI FDP!!!");
            }
        }
    } while (num>0 && num<=30);
    
    return 0;
}