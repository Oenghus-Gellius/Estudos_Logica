/*
Autor.: Bolívar Augusto Dias Jr
Data.: 30/03-23
Questão 01) 
Escrever um programa que tenha como número de matrícula, as 3 notas obtidas por um aluno
nas 3 verificações e a média dos exercícios que fazem parte da avaliação. Calcular a média de
aproveitamento, usando a fórmula:
MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7
A atribuição de conceitos obedece a tabela abaixo:
Média de Aproveitamento Conceito
≥9,0            A
≥7,5 e < 9,0    B
≥6,0 e < 7,5    C
≥4,0 e < 6,0    D
< 4,0           E
O programa deve escrever o número de matrícula do aluno, suas notas, a média dos
exercícios, a média de aproveitamento, o conceito correspondente e a mensagem:
APROVADO se o conceito for A, B ou C e REPROVADO se o conceito for D ou E.
*/

#include <stdio.h>

int main(){
    int mat;
    float n1,n2,n3,medEx,media;

    printf("Insira o numero de matricula.:");
    scanf("%d",&mat);
    if (mat>0)
    {
        printf("Insira A Primeira Nota.:");
        scanf("%f",&n1);
        printf("Insira A Segunda Nota.:");
        scanf("%f",&n2);
        printf("Insira A Terceira Nota.:");
        scanf("%f",&n3);
        printf("Insira a media dos exercicios.:");
        scanf("%f",&n3);        
        if (n1>=0 && n2>=0 && n3>=0)
        {
            media=(n1+n2*2+n3*3+medEx)/7; //MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7
            printf("\nSua media é.:\t%.2f",media);
            if (media>=9)
            {
                printf("\nConceito A!");
                printf("\nAPROVADO!");
            }
            else
                if (media>=7.5 && media<9)
                {
                    printf("\nConceito B!");
                    printf("\nAPROVADO!");
                }
                else
                    if (media>=6 && media<7.5)
                    {
                        printf("\nConceito C!");
                        printf("\nAPROVADO!");
                    }
                    else
                        if (media>=4 && media<6)
                        {
                            printf("\nConceito D!");
                            printf("\nREPROVADO!");
                        }
                        else
                            if (media<4)
                            {
                                printf("\nConceito E!");
                                printf("\nREPROVADO!");
                            }                 
        }
        else
        {
            printf("Não são notas validas!");
            return 0;
        }  
    }
    else
    {
        printf("Não é uma matricula valida!");
    }

    return 0;
}