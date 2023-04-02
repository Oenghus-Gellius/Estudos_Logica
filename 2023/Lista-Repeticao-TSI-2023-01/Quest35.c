/*
35) Escrever um programa que leia um conjunto de 50 informações contendo, cada uma delas, a 
altura e o sexo de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o 
seguinte: 
a) a maior e a menor altura da turma
b) a média da altura das mulheres
c) a média da altura da turma.
d) A maior e a menor altura dos homens
*/
#include<stdio.h>
int main(){
    int sexo,i,start=1;
    float altura,maiorAlt,menorAlt,mediaMulher=0,mediaTurma=0,maiorHomem,menorHomem;
    const int TURMA=50;

    for (i = 0; i < TURMA; i++)
    {
        printf("\nInsira a altura.:");
        scanf("%f",&altura);
        printf("1-Masculino\t2-Feminino\nInsira o sexo.:");
        scanf("%d",&sexo);
        
        if (i==0)
        {
            maiorAlt=altura;
            menorAlt=altura;
        }
        if (maiorAlt<altura)
        {
            maiorAlt=altura;
        }
        else
            if (menorAlt>altura)
            {
                menorAlt=altura;
            }
        if (sexo==2)
        {
            mediaMulher=mediaMulher+altura;
        }
        mediaTurma=mediaTurma+altura;
        if (sexo==1)
        {
            if (start==1)
            {
                maiorHomem=altura;
                menorHomem=altura;
            }
            if (maiorHomem<altura)
            {
                maiorHomem=altura;
            }
            else
                if (menorHomem<altura)
                {
                    menorHomem=altura;
                }   
        } 
    }
    printf("\n%.2f\tÉ a maior altura.",maiorAlt);
    printf("\n%.2f\tÉ a menor altura.",menorAlt);
    printf("\n%.2f\tÉ a media da altura das mulheres.",mediaMulher);
    printf("\n%.2f\tÉ a media da altura da Turma.",mediaTurma);
    printf("\n%.2f\tÉ a maior altura de homem da Turma.",maiorHomem);
    printf("\n%.2f\tÉ a Menor altura de homem da Turma.",menorHomem);

    return 0;
}
