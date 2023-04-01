/*
10) Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e cresce 3 
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários 
para que Zé seja maior que Chico.
*/
#include<stdio.h>
int main(){
    int ano=0;
    float altCh=1.5,altZe=1.10;

    while (altCh>altZe)
    {
        altCh=altCh+0.02;
        altZe=altZe+0.03;
        ano++;
    }
    printf("\nserão nescessarios %d para Zé seja maior que Chico.",ano);
    return 0;
}