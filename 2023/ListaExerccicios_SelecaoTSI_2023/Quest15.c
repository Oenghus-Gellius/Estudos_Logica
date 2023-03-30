/*
15) Faça um algorimo que entre com a idade de uma pessoa e imprima o valor que ela deverá pagar
por um plano de saúde, segundo a
seguinte tabela:
Idade Valor
Até 10 anos R$ 30,00
Acima de 10 até 29 anos R$ 60,00
Acima de 29 até 45 anos R$ 120,00
Acima de 45 até 59 anos R$ 150,00
Acima de 59 até 65 anos R$ 250,00
maior que 65 anos R$ 400,00
*/
#include<stdio.h>

int main(){
    int idade,plano;

    printf("Insira sua idade.:");
    scanf("%d",&idade);

    if (idade>0)
    {
        if (idade<10)
        {
            printf("O valor do Plano é 30,00 Reais");
        }
        else
            if (idade>10 && idade<=29)
            {
                printf("O valor do Plano é 60,00 Reais");
            }
            else
                if (idade>29 && idade<=45)
                {
                    printf("O valor do Plano é 120,00 Reais");
                }
                else
                    if (idade>45 && idade<=59)
                    {
                        printf("O valor do Plano é 150,00 Reais");
                    }
                    else
                        if (idade>59 && idade<=65)
                        {
                            printf("O valor do Plano é 250,00 Reais");
                        }
                        else
                        {
                            printf("O valor do Plano é 400,00 Reais");
                        }
    }
    else
    {
        printf("Idade invalida!!!");
    }
    return 0;
}