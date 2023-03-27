/*
22) Faça um algoritmo que leia os dígitos (somente os quatro números) de uma placa de veículo, e
através do último algarismo da placa (algarismo da casa das unidades) determine o mês para
pagamento do IPVA do veículo.
Algarismo Mês
1, 2 Janeiro
3, 4 Fevereiro
5, 6, 7 Março
8 Abril
9, 0 Maio
*/

#include <stdio.h>

int main(){
    int placa,dig1000,dig100,dig10,dig1;

    printf("Insira o numeor da sua placa.:");
    scanf("%d",&placa);

    if (placa>999 && placa<10000)
    {
        dig1000=placa/1000;
        placa=placa%1000;
        dig100=placa/100;
        placa=placa%100;
        dig10=placa/10;
        placa=placa%10;
        dig1=placa/1;
        placa=placa%1;
    }
    printf("\n\nIPVA\n\n");
    printf("Placa.: %d - %d - %d - %d",dig1000,dig100,dig10,dig1);
    if (dig1==1 || dig1==2)
    {
        printf("\nPagamento mes - Janeiro.");
    }
    else
        if (dig1==3 || dig1==4)
        {
            printf("\nPagamento mes - Fevereiro.");
        }
        else
            if (dig1==5 || dig1==6 || dig1==7)
            {
                printf("\nPagamento mes - Março.");
            }
            else
                if (dig1==8)
                {
                    printf("\nPagamento mes - Abril.");
                }
                else
                {
                    printf("\nagamento mes - Maio.");
                }
                
    return 0;
}