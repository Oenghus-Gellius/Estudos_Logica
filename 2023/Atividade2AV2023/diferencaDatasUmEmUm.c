#include <stdio.h>

int main(){
    int dia1, dia2,
        mes1, mes2,
        ano1, ano2,
        dia1percorre,
        mes1percorre,
        ano1percorre,
        totalDias = 0;

    printf("Informe a primeira data: (DD/MM/AAA)\n");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    
    printf("Informe a segunda data: (DD/MM/AAA)\n");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    dia1percorre = dia1;
    mes1percorre = mes1;
    ano1percorre = ano1;

    while((dia1percorre != dia2) || (mes1percorre != mes2) || (ano1percorre != ano2)){ // Enquanto algum deles ainda for diferente, não chegou o dia
        totalDias++;  // Um dia a mais pra conta e abaixo determina o próximo dia, para ser verificado

        // Se o mes corrente for um dos que tem 31 dias, verifica se o próximo dia será dia 1º no caso de for o final do mes ou se será incrementado uma unidade.
        if(mes1percorre == 1 || mes1percorre == 3  || mes1percorre == 5 || mes1percorre == 7 || mes1percorre == 8 || mes1percorre == 10 || mes1percorre == 12){

            /* Se o dia corrente for 31, verifica se é do mes 12. Se for, volta o dia para 1, volta o mes para 1, e incrementa o ano. 
            *  Se o dia corrente for 31 e não for do mês 12, incrementa o mês e volta o dia para 1. 
            *  Se não, só aumenta o dia em uma unidade. 
            */
            if(dia1percorre == 31){
                dia1percorre = 1;
                if(mes1percorre == 12){
                    mes1percorre = 1;
                    ano1percorre++;
                }
                else
                    mes1percorre++;
            }
            else
                dia1percorre++;
        }
        else if(mes1percorre == 2){ // Se o mes corrente for 2
            // Se for ano bissexto
            if(ano1percorre % 400 == 0 || (ano1percorre % 4 == 0 && ano1percorre % 100 != 0)){
                // Se for o ultimo dia do mes
                if(dia1percorre == 29){
                    dia1percorre = 1;
                    mes1percorre++;
                }
                else
                    dia1percorre++;
            }
            else{
                // Se for o ultimo dia do mes
                if(dia1percorre == 28){
                    dia1percorre = 1;
                    mes1percorre++;
                }
                else
                    dia1percorre++;
            }
        }
        else{
            if(dia1percorre == 30){
                dia1percorre = 1;
                mes1percorre++;
            }
            else
                dia1percorre++;
        }

        printf("%d/%d/%d = %do. dia\n", dia1percorre, mes1percorre, ano1percorre, totalDias);
    } // while((dia1percorre != dia2) && (mes1percorre != mes2) && (ano1percorre !=ano2))

    printf("Total dias = %d", totalDias);
    return 0;
}