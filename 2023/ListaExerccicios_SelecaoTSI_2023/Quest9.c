/*
9) Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo.
Supor que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular e
escrever a área deste triângulo. Se não formam triângulo escrever os valores lidos. ( se a > b + c não
formam triângulo algum, se a é o maior).
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float perimetro,semiP,area;

    printf("Insira o valor de A.:");
    scanf("%d",&a);
    printf("Insira o valor de B.:");
    scanf("%d",&b);
    printf("Insira o valor de C.:");
    scanf("%d",&c);

    if (a>0 && b>0 && c>0)
    {
        if (a+b>c || a+c>b || c+b>a)
        {
            perimetro=a+b+c;
            semiP=perimetro/2;
            area=sqrt(semiP*(semiP-a)*(semiP-b)*(semiP-c));   //area=sqrt(semipe*(semipe-ladA)*(semipe-ladB)*(semipe-ladC));

            printf("\n\n%d - %d- %d - Formam um triangulo de area.: %.1f",a,b,c,area);
        }
        else
        {
            printf("%d - %d - %d nãoformam um triangulo!!!");
        }
    }
    else
    {
        printf("%d - %d - %d não são valores invalidos.",a,b,c);
    }
    return 0;
}
