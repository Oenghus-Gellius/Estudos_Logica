/*
12) O produto de uma série de termos de uma Progressão Geométrica (P.G.) pode ser calculado
pela fórmula abaixo:
P = a1 * r^(n-1)
*/
#include <stdio.h>
#include <math.h>

int main(){
    float a1,n,r,produto;
    printf("Digite o primeiro termo da P.G.");
    scanf("%f",&a1);
    printf("Digite o numero de termo da P.G.");
    scanf("%f",&n);
    printf("Digite a razão da P.G.");
    scanf("%f",&r);

    produto=a1 * (1 - pow(r, n)) / (1 - r);    

    printf("\nO produto da P.G.:.%1f",produto);

    return 0;
}
