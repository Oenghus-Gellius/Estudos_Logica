/*
Questão 04)
Como consequência direta de uma das piores secas foi o aumento da tarifa de água. Os 
recém-casados Pedrinho e Virgininha decidiram manter todos os seus gastos sob 
controle. Joãozinho então decidiu medir diariamente o seu consumo de água, fazendo a 
leitura do hidrômetro de sua bela casa, e registrando a medida. 
Alguns dias Pedrinho efetua a leitura, e em outros a Virgininha. Dessa forma, eles são 
capazes de olhar a diferença de consumo entre dois dias consecutivos e saber quanto de 
água eles gastaram. 
Porém em alguns dias eles simplesmente esqueceram de efetuar a leitura, e 
assim, após um longo tempo, seu registro de consumo tornou-se incompleto. Eles têm 
uma lista de datas e consumo, mas nem todas as datas são consecutivas em virtude dos 
dias em que eles não efetuaram a leitura do hidrômetro. 
Eles desejam levar em conta apenas os dias onde o consumo pode ser precisamente determinado, 
e precisam de sua ajuda em uma ferramenta para auxiliá-los. 
------
Tal ferramenta deverá ler um inteiro N indicando o número de medidas que foram realizadas. 
Cada leitura é representada por 4 valores inteiros que representam 
respectivamente: Dia, Mês, Ano e o consumo lido no início de cada dia. 

Os valores referentes as leituras serão informados de forma crescente 
pela data, e pode incluir anos bissextos. A sequência de consumo também é crescente, 
ou seja, não existem duas leituras com o mesmo valor. Você deve assumir que as datas 
fornecidas sejam válidas. 
Um ano é bissexto ser for divisível por 4 e não divisível por 100 ou divisível por 400. 

Como saída seu programa deve informa o número de dias em que o consumo 
pode ser precisamente determinado e a soma do consumo nesses dias. 
Exemplo de Entrada 
8 
28  2 1978 112 
1   3 1978 113 
28  2 1980 220 
1   3 1980 221 
5   11 1980 500 
14  11 2008 600 
15  11 2008 790 
16  12 2008 810 
*/
#include<stdio.h>
int main()
{
    int numMedicao,count;
    int diaEnt,mesEnt,anoEnt,diaAnterio,mesAnterio,anoAnterio;
    int diaDifrenca,mesDiferenca,anodiferenca;
    int totalDias=0;
    int consumoAnterior,consumoAtual,consumoIntervalo,consumoTotal=0;
    
    printf("\nInsira a quantidade de leituras realizadas.:");
    scanf("%d",&numMedicao);

    for (count = 0; count < numMedicao; count++)
    {
        printf("Insira a data de leitura!");
        printf("\nDia.:");
        scanf("%d",&diaEnt);
        printf("\nMes.:");
        scanf("%d",&mesEnt);
        printf("\nAno.:");
        scanf("%d",&anoEnt);
        printf("\nInsira o consumo em Litros.:");
        scanf("%d",&consumoAtual);

        if (count==0)
        {
            diaAnterio=diaEnt;
            mesAnterio=mesEnt;
            anoAnterio=anoEnt;
            diaDifrenca=diaEnt;
            mesDiferenca=mesEnt;
            anodiferenca=anoEnt;
            consumoTotal=-consumoAtual;
        }
        
        while (diaDifrenca!=diaEnt || mesDiferenca!=mesEnt || anodiferenca!=anoEnt)
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
                    if (anodiferenca % 400==0 || (anodiferenca % 4==0 && anodiferenca % 100 != 0))
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
        
        consumoIntervalo=consumoAtual-consumoAnterior;
        consumoTotal=consumoTotal+consumoIntervalo;

        // Atualiza as variáveis para a próxima interação
        diaAnterio=diaEnt;
        mesAnterio=mesEnt;
        anoAnterio=anoEnt;
        consumoAnterior=consumoAtual;
        consumoIntervalo=0;
    }
    if (numMedicao>0)
    {
        printf("\n%d Total de dias aferidos e %d litros consumidos",totalDias,consumoTotal);
    }
    else
    {
        printf("Não ha leirura!");
    }

    return 0;
}