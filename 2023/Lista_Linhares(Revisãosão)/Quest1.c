/*
1. Fazer um programa para 
a. receber do usuário um tempo em segundos, correspondente à duração de um evento 
qualquer (por ex. jogo de futebol) 
b. calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos 
*/
#include <stdio.h>

int main(){
    int secEnter,sec,min,horas,resto;

    printf("Insira o valor em segundos.:");
    scanf("%d",&secEnter);

    horas=secEnter/3600;
    resto=secEnter%3600;
    min=resto/60;
    resto=resto%60;

    printf("\n%d horas.",horas);
    printf("\n%d minutos.",min);
    printf("\n%d segundos.",resto);

    return 0;
}