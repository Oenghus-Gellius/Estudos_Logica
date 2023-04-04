/*
Questão 01)
A delegacia de polícia de Alvinópolis City conta com somente 3 policiais: o chefe de 
polícia João, e os policiais Pedro e Maria. Como é de se esperar, esse pequeno 
contingente de policiais não consegue atender imediatamente a todos os chamados 
policiais. Portanto, você foi contratado para criar um sistema de atendimento, de maneira 
que cada um dos policiais fique com um conjunto equilibrado de chamados.
Considere os requisitos:
Cada ocorrência deve ser de um tipo, e as mesmas tem um código: 
1 – Direção Perigosa, 2 - Barulho, 3 – Bebedeira, 4 - Hero
 Cada ocorrência deve ser de um nível de gravidade: Baixo, Médio, Alto;
 Toda ocorrência do tipo Hero tem nível de gravidade alto;
 Novas ocorrências devem ser atribuídas ao policial com menos ocorrências;
 Ocorrências do tipo Hero sempre são atribuídas ao chefe de polícia;
A cada registro de ocorrência o sistema deve imprimir a quantidade de ocorrências de 
cada policial. Mostrar no final o total de cada tipo de ocorrência e o número de cada nível 
de gravidade das ocorrências. O término da entrada de dados é identificado por um tipo 
de ocorrência diferente das descritas anteriormente.
*/
#include<stdio.h>
int main(){
    int ocorrencia,nivel,chefPol=0,Joao=0,Pedro=0,Maria=0;
    int totalOcorrencia=0,dirPer=0,barulho=0,bebedeira=0,hero=0;
    int nbaixo=0,nMed=0,nAlt=0;

    do
    {
        printf("\n1 - Direção Perigosa \t2 - Barulho \t3 - Bebedeira \t4 - Heron\nTipo de ocorrencia>:");
        scanf("%d",&ocorrencia);
        if (ocorrencia>0 && ocorrencia<5)
        {
            switch (ocorrencia)
            {
            case 1://Direção Perigosa
                printf("\n1-Baixo\t2-Médio-3\tAlto\nNivel da ocorrencia.:");
                scanf("%d",&nivel);
                dirPer++;
                if (nivel==1)
                {
                    nbaixo++;
                }
                else
                    if (nivel==2)
                    {
                        nMed++;
                    }
                    else    
                        if (nivel==3)
                        {
                            nAlt++;
                        }
                if (Joao<=Maria && Joao<=Pedro)
                {
                    Joao++;
                }
                else
                    if (Pedro<=Joao && Pedro<=Maria)
                    {
                        Pedro++;
                    }
                    else
                        if (Maria<=Joao && Maria<=Pedro)
                        {
                            Maria++;
                        }                
                break;
            case 2://Barulho
                printf("\n1-Baixo\t2-Médio-3\tAlto\nNivel da ocorrencia.:");
                scanf("%d",&nivel);
                barulho++;
                if (nivel==1)
                {
                    nbaixo++;
                }
                else
                    if (nivel==2)
                    {
                        nMed++;
                    }
                    else    
                        if (nivel==3)
                        {
                            nAlt++;
                        }
                if (Joao<=Maria && Joao<=Pedro)
                {
                    Joao++;
                }
                else
                    if (Pedro<=Joao && Pedro<=Maria)
                    {
                        Pedro++;
                    }
                    else
                        if (Maria<=Joao && Maria<=Pedro)
                        {
                            Maria++;
                        }
                break;
            case 3:// Bebedeira
                printf("\n1-Baixo\t2-Médio-3\tAlto\nNivel da ocorrencia.:");
                scanf("%d",&nivel);
                bebedeira++;
                if (nivel==1)
                {
                    nbaixo++;
                }
                else
                    if (nivel==2)
                    {
                        nMed++;
                    }
                    else    
                        if (nivel==3)
                        {
                            nAlt++;
                        }
                if (Joao<=Maria && Joao<=Pedro)
                {
                    Joao++;
                }
                else
                    if (Pedro<=Joao && Pedro<=Maria)
                    {
                        Pedro++;
                    }
                    else
                        if (Maria<=Joao && Maria<=Pedro)
                        {
                            Maria++;
                        }                        
                break;
            case 4://hero
                hero++;
                nAlt++;
                chefPol++;
                break;
            default:
                break;
            }
            totalOcorrencia++;

            printf("\n\n------Relatorio------\n\n");
            printf("\n%d\tOcorrencia Chefe de Policia.",chefPol);
            printf("\n%d\tOcorrencia Policial Joao.",Joao);
            printf("\n%d\tOcorrencia Policial Pedro.",Pedro);
            printf("\n%d\tOcorrencia Policial Maria.",Pedro);
        }
    } while (ocorrencia>0 && ocorrencia<5);
    
    printf("\n\nRelatorio Final\n\n");
    printf("\n%d\tDireção Perigosa.",dirPer);
    printf("\n%d\tBarulho.",barulho);
    printf("\n%d\tBebedeira.",bebedeira);
    printf("\n%d\tHero.",hero);
    printf("\n%d\tBaixo.",nbaixo);
    printf("\n%d\tMédio.",nMed);
    printf("\n%d\tAlto.",nAlt);

    return 0;
}
