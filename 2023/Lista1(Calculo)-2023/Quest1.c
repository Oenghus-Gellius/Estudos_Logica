/*
a) X=
A+ B
C
D−
E
F
*/
#include <stdio.h>
#include <math.h>

int main (){
    float A,B,C,D,E,F,resustado;

    printf("Insira o valro de A:");
    scanf("%f",&A); 
    printf("Insira o valro de B:");
    scanf("%f",&B);
    printf("Insira o valro de C:");
    scanf("%f",&C);
    printf("Insira o valro de D:");
    scanf("%f",&D);
    printf("Insira o valro de E:");
    scanf("%f",&E);
    printf("Insira o valro de F:");
    scanf("%f",&F);

    resustado=(A+(B/C))/(D-(E/F));

    printf("O valor de X é.:%.1f",resustado);
 
    return 0;
}