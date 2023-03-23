/*
14) Faça um algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o total de
minutos se passaram desde o início do dia.
*/
#include <stdio.h>

int main (){
    int hora,min,totalMin;

    printf("\nInsira o valor da hora.:");
    scanf("%d",&hora);
    printf("Insira os minutos.:");
    scanf("%d",&min);

    totalMin=min+(hora*60);

    printf("O total de minutos desde o inicio do dia são %d minutos",totalMin);
    
    return 0;
}