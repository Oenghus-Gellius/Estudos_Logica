/*
Questão 04)
Escrever um programa que tenha como número de matrícula, as 3 notas obtidas por um 
aluno nas 3 verificações. Calcular a média de aproveitamento, 

-usando média ponderada, onde a maior nota tem peso 4, a segunda maior peso 3,5 e a menor peso 2,5.

A atribuição 
de conceitos obedece a tabela abaixo:
Média de Aproveitamento     Conceito
≥9,0                            A
≥7,5 e < 9,0                    B
≥6,0 e < 7,5                    C
≥4,0 e < 6,0                    D
< 4,0                           E
O programa deve escrever o número de matrícula do aluno, suas notas, a média de 
aproveitamento, o conceito correspondente e a mensagem: APROVADO se o conceito 
for A, B ou C e REPROVADO se o conceito for D ou E.
*/

#include <stdio.h>

int main (){
    int mat;
    float n1, n2, n3, maior, meio, menor, media;

    printf("\nInsira seu numero de matricula:");
    scanf("%d", &mat);
    printf("\nInsira a nota 1.:");
    scanf("%f", &n1);
    printf("\nInsira a nota 2.:");
    scanf("%f", &n2);
    printf("\nInsira a nota 3.:");
    scanf("%f", &n3);

if (n1>=n2 && n2>=n3)
{
    maior=n1;
    meio=n2;
    menor=n3;
}
if (n2>=n1 && n1>=n3)
{
    maior=n2;
    meio=n1;
    menor=n3;
}
if (n1>=n3 && n3>=n2)
{
    maior=n1;
    meio=n3;
    menor=n2;
}
if (n3>=n2 && n2>=n1)
{
    maior=n3;
    meio=n2;
    menor=n1;
}
if (n3>=n1 && n1>=n2)
{
    maior=n3;
    meio=n1;
    menor=n2;
}
if (n2>=n3 && n3>=n1)
{
    maior=n2;
    meio=n3;
    menor=n1;
}

media=((maior*4)+(meio*3.5)+(menor*2.5))/3;

if (media>=9)
{
    printf("\nSua matricula é %d, Suas notas AV1:%.1f AV2:%.1f AV3:%.1f Media.: %.1f CONCEITO A - APROVADO!",mat,n1,n2,n3,media);
}
if (media>=7.5 && media<9)
{
    printf("\nSua matricula é %d, Suas notas AV1:%.1f AV2:%.1f AV3:%.1f Media.: %.1f CONCEITO B - APROVADO!",mat,n1,n2,n3,media);
}
if (media>=6 && media<7.5)
{
    printf("\nSua matricula é %d, Suas notas AV1:%.1f AV2:%.1f AV3:%.1f Media.: %.1f CONCEITO C - APROVADO!",mat,n1,n2,n3,media);
}
if (media>=4 && media<6)
{
    printf("\nSua matricula é %d, Suas notas AV1:%.1f AV2:%.1f AV3:%.1f Media.: %.1f CONCEITO D - REPROVADO!",mat,n1,n2,n3,media);
}
if (media<4)
{
    printf("\nSua matricula é %d, Suas notas AV1:%.1f AV2:%.1f AV3:%.1f Media.: %.1f CONCEITO E - REPROVADO!",mat,n1,n2,n3,media);
}
    
    return 0;
}