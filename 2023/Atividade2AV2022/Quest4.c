/*
Questão 04)
Em um prédio há três elevadores denominados A, B e C. Para otimizar o sistema de 
controle dos elevadores foi realizado um levantamento no qual cada usuário respondia:
a) O elevador que utilizava com mais frequência;
b) O andar a que se dirigia;
b) O período que utilizava o elevador, entre: 
M - Matutino;
V - Vespertino 
N - Noturno
Faça um programa que calcule e imprima:
 Qual é o elevador mais frequentado e em que período se concentra o 
maior fluxo;
 Qual a diferença entre o mais usado dos horários e o menos usado;
 O Elevador mais usado em cada período (suponha a inexistência de 
empate).
 O período mais utilizado;
 O período menos utilizado;
 O andar mais alto
*/
#include <stdio.h>
#include <locale.h>
int main(){
    int elevador,eleA=0,eleB=0,eleC=0;
    int periodo,perMat=0,perVes=0,perNot=0,diferPer;
    int perMatEleA=0,perMatEleB=0,perMatEleC;
    int perVesEleA=0,perVesEleB=0,perVesEleC=0;
    int perNotEleA=0,perNotEleB=0,perNotEleC=0;
    int andar,andarAlto=0;

    setlocale(LC_ALL,"Portuguese");

    do
    {
        printf("\n1-A\t2-B\t3-C\tSair=qualquer numero diferente dos citados.\nCodigo elevador ");
        scanf("%d",&elevador);
        if (elevador>0 && elevador<4)
        {
            printf("\n1 - Matutino;\t2 - Vespertino\t3 - Noturno\nInsira o periodo utilizado.:");
            scanf("%d",&periodo);
            printf("\nQual andar de destino.:");
            scanf("%d",&andar);
            switch (elevador)
            {
            case 1:
                eleA++;
                switch (periodo)
                {
                case 1:
                    perMat++;
                    perMatEleA++;
                    break;
                case 2:
                    perVes++;
                    perVesEleA++;
                    break;
                case 3:
                    perNot++;
                    perNotEleC++;
                    break;
                default:
                    break;
                }                
                break;
            case 2:
                eleB++;
                switch (periodo)
                {
                case 1:
                    perMat++;
                    perMatEleB++;
                    break;
                case 2:
                    perVes++;
                    perVesEleB++;
                    break;
                case 3:
                    perNot++;
                    perNotEleB++;
                    break;
                default:
                    break;
                }                         
                break;
            case 3:
                eleC++;
                switch (periodo)
                {
                case 1:
                    perMat++;
                    perMatEleC++;
                    break;
                case 2:
                    perVes++;
                    perMatEleC++;
                    break;
                case 3:
                    perNot++;
                    perNotEleC++;
                    break;
                default:
                    break;
                }         
                break;
            default:
                break;
            }

            if (andarAlto<andar)
            {
                andarAlto=andar;
            }
            
        }
    } while (elevador>0 && elevador<4);
    printf("\n\nRelatorio\n\n");
    if (eleA>=eleB && eleB>=eleC)
    {
        printf("\n%d\tO elevador A é o mais utilizado.",eleA);
        printf("\n%d\tO elevador C é o menos utilizado.",eleC);
    }
    else  
        if (eleB>=eleA && eleB>=eleC)
        {
            printf("\n%d\tO elevador B é o mais utilizado.",eleB);
            printf("\n%d\tO elevador C é o menos utilizado.",eleC);
        }
        else
            if (eleC>=eleA && eleC>=eleB)
            {
                printf("\n%d\tO elevador C é o mais utilizado.",eleC);
                printf("\n%d\tO elevador B é o menos utilizado.",eleB);
            }
            else    
                if (eleA>=eleC && eleC>=eleB)
                {
                    printf("\n%d\tO elevador A é o mais utilizado.",eleA);
                    printf("\n%d\tO elevador B é o menos utilizado.",eleB);
                }
                else
                    if (eleB>=eleC && eleC>=eleA)
                    {
                        printf("\n%d\tO elevador A é o mais utilizado.",eleB);
                        printf("\n%d\tO elevador B é o menos utilizado.",eleA);
                    }
                    else
                        if(eleC>=eleB && eleB<=eleA)
                        {
                            printf("\n%d\tO elevador C é o mais utilizado.",eleC);
                            printf("\n%d\tO elevador A é o menos utilizado.",eleA);
                        }
 
    if (perMat>=perVes && perVes>=perNot)
    {
        printf("\n%d\tO Periodo Matutino é o mais utilizado.",perMat);
        printf("\n%d\tO Periodo Noturno é o menos utilizado.",perNot);
        diferPer=perMat-perNot;
        printf("\n%d\t é a diferença entre o mais usado dos horários e o menos usado.",diferPer);
    }
    else  
        if (perVes>=perMat && perVes>=perNot)
        {
            printf("\n%d\tO Periodo Vespertino é o mais utilizado.",perVes);
            printf("\n%d\tO Periodo Noturno é o menos utilizado.",perNot);
            diferPer=perVes-perNot;
            printf("\n%d\t é a diferença entre o mais usado dos horários e o menos usado.",diferPer);            
        }
        else
            if (perNot>=perMat && perNot>=perVes)
            {
                printf("\n%d\tO Periodo Noturno é o mais utilizado.",perNot);
                printf("\n%d\tO Periodo Vespertino é o menos utilizado.",perVes);
                diferPer=perNot-perVes;
                printf("\n%d\t é a diferença entre o mais usado dos horários e o menos usado.",diferPer);    
            }
            else    
                if (perMat>=perNot && perNot>=perVes)
                {
                    printf("\n%d\tO Periodo Matutino é o mais utilizado.",perMat);
                    printf("\n%d\tO Periodo Vespertino é o menos utilizado.",perVes);
                    diferPer=perMat-perVes;
                    printf("\n%d\t é a diferença entre o mais usado dos horários e o menos usado.",diferPer);                        
                }
                else
                    if (perVes>=perNot && perNot>=perMat)
                    {
                        printf("\n%d\tO Periodo Matutino é o mais utilizado.",perVes);
                        printf("\n%d\tO Periodo Vespertino é o menos utilizado.",perMat);
                        diferPer=perVes-perMat;
                        printf("\n%d\t é a diferença entre o mais usado dos horários e o menos usado.",diferPer);                           
                    }
                    else
                        if(perNot>=perVes && perVes<=perMat)
                        {
                            printf("\n%d\tO Periodo Noturno é o mais utilizado.",perNot);
                            printf("\n%d\tO Periodo Matutino é o menos utilizado.",perMat);
                            diferPer=perNot-perMat;
                            printf("\n%d\t é a diferença entre o mais usado dos horários e o menos usado.",diferPer);                               
                        }            

    printf("\n%d\t é andar mais alto.",andarAlto);           
        
    return 0;
}