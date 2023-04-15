/*
Questão 02) 
Faça um programa que leia duas datas, sendo cada uma formada por dia, mes e ano. Seu 
programa deve mostrar o número de dias transcorrridos da data inicial até a data final.
Obs. O ano é bissexto se for divisível por 4 e não divisível por 100 ou divisível por 400
*/
#include <stdio.h>

int main(){
    int diaEnt,mesEnt,anoEnt,diaFim,mesFim,anoFim;
    int diaDifrenca,mesDiferenca,anodiferenca;
    int totalDias=0;

    printf("\nDia inicia.:");
    scanf("%d",&diaEnt);
    printf("\nMes inicial");
    scanf("%d",&mesEnt);
    printf("\nAno inicial");
    scanf("%d",&anoEnt);

    printf("\nDia Final.:");
    scanf("%d",&diaFim);
    printf("\nMes Final");
    scanf("%d",&mesFim);
    printf("\nAno Final");
    scanf("%d",&anoFim);

    diaDifrenca=diaEnt;
    mesDiferenca=mesEnt;
    anodiferenca=anoEnt;

    while (diaDifrenca!=diaFim || mesDiferenca!=mesFim || anodiferenca!=anoFim)
    {
        totalDias++;
        if (mesDiferenca == 1 || mesDiferenca == 3 || mesDiferenca == 5 || mesDiferenca == 7 || mesDiferenca == 8 ||mesDiferenca == 10 || mesDiferenca == 12)
        {
            if (diaDifrenca == 31)
            {
                diaDifrenca=1;
                if (mesDiferenca==12)
                {
                    mesDiferenca=1;
                    anodiferenca++;
                }
                else
                {
                    mesDiferenca++;
                }  
            }
            else
            {
                diaDifrenca++;
            }  
        }
        else//possivel bissexto
            if (mesDiferenca == 2)
            {
                if (anodiferenca % 400==0 || (anodiferenca % 4==0 && anodiferenca != 0))
                {
                    if (diaDifrenca==29)
                    {
                        diaDifrenca=1;
                        mesDiferenca++;
                    }
                    else
                    {
                        diaDifrenca++;
                    } 
                }
                else
                    if (diaDifrenca==28)
                    {
                        diaDifrenca=1;
                        mesDiferenca++;
                    }
                    else
                    {
                        diaDifrenca++;
                    }
            }
            else
            {
                if (diaDifrenca==30)
                {
                    diaDifrenca=1;
                    mesDiferenca++;
                }
                else
                {
                    diaDifrenca++;
                }
            }
    }
    printf("O número de dias transcorridos entre as duas datas é: %d dias\n",totalDias);

    return 0;
}