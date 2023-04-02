/*
36) Faça um programa que mostre os conceitos finais dos alunos de uma classe de 75 alunos, 
considerando:
a) os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo 
usuário;
b) a tabela de conceitos segue abaixo:
Nota            Conceito
de 0,0 a 4,9    D
de 5,0 a 6,9    C
de 7,0 a 8,9    B
de 9,0 a 10,0   A
*/
#include<stdio.h>
int main(){
    const int NA=7;
    int mat,i;
    float nota;

    for (i = 0; i < NA; i++)
    {
        printf("\nInsira o numero de matricula.:");
        scanf("%d",&mat);
        printf("\nInsira a nota final.:");
        scanf("%f",&nota);
        if (nota<5)
        {
            printf("\n\nCONVEITO D!!!\n\n");
        }
        else
            if (nota<7)
            {
                printf("\n\nCONVEITO C!!!\n\n");
            }
            else
                if (nota<9)
                {
                    printf("\n\nCONVEITO B!!!\n\n");
                }
                else
                {
                    printf("\n\nCONVEITO A!!!\n\n");
                }
    }
    return 0;
}