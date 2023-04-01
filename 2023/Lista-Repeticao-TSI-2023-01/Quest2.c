/*
2) Faça um programa que imprima os 100 primeiros inteiros positvos pares.
*/
#include <stdio.h>
int main(){
    int i;

    i=2;
    while (i<=100)
    {
        printf("\t%d",i);
        i=i+2;
    }
    return 0;
}