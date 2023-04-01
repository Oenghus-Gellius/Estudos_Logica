/*
4) Faça um programa que imprima todos os números múltiplos de 5, no intervalo
fechado de 1 a 500.
*/
#include<stdio.h>
int main(){
    int i;
    i=0;
    while (i<=500)
    {
        printf("\t%d",i);
        i=i+5;
    }
    return 0;
}