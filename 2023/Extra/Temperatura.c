/*
Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
seguem.
 a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula
 C=(f-32.0) * (5.0/9.0).
 b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula
 C=(f-32)*(5/9).
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){

    double  Cel;
    int fahr, cel;

    printf("\nInsira o valor em Graus Fahrenheit:");
    scanf("%d", &fahr);
    Cel=(fahr-32.0) * (5.0/9.0);
    cel=(fahr-32)*(5/9);//Por algum motivo está dando 0

    printf("\n%.2f graus Celsius equivale a %d", Cel, fahr);
    printf("\n%d graus Celsius equivale a %d\n", cel, fahr);

    return 0;
}