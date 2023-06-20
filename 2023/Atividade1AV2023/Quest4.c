/*
Autor.: Bolívar Augusto Dias Jr
Data.: 30/03-23
Questão 04)
Faça um programa para determinar a situação (APROVADO/EXAME/REPROVADO) de
um aluno, dado a sua frequência (FREQ) (porcentagem de 0 a 100%) e sua nota (NOTA)
(nota de 0.0 a 10.0), sendo que:
Condição                                                Situação
Freqüência até 75%                                      Reprovado
Freqüência entre 75% e 100% e Nota até 3.0              Reprovado
Freqüência entre 75% e 100% e Nota de 3.0 até 7.0       Exame
Freqüência entre 75% e 100% e Nota entre 7.0 e 10.0     Aprovado
*/
#include <stdio.h>

int main(){
    int freq,nota,exame;

    printf("insira sua frequencia em %%.:");
    scanf("%d",&freq);
    if (freq>=0 && freq<=100)
    {
        printf("Insita sua nota.:");
        scanf("%d",&nota);
        if (nota>=0 && nota<=10)
        {
            printf("\nSITUÇÃO!");
            if (freq<75)
            {
                printf("\nREPROVADO!!!");
            }
            else
                if (nota<3)
                {
                    printf("\nREPROVADO!!!");
                }
                else
                    if (nota>=3 && nota<7)
                    {
                        printf("\nEXAME!!!");
                    }
                    else
                        if (nota>=7 && nota<=107)
                        {
                            printf("\nAPROVADO!!!");
                        }
        }
        else
        {
            printf("Não é um valor aceitavo de nota.");
        }
    }
    else
    {
        printf("Não é um valor aceito de frequencia.");
    }

    return 0;
}