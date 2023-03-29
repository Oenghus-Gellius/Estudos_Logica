/*
16. Faça um programa que receba do usuário o número de lados e o tamanho dos lados de um 
polígono regular e imprima o valor da área do polígono. O programa deve utilizar uma 
estrutura switch-case para decidir que fórmula de cálculo utilizar, de acordo com o número 
de lados do polígono. Se o número de lados for diferente de 3, 4 ou 6 o programa deve 
informar: “não sei calcular a área”. Áreas: 
a. Triângulo: A = L*L*1.73/4 
b. Quadrado: A = L*L 
c. Hexágono: A = 6*L*L*1.73/4;
*/
#include<stdio.h>
#include<math.h>

int main(){
    int numLados;
    float compLados,area;

    printf("Insira o numero de lados.:");
    scanf("%d",&numLados);
    printf("Insira o comprimento do lado.:");
    scanf("%f",&compLados);

    switch (numLados)
    {
    case 3:
        area=(compLados*compLados*1.73)/4;
        printf("\n\nA area do Triangulo é.: %.1f\n\n",area);
        break;
    case 4:
        area=(compLados*compLados);
        printf("\n\nA area do Quadrado é.: %.1f\n\n",area);
        break;
    case 6:
        area=(6*compLados*compLados*1.73)/4;
        printf("\n\nA area do Hexágono é.: %.1f\n\n",area);
        break;
    default:
        printf("Não sei calcular a área");
        break;

    printf("\n\n\n\n");
    }
    return 0;
}
