#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 30
#define DISCIPLINAS 10
#define BIMESTRES 4

typedef struct {
    float nota;
    int falta;
} tipo_bimestre;

typedef tipo_bimestre tipo_bimestres[BIMESTRES];

typedef struct {
    char nome[30];
    tipo_bimestres bimestres;
} tipo_disciplina;

typedef tipo_disciplina tipo_disciplinas[DISCIPLINAS];

typedef struct {
    int matricula;
    char nome[50];
    tipo_disciplinas disciplinas;
} tipo_aluno;

typedef tipo_aluno tipo_alunos[ALUNOS];
tipo_alunos v;

void preencherInformacoes() {
    for (int i = 0; i < ALUNOS; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Digite a matrícula: ");
        scanf("%d", &v[i].matricula);
        printf("Digite o nome: ");
        scanf(" %[^\n]s", v[i].nome);

        for (int j = 0; j < DISCIPLINAS; j++) {
            printf("Disciplina %d:\n", j + 1);

            for (int k = 0; k < BIMESTRES; k++) {
                printf("Digite a nota do bimestre %d: ", k + 1);
                scanf("%f", &v[i].disciplinas[j].bimestres[k].nota);
                printf("Digite o número de faltas do bimestre %d: ", k + 1);
                scanf("%d", &v[i].disciplinas[j].bimestres[k].falta);
            }
        }
    }
}

float calcularMediaDisciplina(tipo_disciplina disciplina) {
    float somaNotas = 0;

    for (int i = 0; i < BIMESTRES; i++) {
        somaNotas += disciplina.bimestres[i].nota;
    }

    return somaNotas / BIMESTRES;
}

float calcularMediaAluno(tipo_aluno aluno) {
    float somaMedias = 0;

    for (int i = 0; i < DISCIPLINAS; i++) {
        somaMedias += calcularMediaDisciplina(aluno.disciplinas[i]);
    }

    return somaMedias / DISCIPLINAS;
}

void mostrarAlunosAprovados() {
    printf("\n--- Alunos Aprovados ---\n");

    for (int i = 0; i < ALUNOS; i++) {
        tipo_aluno aluno = v[i];
        float mediaAluno = calcularMediaAluno(aluno);

        if (mediaAluno >= 60) {
            printf("Matrícula: %d\n", aluno.matricula);
            printf("Nome: %s\n", aluno.nome);
            printf("Média Final: %.2f\n\n", mediaAluno);
        }
    }
}

void mostrarAlunosReprovados() {
    printf("\n--- Alunos Reprovados ---\n");

    for (int i = 0; i < ALUNOS; i++) {
        tipo_aluno aluno = v[i];
        float mediaAluno = calcularMediaAluno(aluno);

        if (mediaAluno < 60) {
            printf("Matrícula: %d\n", aluno.matricula);
            printf("Nome: %s\n", aluno.nome);
            printf("Média Final: %.2f\n\n", mediaAluno);
        }
    }
}

void listarAlunos() {
    printf("\n--- Lista de Alunos ---\n");

    for (int i = 0; i < ALUNOS; i++) {
        tipo_aluno aluno = v[i];
        printf("Matrícula: %d\n", aluno.matricula);
        printf("Nome: %s\n\n", aluno.nome);
    }
}

int main() {
    int menu, sair;

    do {
        printf("\nEscolha uma das opções do menu:");
        printf("\n1 - Cadastro de Aluno");
        printf("\n2 - Alunos Aprovados");
        printf("\n3 - Alunos Reprovados");
        printf("\n4 - Listagem de Alunos");
        printf("\n5 - Fim");
        printf("\nEscolha uma das opções: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                preencherInformacoes();
                break;
            case 2:
                mostrarAlunosAprovados();
                break;
            case 3:
                mostrarAlunosReprovados();
                break;
            case 4:
                listarAlunos();
                break;
            case 5:
                sair = 1;
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

        printf("Encerrar o programa? 1-Não | 2-Sim: ");
        scanf("%d", &sair);
    } while (sair != 2);

    return 0;
}

