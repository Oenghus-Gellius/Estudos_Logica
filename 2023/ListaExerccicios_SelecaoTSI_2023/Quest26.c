/*
26) Escrever um algoritmo para ler um peso na Terra, e o número de um planeta, e imprimir o valor
do seu peso neste planeta segundo a tabela abaixo.
número gravidade relativa g planeta
1 0,37 Mercúrio
2 0,88 Vênus
3 0,38 Marte
4 2,64 Júpiter
5 1,15 Saturno
6 1,17 Urano
Para calcular o peso no planeta use a fórmula
Pi = P terra gi
        10
*/
#include <stdio.h>
int main(){
    int planeta;
    float pesoTerra,pesoPlaneta;

    printf("Insira o Peso na Terra.:");
    scanf("%f",&pesoTerra);
    if (pesoTerra>=0)
    {
        printf("1 - Mercúrio\n2 - Vênus\n3 - Marte\n4 - Júpiter \n5 - Saturno \n6 - Urano\nSelecione o Planeta.:");
        scanf("%d",&planeta);

        switch (planeta)
        {
        case 1:
            pesoPlaneta=(pesoTerra/10)*0.37;
            printf("O peso em Mercurio é %.1f",pesoPlaneta);
            break;
        case 2:
            pesoPlaneta=(pesoTerra/10)*0.88;
            printf("O peso em Vênus é %.1f",pesoPlaneta);
            break;
        case 3:
            pesoPlaneta=(pesoTerra/10)*0.38;
            printf("O peso em Marte é %.1f",pesoPlaneta);
            break;
        case 4:
            pesoPlaneta=(pesoTerra/10)*2.64;
            printf("O peso em Júpiter é %.1f",pesoPlaneta);
            break;
        case 5:
            pesoPlaneta=(pesoTerra/10)*1.15;
            printf("O peso em Saturno é %.1f",pesoPlaneta);
            break;
        case 6:
            pesoPlaneta=(pesoTerra/10)*1.17;
            printf("O peso em Urano é %.1f",pesoPlaneta);
            break;        
        default:
            printf("Numero invalido de planeta.");
            break;
        }
    }
    else
    {
        printf("Peso Invalido!!");
    }
    
    
    return 0;
}