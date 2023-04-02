/*
29) Faça um programa que leia 2 valores inteiros e positivos: X e Y. O programa deve calcular e 
escrever a função potência X^Y. 
*/
#include <stdio.h>
#include <math.h>

int main(){
    int x,y,func;

    printf("Insira o valor de 'x'.");
    scanf("%d",&x);
    printf("Insira o valor de 'y'.");
    scanf("%d",&y);

    func=pow(x,y);

    printf("A função potência X^Y é .: %d",func);

    return 0;
}