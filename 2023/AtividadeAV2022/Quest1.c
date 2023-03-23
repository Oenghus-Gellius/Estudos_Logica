/*
Questão 01)
Dados três valores A, B e C, verificar se eles podem ser comprimentos de lados de um
triângulo. Caso formem, calcule e imprima:
a) O tipo do triângulo, ou seja: equilátero, isósceles ou escaleno. 
b) A área e o perímetro do triângulo.
Obs. o comprimento de um lado do triângulo é menor que a soma dos dois outros lados.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int ladA, ladB, ladC; 
    float area, perim,semipe;

    printf("\nInforme o lada A do Triangulo:");
    scanf("%d",&ladA);
    printf("\nInforme o lada B do Triangulo:");
    scanf("%d",&ladB);
    printf("\nInforme o lada C do Triangulo:");
    scanf("%d",&ladC);
    
    if (ladA+ladB>ladC && ladB+ladC>ladA && ladC+ladA>ladB)
    {
        printf("\nSão lados de um TRIANGULO!");
        if (ladA==ladB && ladA==ladC)
        {
            printf("\nO triangulo é Equiláteros!!!");
        }
        else
        {
            if (ladA==ladB || ladB==ladC || ladC==ladA)
            {
                printf("\nO triangulo é Isósceles!!!");
            }
            else
            {
                printf("\nO triangulo é Escaleno!!!");
            }
        }
    perim=ladA+ladB+ladC;
    semipe=perim/2;
    area=sqrt(semipe*(semipe-ladA)*(semipe-ladB)*(semipe-ladC));

    printf("\n O perimetro do Triangulo é: %.1f",perim);   
    printf("\n A Area do Triangulo é: %.1f",area);  
    }
    else
    {
        printf("\nNão forma um TRIANGULO!!!");
        return 0;
    }

    
    

    
    
    return 0;
}