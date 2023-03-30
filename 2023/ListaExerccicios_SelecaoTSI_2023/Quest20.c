/*
20) Faça um algoritmo para determinar a situação (APROVADO/EXAME/REPROVADO) de um
aluno, dado a sua freqüência (FREQ) (porcentagem de 0 a 100%) e sua nota (NOTA) (nota de 0.0 a
10.0), sendo que:
Condição Situação
Freqüência até 75% Reprovado
Freqüência entre 75% e 100% e Nota até 3.0 Reprovado
Freqüência entre 75% e 100% e Nota de 3.0 até 7.0 Exame
Freqüência entre 75% e 100% e Nota entre 7.0 e 10.0 Aprovado
*/
#include<stdio.h>
int main(){
    int freq;
    float nota,notaExame, notaFinal;

    printf("Insira sua frequencia.:");
    scanf("%d",&freq);

    if (freq>=0 && freq<=100)
    {
        printf("Insira sua nota.:");
        scanf("%f",&nota);

        if (nota>=0 && nota<=10)
        {
            if (freq<75)
            {
                printf("Reprovado!!!");
            }
            else
                if (freq>=75 && nota<=3.0)
                {
                    printf("Reprovado!!!");
                }
                else
                    if (freq>=75 && (nota>=3.0 && nota<7.0))
                    {
                        printf("\nEXAME FINAL!!!");
                        printf("\nInsira a nota de Exame final.:");
                        scanf("%f",&notaExame);
                        notaFinal=(nota+notaExame)/2;
                        if (notaFinal>=7.0)
                        {
                            printf("\nNota final %.1f\n",notaFinal);
                            printf("Aprovado!!!");
                        }
                        else
                        {
                            printf("Reprovado!!!");
                        }
                    }
                    else
                        if (freq>=75 && nota>=7.0)
                        {
                            printf("Aprovado!!!");
                        }    
        }
    }
    else
    {
        printf("Frequencia incorreta.");
    }
    return 0;
}