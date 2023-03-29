/*
17) O BB concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldo
médio no último ano. Fazer um algoritmo que leia o saldo médio de um cliente e calcule o valor do
crédito de acordo com a tabela a seguir. Imprimir uma mensagem informando o saldo médio e o
valor de crédito.
Saldo Médio Percentual
De 0 a 500 Nenhum crédito
De 501 a 1000 30% do valor do saldo médio
De 1001 a 3000 40% do valor do saldo médio
Acima de 3001 50% do valor do saldo médio
*/
#include<stdio.h>

int main(){
    float saldoMedio,credito;

    printf("Insira o valor do saldo medio do cliente.:");
    scanf("%f",&saldoMedio);

    if (saldoMedio>=0)
    {
        if (saldoMedio>=0 && saldoMedio<=500)
        {
            printf("\n\nSeu saldo meio é.: %.2f\tNão há limente de credito!",saldoMedio);
        }
        else
            if (saldoMedio>500 && saldoMedio<=1000)
            {
                credito=saldoMedio+saldoMedio*0.30;
                printf("\n\nSeu saldo meio é.: %.2f\tCredito no valor de %.2f",saldoMedio,credito);
            }
            else
                if (saldoMedio>1000 && saldoMedio<=3000)
                {
                    credito=saldoMedio+saldoMedio*0.40;
                    printf("\n\nSeu saldo meio é.: %.2f\tCredito no valor de %.2f",saldoMedio,credito);
                }
                else
                    if (saldoMedio>3000)
                    {
                        credito=saldoMedio+saldoMedio*0.50;
                        printf("\n\nSeu saldo meio é.: %.2f\tCredito no valor de %.2f",saldoMedio,credito);
                    }
                    
    }
    else
    {
        printf("\n\nSaldo inexistente.\n\n");
    }

    return 0;
}