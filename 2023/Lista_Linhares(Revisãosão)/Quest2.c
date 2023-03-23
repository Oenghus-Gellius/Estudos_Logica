/*
2. Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que 
pode não ser inteira). 
*/

#include <stdio.h>

int main(){
    float n1,n2,n3,media;
    
    printf("Insira a Primeira nota.:");
    scanf("%f",&n1);
    printf("Insira a Segunda nota.:");
    scanf("%f",&n2);
    printf("Insira a Terceira nota.:");
    scanf("%f",&n3);

    media=(n1+n2+n3)/3;

    printf("A meidia é %.2f",media);
    return 0;
}