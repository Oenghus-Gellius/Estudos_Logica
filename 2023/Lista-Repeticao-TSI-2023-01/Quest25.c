/*
25) Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, 
sexo (M/F) e salário. Faça um programa que informe: 
a) a média de salário do grupo; 
b) maior e menor idade do grupo; 
c) quantidade de mulheres com salário até R$5000,00.
Encerre a entrada de dados quando for digitada uma idade negativa.
*/
#include <stdio.h>
int main(){
    int idade,sexo,count=0,mulherSal5000=0;
    float salario,somaSal=0,mediaSal,maiorSal,menorSal;

    do
    {
        printf("Informe a idade.:");
        scanf("%d",&idade);
        if (idade>0)
        {
            printf("1-Homem\t2-Mulher\nQual seu sexo.:");
            scanf("%d",&sexo);
            printf("Qual seu salario.:");
            scanf("%f",&salario);

            somaSal=somaSal+salario;

            if (count==0)
            {
                maiorSal=salario;
                menorSal=salario;
            }
            if (maiorSal<salario)
            {
                maiorSal=salario;
            }
            else
                if (menorSal>salario)
                {
                    menorSal=salario;
                }
                
            if (sexo==2)
            {
                if (salario>=5000)
                {
                    mulherSal5000++;
                }
                
            }
            count++;
        }
        
    }while(idade>0);

    if (count>0)
    {
        mediaSal=somaSal/count;

        printf("\nA media salarial é.:%.2f",mediaSal);
        printf("\nO maior Salario é.: %.2f",maiorSal);
        printf("\nO menor salario é.:%.2f",menorSal);
        printf("\nA quantidade de mulheres com salario superior a 5000,00 é.:%d",mulherSal5000);
    }
    

    return 0;
}