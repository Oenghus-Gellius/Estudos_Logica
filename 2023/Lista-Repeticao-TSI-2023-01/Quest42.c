/*
42)Implementar uma função para calcular o cos(X). O valor do cosseno de X será calculado pela 
soma dos 15 primeiros termos da série a seguir: 
cos( X ) = 1 - X^2/2! + X^4/4! - X^6/6! + X^8/8! ….
*/
#include <stdio.h>
#include <math.h>

int main(){
    int x,i,sinal,count;
    double cos=1,numerador=1,denominador=1;
    const int QTD = 15;

    printf("Informe o valor de 'x'.:");
    scanf("%d",&x);

    sinal=1;
    

    for (i = 0; i < QTD; i++)
    {
        numerador=sinal*pow(x,i);

        for (count = 1; count <= i; count++)
        {
            denominador=denominador*count;
        }
        cos=cos+(numerador/denominador);

        sinal=sinal*-1;
    }
    printf("\no cos(%d) = %2lf",x,cos);
    
    return 0;
}