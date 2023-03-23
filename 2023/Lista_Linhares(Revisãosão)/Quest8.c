/*
8. Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e informa se ele 
está aprovado (média maior ou igual a 70), em exame final (média entre 40 e 69) ou 
reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a nota do 
exame (0 a 100) e informar se o aluno está aprovado (média mais nota do exame maior ou 
igual a 100) ou reprovado (média mais nota do exame menor do que 100). 
*/
#include <stdio.h>

int main(){
    float n1,n2,media,exameFim,totalFinal;

    printf("\nInsira a Primeira nota.:");
    scanf("%f",&n1);
    printf("\nInsira a Segunda nota.:");
    scanf("%f",&n2);

    media=n1+n2;

    if (media>=70)
    {
        printf("\nAprovado!!!");
    }
    if (media<70 && media>=40)
    {
        printf("\nEXAME FINAL!!!");
        printf("\nInsira a media do EXAME FINAL.:");
        scanf("%f",&exameFim);

        totalFinal=media+exameFim;

        if (totalFinal>=100)
        {
            printf("\nAprovado no EXAME FINAL!!!");
        }
        else
        {
            printf("\nReprovado no EXAME FINAL!!!");
        }
    }
    else
    {
        printf("\nREPROVADO!!!");
    }
    
    
    
    
    return 0;
}