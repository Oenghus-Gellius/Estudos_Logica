/*
16) Escreva um algoritmo para determinar se uma pessoa esta com um peso adequado. Essa
situação é determinada através do IMC (Índice de Massa Corpórea), que é definida como sendo a
relação entre o peso e o quadrado da altura do indivíduo. A situação do peso é determinada pela
tabela abaixo:

É calculado dividindo o peso (em kg) pela altura ao quadrado (em metros).

Condição Situação
IMC abaixo de 20 Abaixo do peso
IMC de 20 até 25 Peso Normal
IMC de 25 até 30 Sobre Peso
IMC de 30 até 40 Obeso 
IMC de 40 e acima Obeso Mórbido
*/
#include <stdio.h>
#include <math.h>

int main(){
    float peso,altura,IMC;

    printf("Insira seu peso atual.:");
    scanf("%f",&peso);
    printf("Insira sua altura.:");
    scanf("%f",&altura);

    IMC=peso/(pow(altura,2));

    printf("Seu IMC é .:\t%.1f",IMC);
    printf("\n\t\tSituação.:");
    if (IMC<=20)
    {
        printf("\nAbaixo do Peso.");
    }
    else
        if (IMC>20 && IMC<=25)
        {
            printf("\nPeso normal.");
        }
        else
            if (IMC>25 && IMC<=30)
            {
                printf("\nSobre Peso.");
            }
            else
                if (IMC>30 && IMC<=40)
                {
                    printf("\nObeso.");
                }
                else
                    if(IMC>40)
                {
                    printf("\nObeso Mórbidoo.");
                }
                
                
            
        
    
    return 0;
}