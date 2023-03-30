/*
6) Faça um algoritmo para calcular as raízes de uma esquação do segundo grau.
*/
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,raiz1,raiz2,delta;
    
    printf("Insira o coeficiente de x^2:");
    scanf("%f",&a);
    printf("Insira o coeficiente de x:");
    scanf("%f",&b);
    printf("Insira o da constante:");
    scanf("%f",&c);
    delta=b*b-4*a*c;
    raiz1= (-b + sqrt(delta))/(2*a);
    raiz2= (-b - sqrt(delta))/(2*a);
    printf("\nRaizes da Equação %f e %f\n",raiz1,raiz2);
    return 0;
}
