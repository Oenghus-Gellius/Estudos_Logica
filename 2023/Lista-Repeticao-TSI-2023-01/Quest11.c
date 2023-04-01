/*
11) Construir um programa que calcule a média aritmética de vários valores inteiros positivos. O 
final da leitura acontecerá quando for lido um valor negativo. 
*/
#include<stdio.h>
int main(){
    int num,i;
    float media=0;

    i=0;
    do
    {
        printf("Insira o numero.:");
        scanf("%d",&num);

        media=(media+num);
        i++;

    } while (num>0);

    if (i>0)
    {
        media=(float)media/i;
        printf("\nA media aritimeticas é.:%.1f",media);
    }
    return 0;
}