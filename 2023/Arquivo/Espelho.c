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
} TChapasDA;

int checkRepNome(FILE *arqChapa, char *nomChapa)
{
    TChapasDA sChapas;
    rewind(arqChapa);
    while (fread(&sChapas, sizeof(TChapasDA), 1, arqChapa) == 1)
    {
        if (strcmp(sChapas.sNomeChapa, nomChapa) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void cadChapas(FILE *arqChapa)
{
    TChapasDA sChapas;
    char nomChapa[100];
    int sair;

    fseek(arqChapa, 0, SEEK_END);

    do
    {
        printf("\nInsira o nome da CHAPA.: ");
        setbuf(stdin, NULL);
        fgets(nomChapa, sizeof(nomChapa), stdin);
        setbuf(stdin, NULL);

        if (checkRepNome(arqChapa, nomChapa) == 1)
        {
            printf("\nChapa já registrada!");
        }
        else
        {
            sChapas.sNumChapa = ftell(arqChapa) / sizeof(TChapasDA);
            strcpy(sChapas.sNomeChapa, nomChapa);
            printf("\nInsira o nome do responsável: ");
            fgets(sChapas.sNomeResponsavel, sizeof(sChapas.sNomeResponsavel), stdin);
            sChapas.sNumVotos = 0;

            fseek(arqChapa, 0, SEEK_END);
            fwrite(&sChapas, sizeof(TChapasDA), 1, arqChapa);
            printf("\nChapa cadastrada com sucesso!");
        }

        printf("\nEncerrar o Cadastro de Chapas? 1-Não | 2-SIM: ");
        scanf("%d", &sair);
    } while (sair != 2);
}

void votos(FILE *arqChapa)
{
    TChapasDA sChapas;
    int voto, sair;
    int encontrado = 0;

    printf("\nELEIÇÕES IFET");

    do
    {
        printf("\nCHAPAS");
        printf("\nNumero\t\tNome Chapa\t\tResponsavel");

        fseek(arqChapa, 0, SEEK_END);

        if (ftell(arqChapa) / sizeof(TChapasDA) == 0)
        {
            printf("\nSem Chapa cadastrada!\n");
            return;
        }

        rewind(arqChapa);

        while (fread(&sChapas, sizeof(TChapasDA), 1, arqChapa) == 1)
        {
            printf("\n%d\t\t%s\t\t%s", sChapas.sNumChapa, sChapas.sNomeChapa, sChapas.sNomeResponsavel);
        }

        printf("\nInsira o número referente à Chapa para registrar seu voto: ");
        scanf("%d", &voto);

        rewind(arqChapa);

        while (fread(&sChapas, sizeof(TChapasDA), 1, arqChapa) == 1)
        {
            if (voto == sChapas.sNumChapa)
            {
                sChapas.sNumVotos++;
                encontrado = 1;
                fseek(arqChapa, -sizeof(TChapasDA), SEEK_CUR);
                fwrite(&sChapas, sizeof(TChapasDA), 1, arqChapa);
                printf("\nVoto registrado com sucesso!");
                break;
            }
        }

        if (!encontrado)
        {
            printf("\nNúmero de Chapa inválido!");
        }

        printf("\nEncerrar o processo eleitoral? 1-Não | 2-SIM: ");
        scanf("%d", &sair);
    } while (sair != 2);
}

void resultado(FILE *arqChapa)
{
    TChapasDA sChapas;
    TChapasDA sCampea;
    int campea, count, sair;
    int maxVotos = 0;
    int empate = 0;

    rewind(arqChapa);

    do
    {
        printf("\nResultado das Eleições:");

        while (fread(&sChapas, sizeof(TChapasDA), 1, arqChapa) == 1)
        {
            if (maxVotos < sChapas.sNumVotos)
            {
                maxVotos = sChapas.sNumVotos;
                sCampea = sChapas;
                count = 0;
            }
            else if (maxVotos == sChapas.sNumVotos)
            {
                count++;
            }
        }

        printf("\n----- CHAPA CAMPEÃ -----");
        printf("\nNome da Chapa: %s", sCampea.sNomeChapa);
        printf("\nNome do responsável: %s", sCampea.sNomeResponsavel);
        printf("\nNúmero de votos: %d", sCampea.sNumVotos);

        if (count > 0)
        {
            empate = 1;
            printf("\nChapas empatadas com %d votos!", maxVotos);
        }

        printf("\nEncerrar a Apuração? 1-Não | 2-SIM: ");
        scanf("%d", &sair);
    } while (sair != 2);

    if (empate)
    {
        printf("\nOcorreu um empate na eleição!");
    }
}

int main()
{
    FILE *arqChapa;
    int menu, sair;

    setlocale(LC_ALL, "");

    arqChapa = fopen("ChapasDA.dat", "rb+");

    if (arqChapa == NULL)
    {
        arqChapa = fopen("ChapasDA.dat", "wb+");
    }

    do
    {
        printf("\nEleições IFET");
        printf("\nEscolha uma das opções do menu:");
        printf("\n1 - Cadastro de Chapas");
        printf("\n2 - Votar nas Chapas");
        printf("\n3 - Listagem de Votos");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            cadChapas(arqChapa);
            break;
        case 2:
            votos(arqChapa);
            break;
        case 3:
            resultado(arqChapa);
            break;
        default:
            break;
        }

        printf("\nEncerrar o programa? 1-Não | 2-SIM: ");
        scanf("%d", &sair);
    } while (sair != 2);

    fclose(arqChapa);
    printf("\nObrigado!");

    return 0;
}
