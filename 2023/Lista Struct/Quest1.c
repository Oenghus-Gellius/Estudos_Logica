/*
1) Considerando as declarações a seguir
typedef struct{
float nota;
int falta;
}tipo_bimestre;

typedef tipo_bimestre tipo_bimestres[4];
typedef struct{
char nome[30];
tipo_bimestres bimestres;
}tipo_disciplina;

typedef tipo_disciplina tipo_disciplinas[10];
typedef struct{
int matricula;
char nome[50];
tipo_disciplinas disciplinas;
}tipo_aluno;

typedef tipo_alunos tipo_alunos[30];
tipo_alunos v;

Faça um programa que preencha as informações dos 30 alunos (variável v) e 
em seguida mostre o menu
1 – Alunos Aprovados
2 – Alunos Reprovados
3 – Listagem
4 – Fim
Caso a opção selecionada seja:
1 – Mostrar a matrícula, Nome e média final de todos os alunos que possuam nota maior 
ou igual a 60 em todoas as disciplinas.
2 – Mostrar a matrícula, nome e o nome e a média final de todas as disiciplinas dos 
alunos que possuam média(soma da nota em cada bimestre) inferior a 60 em pelo menos 
uma disciplina.
3 – Mostra o nome e a matrícula de todos os alunos.
*/

#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 5
#define DISCIPLINAS 3
#define BIMESTRE 4

typedef struct{
float nota;
int falta;
}tipo_bimestre;//sTipoBimestre

typedef tipo_bimestre tipo_bimestres[4];
typedef struct{
char nome[100];
tipo_bimestres bimestres;
}tipo_disciplina;

typedef tipo_disciplina tipo_disciplinas[10];
typedef struct{
int matricula;
char nome[100];
tipo_disciplinas disciplinas;
}tipo_aluno;//sCadAluno

typedef tipo_alunos tipo_alunos[30];
tipo_alunos v;

int checkRepMat (tipo_aluno sCadAluno[],int mat,int ultimaPosCadAluno)
{
    int i,posicao;
    for (i = 0; i <= ultimaPosCadAluno; i++)
    {
        if (mat==sCadAluno[i].matricula);
        {
            return posicao;
        }
    }
    return -1;
    
}

void cadAlunos (tipo_aluno sCadAluno[], int tamanho, int *ultimaPosCadAluno){
    int i,k,j,mat,pesquisa,sair;
        
    printf("\nCadastro Aluno.:");
    for (i = 0; i < tamanho; i++)
    {
        printf("\nAluno %d",i+1);
        do
        {
            printf("\nMatricula.:");
            scanf("%d",&mat);
            pesquisa=checkRepMat(sCadAluno,mat,*ultimaPosCadAluno);//pesquisa
            if (pesquisa==-1)
            {
                (*ultimaPosCadAluno)++;
                sCadAluno[*ultimaPosCadAluno].matricula=mat;
                printf("\nNome.:");
                fgets(sCadAluno[*ultimaPosCadAluno].nome,100,stdin);

                for (k = 0; k < DISCIPLINAS; k++)
                {
                    printf("Disciplina - %d",k+1);
                    for (j = 0; j < BIMESTRE; j++)
                    {
                        printf("\nNota do %d Bimestre.:",j+1);
                        scanf("%f",&sCadAluno[i].disciplinas[k].bimestres[j].nota);
                        printf("\nFaltas do %d Bimestre.:",j+1);
                        scanf("%f",&sCadAluno[i].disciplinas[k].bimestres[j].falta);
                    }
                }
            }
            else
            {
                printf("\nmatricula já cadastrada!!!");
            }
            
        printf("\nEncerrar o Cadastro de Aluno? 1-Não | 2-SIM: ");
        scanf("%d", &sair);   
        } while (sair!=2);
    }
}

int main(){
    int menu, sair;
    int ultimaPosCadAluno=-1;
    tipo_aluno sCadAluno;

    do
    {
        printf("\nEscolha uma das opções do menu:");
        printf("\n1 - Cadastro de Aluno");
        printf("\n2 - Alunos Aprovados");
        printf("\n3 - Alunos Reprovados");  
        printf("\n4 - Listagem de Alunos");       
        printf("\nEscolha uma das opções.:");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            cadAlunos (sCadAluno,ALUNOS,&ultimaPosCadAluno);
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

        printf("\nEncerrar o programa? 1-Não | 2-SIM: ");
        scanf("%d", &sair);
    } while (sair!=2);

    return 0;
}