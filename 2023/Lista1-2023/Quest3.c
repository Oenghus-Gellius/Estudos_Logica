/*
3) Faça um algoritmo que leia uma temperatura em graus Fahrenheit e converta / mostre em graus
centígrados.
Centígrados = (Fahrenheit – 32) * 5 / 9.
*/
#include <stdio.h>

int main(){
    float cent, fah;

    printf("Insira o valor em graus Fahrenheit.:");
    scanf("%f",&fah);
    cent = (fah-32)*5/9;
    printf("\n%.1f Fahrenheit equivale a %.1f Centígrados",fah,cent);
    return 0;
}