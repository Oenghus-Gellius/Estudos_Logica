/*
A delegacia de polícia de Alvinópolis City conta com somente 3 policiais: o chefe de 
polícia João, e os policiais Pedro e Maria. Como é de se esperar, esse pequeno 
contingente de policiais não consegue atender imediatamente a todos os chamados 
policiais. Portanto, você foi contratado para criar um sistema de atendimento, de 
maneira que cada um dos policiais fique com um conjunto equilibrado de chamados. 
Considere os requisitos: 
Cada ocorrência deve ser de um tipo, e as mesmas tem um código: 
1 – Direção Perigosa, 2 - Barulho, 3 – Bebedeira, 4 - Hero 
• Cada ocorrência deve ser de um nível de gravidade: Baixo, Médio, Alto; 
• Toda ocorrência do tipo Hero tem nível de gravidade alto; 
• Novas ocorrências devem ser atribuídas ao policial com menos ocorrências; 
• Ocorrências do tipo Hero sempre são atribuídas ao chefe de polícia; 
A cada registro de ocorrência o sistema deve imprimir a quantidade de ocorrências de 
cada policial. Mostrar no final o total de cada tipo de ocorrência e o número de cada 
nível de gravidade das ocorrências. O término da entrada de dados é identificado por 
um tipo de ocorrência diferente das descritas anteriormente.
*/
#include <stdio.h>

int main(){
    int tipOcorrencia,dirPerigosa=0,barulho=0,bebedeira=0,hero=0,totalOcorrencia=0;
    int nivOcorrencia,baixo=0,media=0,alto=0;
    int chefe=0,pedro=0,maria=0;

    do
    {
        printf(":\n 1 - Direcao Perigosa, 2 - Barulho, 3 - Bebedeira, 4 - Hero\nInsira o tipo de Ocorrencia.:");
        scanf("%d",&tipOcorrencia);

        if (tipOcorrencia>0 && tipOcorrencia<5)
        {
            switch (tipOcorrencia)
            {
            case 1://direçaõ peirgosa
                printf("n 1 - Baixa, 2 - Media, 3 - Alta\nInsira o codigo da ocorrencia");
                scanf("%d",&nivOcorrencia);
                dirPerigosa++;
                switch (nivOcorrencia)
                {
                case 1://baixo
                    baixo++;
                    break;
                case 2://medio
                    media++;
                    break;
                case 3://alto
                    alto++;
                    break;
                default:
                    break;
                }
                break;
            case 2://barulho
                printf("n 1 - Baixa, 2 - Media, 3 - Alta\nInsira o codigo da ocorrencia");
                scanf("%d",&nivOcorrencia);
                barulho++;
                switch (nivOcorrencia)
                {
                case 1://baixo
                    baixo++;
                    break;
                case 2://medio
                    media++;
                    break;
                case 3://alto
                    alto++;
                    break;
                default:
                    break;
                }
                break;
            case 3://bebedeira
                printf("n 1 - Baixa, 2 - Media, 3 - Alta\nInsira o codigo da ocorrencia");
                scanf("%d",&nivOcorrencia);
                bebedeira++;
                switch (nivOcorrencia)
                {
                case 1://baixo
                    baixo++;
                    break;
                case 2://medio
                    media++;
                    break;
                case 3://alto
                    alto++;
                    break;
                default:
                    break;
                }
                break;
            case 4://heroina
                hero++;
                chefe++;
                alto++;
                break;
            default:
                break;
            }
            
            totalOcorrencia++;

            if (nivOcorrencia != 4)
            {
                if (chefe<=pedro && chefe<=maria)
                {
                    chefe++;
                }
                else
                    if (pedro<=maria && pedro<=chefe)
                    {
                        pedro++;
                    }
                    else
                        if (maria<=chefe && maria<=pedro)
                        {
                            maria++;
                        }
            }
                  
            printf("\n---Relatorio---");
            printf("\n%d\tTotal de ocorrencia",totalOcorrencia);
            printf("\n%d\tTotal de ocorrencia do Chefe de Policia",chefe);
            printf("\n%d\tTotal de ocorrencia do Policial Pedro",pedro);  
            printf("\n%d\tTotal de ocorrencia do Policial Maria\n",maria);            
        }
    } while (tipOcorrencia>0 && tipOcorrencia<5);

    printf("\n---Relatorio Final---");
    printf("\nTipo de Ocorrencia.");
    printf("\n%d\tDireção Perigosa.",dirPerigosa);
    printf("\n%d\tBarulho.",barulho);
    printf("\n%d\tBebedeira.",bebedeira);
    printf("\n%d\tHero.",hero);
    printf("\nNivel da Ocorrencia.");
    printf("\n%d\tbaixo.",baixo);
    printf("\n%d\tMedio.",media);
    printf("\n%d\tAlto.",alto);

    return 0;
}