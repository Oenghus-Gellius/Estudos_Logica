/*
9) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$2000,00.
*/
#include<stdio.h>
int main(){
    int filhos,i,start=1,cont2000=0,somaFilho=0;
    float salario,somaSal=0,mediaSal=0,maiorSal,porcentagem,mediaFilhos=0;

    i=0;
    do
    {
        printf("Insira o valor do salario.:");
        scanf("%f",&salario);
        if (salario>0)
        {
            printf("Quantos filhos.:");
            scanf("%d",&filhos);

            if (start==1)//c
            {
                maiorSal=salario;
                start=0;
            }
            if (maiorSal<=salario)//c
            {
                maiorSal=salario;
            }
            if (salario>=2000)
            {
                cont2000++;
            }
            somaSal=somaSal+salario;
            somaFilho=somaFilho+filhos;

            i++;
        }
        
    } while (salario>0);

    mediaSal=somaSal/i;//a
    mediaFilhos=(float)somaFilho/i;//b
    porcentagem=((float)cont2000/i)*100;

    if (i>0)
    {
        printf("\nA media salario da população é.:%.2f",mediaSal);
        printf("\nA media de filhos da população é.:%.1f",mediaFilhos);
        printf("\nO maior salario da população é.:%.2f",maiorSal);
        printf("\nA porcentagem de pessoas com salario acima de 2000,00 é.:%.1f%%",porcentagem);
    }
    
    
    
    return 0;
}