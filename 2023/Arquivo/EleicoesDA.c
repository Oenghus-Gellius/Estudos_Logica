/*
6) Para a eleição do Diretório Acadêmico, inscreveram-se 20 chapas. Cada chapa é descrita pelos
seguintes dados:
• Nome da chapa (é único)
• Nome do responsável
• Número de votos (inicialmente igual a zero)
Construa um programa que permita:
a) O cadastro das chapas.
b) cadastrar os votos de cada aluno, individualmente. Para cada voto lido, some 1 ao número de votos da chapa correspondente.
c) Após a leitura dos votos, exiba no vídeo o nome da chapa, o nome do responsável e o número
de votos da chapa campeã. Caso tenha ocorrido empate, exiba a mensagem Chapas empatadas
com n votos, sendo n o número de votos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char sNomeChapa[100];
    char sNomeResponsavel[100];
    int sNumVotos;
    int sNumChapa;
} TChapasDA;//sChapas

int checkRepNome (FILE *arqChapa,char *nomChapa)
{
    TChapasDA sChapas;
    int posicao;

    posicao=0;
    rewind(arqChapa);
    while (fread(&sChapas,sizeof(TChapasDA),1,arqChapa)==1)
    {
        if (strcmp(sChapas.sNomeChapa,nomChapa)==0)
        {
            return posicao;
        }
    }
    return -1;
}

void cadChapas (FILE *arqChapa)
{
    TChapasDA sChapas;
    char nomChapa[100];
    int posicao,sair;

    fseek(arqChapa,0,SEEK_END);
    do
    {
        printf("\nInsira o nome da CHAPA.:");
        setbuf(stdin,NULL);
        fgets(nomChapa,100,stdin);
        setbuf(stdin,NULL);

        posicao=checkRepNome (arqChapa,nomChapa);
        
        sChapas.sNumChapa=ftell(arqChapa)/sizeof(TChapasDA);

        if (posicao !=-1)
        {
            printf("\nChapa Ja registrada!!!");
        }
        else
        {
            sChapas.sNumChapa++;
            strcpy(sChapas.sNomeChapa,nomChapa);
            printf("\nInsira o nome do responsavel.:");
            fgets(sChapas.sNomeResponsavel,100,stdin);

            sChapas.sNumVotos=0;

            fseek(arqChapa,0,SEEK_END);
            fwrite(&sChapas,sizeof(TChapasDA),1,arqChapa);
            printf("\nChapa cadastrada com sucesso!");
        }
        printf("\nEncerrar o Cadastro de Chapas 1-Não | 2-SIM");
        scanf("%d",&sair);
    } while (sair!=2);
}

void votos (FILE *arqChapa)
{
    TChapasDA sChapas;
    int voto,sair;
    int encontrado = 0;

    printf("\nELEIÇÕES IFET");

    do
    {
        printf("\nCHAPAS");
        printf("\nNumero\t\tNome Chapa\t\tResponsavel");

        fseek(arqChapa,0,SEEK_END);
        if (ftell(arqChapa)/sizeof(TChapasDA)==0)
        {
            printf("\nSem Chapa cadastrada!!!\n");
            return;
        }
        rewind(arqChapa);
        while (fread(&sChapas,sizeof(TChapasDA),1,arqChapa)==1)
        {
            printf("\n%d\t\t%s\t\t%s",sChapas.sNumChapa,sChapas.sNomeChapa,sChapas.sNomeResponsavel);
        }
        printf("Insira o numero referente a Chapa sendo seu voto");
        scanf("%d",&voto);

        rewind(arqChapa);

        while (fread(&sChapas,sizeof(TChapasDA),1,arqChapa)==1)
        {
            if (voto==sChapas.sNumChapa)
            {
                sChapas.sNumVotos++;
                encontrado=1;
                fseek(arqChapa,-sizeof(TChapasDA),SEEK_CUR);
                fwrite(&sChapas,sizeof(TChapasDA),1,arqChapa);
                printf("\nVoto registrado com sucesso!");
                break;
            }
        }
        if (encontrado==0)
        {
            printf("\nNúmero de Chapa inválido!");
        }
        

        printf("\nEncerrar o processo eleitoral 1-Não | 2-SIM");
        scanf("%d",&sair);
    } while (sair!=2);
}

void resultado (FILE *arqChapa)
{
    TChapasDA sChapas;
    TChapasDA sCampea;
    int campea,count,sair;
    int maxVotos=0;
    
    rewind(arqChapa);
    do
    {
        printf("\nResultado das Eleições.:");

        while (fread(&sChapas,sizeof(TChapasDA),1,arqChapa)==1)
        {
            if (maxVotos<sChapas.sNumVotos)
            {
                maxVotos=sChapas.sNumVotos;
                sCampea=sChapas;
                count=0;
            }
            else
                if (sChapas.sNumVotos==maxVotos)
                {
                    count++;
                }
        }
        printf("\n-----CHAPA CAMPEÃ-----");
        printf("\nNome da Chapa.: %s",sCampea.sNomeChapa);
        printf("\nNome do responsável: %s", sCampea.sNomeResponsavel);
        printf("\nNúmero de votos: %d", sCampea.sNumVotos);        


        if (count > 0)
        {
            printf("\nChapas empatadas com %d votos!", maxVotos);
        }
        
        

        printf("\nEncerrar a Apuração? 1-Não | 2-SIM");
        scanf("%d",&sair);
    } while (sair!=2);
}

int main(){
    FILE *arqChapa;
    int menu,sair;
    setlocale(LC_ALL,"");

    arqChapa=fopen("ChapasDA.dat","rb+");
    if (arqChapa==NULL)
    {
        arqChapa=fopen("ChapasDA.dat","wb+");
    }
      
    do
    {
        printf("\nEleições IFET");
        printf("\nEscolha umas das opões no menu");
        printf("\n1-Cadastro Chapas | 2-Votar nas Chapas | 3-Listagem de Votos");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1://cadastro de chapas
            cadChapas (arqChapa);
            break;
        case 2://votação
            votos (arqChapa);
            break;
        case 3://Listagem de votos
            resultado (arqChapa);
            break;
        default:
            break;
        }
        printf("\nEncerrar o programa 1-Não | 2-SIM");
        scanf("%d",&sair);
    } while (sair!=2);
    fclose(arqChapa);
    printf("\nObrigado!!!");
    
    return 0;
}