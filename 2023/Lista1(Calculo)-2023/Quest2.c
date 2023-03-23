/*
b) Y=
2X2−3X( X+1)
2
+
√X+1
X
2
X
*/
#include <stdio.h>
#include <math.h>

int main (){
    float X,resultado;
    printf("Insira o valro de X:");
    scanf("%f",&X);

    resultado=(((2*(pow(X,2))-3*(pow(X,X+1)))/2)+(sqrt(X+1))/X)/pow(2,X);
    printf("O valor de Y é.: %.1f",resultado);
    return 0;
}