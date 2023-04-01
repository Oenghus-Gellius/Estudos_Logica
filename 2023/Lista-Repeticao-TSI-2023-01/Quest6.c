/*
6) Faça um programa que leia 20 números e imprima a soma dos positivos e o total de números
negativos.
*/
#include<stdio.h>
#include<math.h>
int main(){
    int num,i,somaPos,qtdNeg;

    i=0;
    somaPos=0;
    qtdNeg=0;
    do
    {
        printf("Insira o %dº",i+1);
        scanf("%d",&num);
        if (num>0)
        {
            somaPos=somaPos+num;
        }
        if (num<0)
        {
            qtdNeg++;
        }
        i++;
    } while (i<20);
    printf("\nA soma dos numeros positivos são.: %d",somaPos);
    printf("\nA quantidade de numero(s) negativos.: %d",qtdNeg);
    
    return 0;
}