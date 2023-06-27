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
    char nomeChapa[100],nomeResponsavel[100];
    int votosChapa;
}Tchapas;//sChapas

int pesquisaNome(Tchapas sChapas[],char nomeChapa,int tamanho){
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (strcmp(nomeChapa,sChapas[i].nomeChapa)==0)
        {
            return i;
        }
    }
    return -1;    
}

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
                (sChapas[votos].votosChapa)++;  
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

void funcCadastroChapa(Tchapas sChapas[],int *tamnho){
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
        
        pesquisa=pesquisaNome(sChapas,nomeCadChapa,CHAPA);
        if (pesquisa==-1)
        {
            (*tamnho)++;
            setbuf(stdin,NULL);   
            strcpy(sChapas[i].nomeChapa,nomeCadChapa);      
            printf("\nInsira o nome do Responsavel Pela Chapa.:");
            fgets(sChapas[i].nomeResponsavel,100,stdin);
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
    qtdChapas=0;
    do
    {
        printf("\nProcesso Eleitoral.:");
        printf("\n1-Votos Alunos | 2-Cadastro de Chapas");
        printf("\nInsita umas das opções.:");
        scanf("%d",&menu);
        qtdChapas=-1;
        switch (menu)
        {
        case 1://votos alunoss
            if (qtdChapas>0)
            {
                funcCadastroChapa(sChapas,&qtdVotos);
            }
            
            break;
        case 2://cadastro de Chapa
            funcCadastroChapa(sChapas,&qtdChapas);
            break;
        
        default:
            break;
        }
        printf("Cuntinuar as eleições?1-SIM|2-NÃO ");
        scanf("%d",&sair);
    } while (sair!=2);

    return 0;
}