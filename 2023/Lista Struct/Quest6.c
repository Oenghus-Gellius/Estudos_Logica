/*
6) Para a eleição do Diretório Acadêmico, inscreveram-se 20 chapas. Cada chapa é descrita pelos
seguintes dados:
• Nome da chapa (é único)
• Nome do responsável
• Número de votos (inicialmente igual a zero)
Construa um programa que permita:
a) O cadastro das chapas.
b) Ler os votos alunos. Para cada voto lido, some 1 ao número de votos da chapa correspondente.
c) Após a leitura dos votos, exiba no vídeo o nome da chapa, o nome do responsável e o número
de votos da chapa campeã. Caso tenha ocorrido empate, exiba a mensagem Chapas empatadas
com n votos, sendo n o número de votos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define CHAPA 20

typedef struct {
    char sNnomeChapa[100],sNomeResponsavel[100];
    int sVotosChapa;
}Tchapas;//sChapas

void funcVotos (Tchapas sChapas[],int *tamanho){
    int votos,sair;
    if (tamanho>=0)
    {
        do
        {
            printf("\nVoto chapa.:");
            scanf("%d",&votos);
            if (votos>0 && votos<=*tamanho)
            {
                (sChapas[votos].sVotosChapa)++;  
                (*tamanho)++; 
            }
            else
            {
                printf("\nVoto invalido!!!");
            }     
            printf("Continuar votando 1-SIM | 2-NÃO");
            scanf("%d",&sair);
        } while (sair!=2);
    }
}

int pesquisaNome(Tchapas sChapas[],char nomeChapa,int ultimoCadChapa){
    int i;
    for (i = 0; i <= ultimoCadChapa; i++)
    {
        if (strcmp(nomeChapa,sChapas[i].sNnomeChapa)==0)
        {
            return i;
        }
    }
    return -1;    
}

void funcCadastroChapa(Tchapas sChapas[],int *ultimoCadChapa){
    int sair,i;
    char nomeCadChapa[100];
    int pesquisa;
    
    i=0;
    do
    {   
        setbuf(stdin,NULL);
        printf("\nCadastro Chapa.:");
        printf("\nInsira o nome da chapa numero %d.:",i+1);
        fgets(nomeCadChapa,100,stdin);
        setbuf(stdin,NULL);
        
        pesquisa=pesquisaNome(sChapas,nomeCadChapa,*ultimoCadChapa);
        if (pesquisa==-1)
        {
            (*ultimoCadChapa)++;
            strcpy(sChapas[i].sNnomeChapa,nomeCadChapa);      
            printf("\nInsira o nome do Responsavel Pela Chapa.:");
            fgets(sChapas[i].sNomeResponsavel,100,stdin);
            setbuf(stdin,NULL);
            i++;
        }
        else
        {
            printf("\nNome já cadastrado!!");
        }
        printf("Continuar a cadastrar? 1-SIM|2-NÃO");
        scanf("%d",&sair);
    } while (sair!=sair);
}

int main(){
    int menu,sair;
    Tchapas sChapas[CHAPA];
    int qtdVotos,qtdChapas;
    qtdVotos=0;
    qtdChapas=-1;
    do
    {
        printf("\nProcesso Eleitoral.:");
        printf("\n1-Cadastro de Chapas | 2-Votos Alunos");
        printf("\nInsita umas das opções.:");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1://cadastro de Chapa
            funcCadastroChapa(sChapas,&qtdChapas);
            break;
        case 2://votos alunos
            funcCadastroChapa(sChapas,&qtdVotos);
            break;
        default:
            break;
        }
        printf("Cuntinuar as eleições?1-SIM|2-NÃO ");
        scanf("%d",&sair);
    } while (sair!=2);

    return 0;
}