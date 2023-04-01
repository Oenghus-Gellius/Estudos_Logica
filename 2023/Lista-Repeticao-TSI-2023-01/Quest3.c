/*
3) Faça um programa que imprima todos os números inteiros de 200 a 100 (em ordem
decrescente).
*/
#include<stdio.h>
int main(){
    int i;
    i=200;
    while (i>=100)
    {
        printf("\t%d",i);
        i--;
    }
    
    return 0;
}