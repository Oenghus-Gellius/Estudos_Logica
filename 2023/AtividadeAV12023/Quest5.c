/*
Autor.: Bolívar Augusto Dias Jr
Data.: 30/03-23
Faça um programa que tenha como entrada o código da instituição financeira e o saldo de
um cliente e apresente sua classificação. Validar os dados de entrada.
*/
#include <stdio.h>

int main(){
    int inst, saldo;

    printf("\n1- Banco Central de Alvinópolis City - BCA \n2- Casa da Moeda de Alvinópolis City\n3- Banco Cota\n Insira o codigo da Instituição.:");
    scanf("%d",&inst);
    if (inst>0 && inst<4)
    {
        printf("\nInsira o saldo do cliente.:");
        scanf("%d",&saldo);
        if (saldo>0)
        {
        switch (inst)
        {
        case 1:
            printf("\nBanco Central de Alvinópolis City - BCA");
            if (saldo>=10000000)
            {
                printf("\nCLiente 5 Estrelas.");
            }
            else
                if (saldo<10000000 && saldo>500000)
                {
                    printf("\nCLiente 3 Estrelas.");
                }
                else
                {
                    printf("\nCLiente 1 Estrelas.");
                }
            break;
        case 2:
            printf("\nCasa da Moeda de Alvinópolis City");
            if (saldo>=100000000)
            {
                printf("\nCLiente Especial.");
            }
            else
                if (saldo<100000000 && saldo>5000000)
                {
                    printf("\nCLiente Quase Especial.");
                }
                else
                {
                    printf("CLiente Normal.");
                }
            break;
        case 3:
            printf("\nBanco Cota");
            if (saldo>=10000000)
            {
                printf("\nCLiente VIP.");
            }
            else
                if (saldo<100000000 && saldo>50000000)
                {
                    printf("\nCLiente Middle.");
                }
                else
                {
                    printf("\nCLiente Usual.");
                }
            break;
        default:
            break;
        }
        }
        else
        {
            printf("Saldo insuficiente!!!");
        }
    }
    else
    {
        printf("\n\nInstituição não encontrada!!!");
    }
    
    
    return 0;
}