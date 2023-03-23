/*1. Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float metr, dec, cen, mil;

    printf("\nInsita o valor em metros:");
    scanf("%f", &metr);
    dec=metr*10;
    cen=metr*100;
    mil=metr*1000;

    printf("\nO valor em %.1f metros equivale %.1f decimetros, %.1f centimetos e %.1f milimetros\n", metr, dec, cen, mil);

    return 0;
}