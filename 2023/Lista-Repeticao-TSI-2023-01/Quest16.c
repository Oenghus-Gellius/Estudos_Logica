/*
16) Escreva um programa que leia o código de um aluno e suas três notas. Calcule a média 
ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. 
Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a 
média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5. Repita a operação até 
que o código lido seja negativo. 
*/
#include<stdio.h>

int main(){
    int mat;
    float nota1,nota2,nota3,notaMaior,media;

    do
    {
        printf("\nInsira a matricula.:");
        scanf("%d",&mat);
        if (mat>0)
        {
            printf("Insira o valor da Primeira nota.:");
            scanf("%f",&nota1);
            printf("Insira o valor da Segunda nota.:");
            scanf("%f",&nota2);
            printf("Insira o valor da Terceira nota.:");
            scanf("%f",&nota3);
        }
        if (nota1>=nota2 && nota2>=nota3)
        {
            media=((nota1*4)+(nota2*3)+(nota3*3))/10;
        }
        else
            if (nota2>=nota1 && nota1>=nota3)
            {
                media=((nota2*4)+(nota1*3)+(nota3*3))/10;
            }
            else
            {
                media=((nota3*4)+(nota2*3)+(nota1*3))/10;
            }

        if (mat>0)
        {
            printf("\nA media ponderado do Aluno com a matricula %d é.: %.2f",mat,media);

            if (media>=5)
            {
                printf("\nAluno da matricula %d está APROVADO!!!",mat);
            }
            else
            {
                printf("\nAluno da matricula %d está REPROVADO!!!",mat);
            }
        }
        else
        {
            printf("Fim da consulta!!");
        }
        
        
    } while (mat>0);
    

    return 0;
}