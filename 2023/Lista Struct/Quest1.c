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

Faça um programa que preencha as informações dos 30 alunos (variável v) e em seguida mostre o
menu
1 – Alunos Aprovados
2 – Alunos Reprovados
3 – Listagem
4 – Fim
Caso a opção selecionada seja:
1 – Mostrar a matrícula, Nome e média final de todos os alunos que possuam nota maior ou igual a 60
em todoas as disciplinas.
2 – Mostrar a matrícula, nome e o nome e a média final de todas as disiciplinas dos aalunos que
possuam média(soma da nota em cada bimestre) inferior a 60 em pelo menos uma disciplina.
3 – Mostra o nome e a matrícula de todos os alunos.
*/

#include <stdio.h>
#include <stdlib.h>

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

int main(){
    int menu;

    do
    {
        printf("\n1 - Alunos Aprovados\n2 - Alunos Reprovados\n3 - Listagem\n4 - Fim");
        printf("\nEscolha uma opção.:");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1://Alunos aprovados
            /* code */
            break;
        case 2://Alunos Reprovados
            /* code */
            break;
        case 3://Listagem
            /* code */
            break;
        default:
            printf("Opção incorreta!");
            break;
        }
    } while (menu!=4);
    printf("\nOrigado pela consulta!!!");
    
    



    return 0;
}

