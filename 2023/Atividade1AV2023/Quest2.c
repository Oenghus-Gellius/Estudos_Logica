/*
Autor.: Bolívar Augusto Dias Jr
Data.: 30/03-23
Questão 02)
Faça um programa que calcule a área de uma parede retangular e mostre também o menor
número de latas de tintas a serem compradas para pintá-la tendo o menor desperdício
possível. Consumo de tinta é de 3 l/m2
 .
As medidas são inteiras são valores inteiros. No mercado existem latas com capacidade de
9 , 5 e 1 litro.
*/

#include <stdio.h>
int main(){
    int base,alt,area,litrosTin,lat9,lat5,lat1;

    printf("Insira o comprimento da base.:");
    scanf("%d",&base);
    printf("Insira o comprimento da altura.:");
    scanf("%d",&alt);
    if (base>0 && alt>0)
    {
        area=base*alt;
        litrosTin=area*3;
        printf("\nO consumo de tinta foi %d litros",litrosTin);

        lat9=litrosTin/9;
        litrosTin=litrosTin%9;
        lat5=litrosTin/5;
        litrosTin=litrosTin%5;
        lat1=litrosTin/1;
        litrosTin=litrosTin%1;

        if (lat9>0)
        {
            printf("\n%d \tlata(s) de tinta de 9 litros.",lat9);
        }
        if (lat5>0)
        {
            printf("\n%d \tlata(s) de tinta de 5 litros.",lat5);
        }        
        if (lat1>0)
        {
            printf("\n%d \tlata(s) de tinta de 1 litros.",lat1);
        }         
    }
    else
    {
        printf("Não são medidas validas!!!");
    }
    
    
    return 0;
}