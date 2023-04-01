/*
8) Faça um programa que leia um conjunto de 50 informações contendo, cada uma delas, a altura e
o sexo de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o seguinte:
a) a maior e a menor altura da turma;
b) a média da altura das mulheres;
c) a média da altura da turma;
d) A maior e a menor altura dos homens
*/
#include<stdio.h>
int main(){
    int sexo,i,start=1,startH=1;
    float alt,maiorAlt,menorAlt,altTotal=0,mediaAlt,maiorH,menorH;
    const int TOTAL = 50;

    for (i = 0; i < TOTAL; i++)
    {
        printf("\nCódigo:\t1-masculino\t2-feminino\nInsira o sexo.:");
        scanf("%d",&sexo);
        printf("Insira a Altura.:");
        scanf("%f",&alt);

        if (start==1)//definindo valores as vaiaveis maior e menor altura
        {
            maiorAlt=alt;
            menorAlt=alt;
            start=0;
        }
        if (maiorAlt<=alt)//maior alt
        {
            maiorAlt=alt;
        }
        else//menor alt
            if (menorAlt>=alt)
            {
                menorAlt=alt;
            }
        
        altTotal=altTotal+alt;

        if (sexo==1)
        {
            if (startH==1)
            {
                maiorH=alt;
                menorH=alt;
                startH=0;
            }
            if (maiorH<alt)
            {
                maiorH=alt;
            }
            else
                if (menorH>alt)
                {
                    menorH=alt;
                }
        }
    }
    mediaAlt=altTotal/TOTAL;
    printf("\nA menor Altura é.:%.2f",menorAlt);    
    printf("\nA maior altura é.:%.2f",maiorAlt);
    printf("\nA media da altura da turma é.:%.2f",mediaAlt);
    printf("\nO menor homem é.:%.2f",menorH);
    printf("\nO maior homem é.:%.2f",maiorH);
    return 0;
}