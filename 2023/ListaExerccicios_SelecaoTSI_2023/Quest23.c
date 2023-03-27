/*
23) O departamento que controla o índice de poluição do meio ambiente mantém 3 grupos de
indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de
0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 1º grupo são intimadas a suspenderem suas
atividades, se o índice cresce para 0,4 as do 1º e 2º grupo são intimadas a suspenderem suas
atividades e se o índice atingir 0,5 todos os 3 grupos devem ser notificados a paralisarem suas
atividades. Escrever um algoritmo que lê o índice de poluição medido e emite a notificação
adequada aos diferentes grupos de empresas. 
*/
#include<stdio.h>
int main(){
    float indicePol;

    printf("Insira o indice de poluição do meio ambiente.:");
    scanf("%f",&indicePol);

    if (indicePol>=0.05 && indicePol<=0.25)
    {
        printf("\nIndice de poluição aceitável");
    }
    else
        if (indicePol>=0.3 && indicePol<=0.4)
        {
            printf("\nAs industrias do 1º grupo estão intimadas a suspenderem suas atividades");
        }
        else
            if (indicePol>0.4 && indicePol<=0.5)
            {
                printf("\nAs industrias do 1º e 2º grupo estão intimadas a suspenderem suas atividades");
            }
            else
            {
                printf("\nAs industrias do 1º, 2º e 3º grupo estão intimadas a suspenderem suas atividades");
            }
    
    return 0;
}