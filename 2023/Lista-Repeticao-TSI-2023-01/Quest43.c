/*
43) Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados: 
sexo (0-feminino, 1-masculino), idade e altura. Faça um programa que leia as informações coletadas 
e mostre as seguintes informações: 
a) média da idade do grupo; 
b) média da altura das mulheres; 
c) média da idade dos homens; 
d) percentual de pessoas com idade entre 18 e 35 anos (inclusive).
*/
#include <stdio.h>
int main(){
    const int POP = 5;
    int i,sexo,idade,qtdMulher=0,qtdhomem=0,qtdCut=0;
    float altura,mediaId=0,MedAltMul=0,mediaIdHom=0,percCut;

    for (i = 0; i < POP; i++)
    {
        printf("\n0-feminino\t 1-masculino\nSexo.:");
        scanf("%d",&sexo);
        printf("\nIdade.:");
        scanf("%d",&idade);
        printf("\nAltura.:");
        scanf("%f",&altura);
        mediaId=mediaId+idade;
        if (sexo==0)
        {
            MedAltMul=MedAltMul+altura;
            qtdMulher++;
        }
        if (sexo==1)
        {
            mediaIdHom=mediaIdHom+idade;
            qtdhomem++;
        }
        if (idade>=18 && idade<=35)
        {
            qtdCut++;
        }
    }
    mediaId=mediaId/(float)POP;
    MedAltMul=MedAltMul/(float)qtdMulher;
    mediaIdHom=mediaIdHom/(float)qtdhomem;
    percCut=((float)qtdCut/POP)*100;

    printf("\n%.1f\tÉ a media de idade do Grupo.",mediaId);
    printf("\n%.1f\tÉ a media da altura das mulheres",MedAltMul);
    printf("\n%.1f\tÉ a media de idade dos homens.",mediaIdHom);
    printf("\n%.1f%%\tÉ o Percentual de pessaos entre 18 e 35 anos.",percCut);

    return 0;
}