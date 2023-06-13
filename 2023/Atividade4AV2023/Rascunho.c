/*
1-Cadastro
2-Consultar matrícula
3 Consultar Nome
4-Alteração
5-Exclusão
6-Listagem
7 - Fim
O programa irá controlar os dados de funcionários(no máximo 100)
Cada funcionário  possui os dados: matrícula(é única),nome e salário */

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX 100 //número máximo de funcionários
void retiraEnter(char *s){
    int t=strlen(s);

    if(s[t-1]=='\n' )
       s[t-1]='\0';
}
int pesquisa(int vMat[],int ultimaPosicao,int mat){
    int i;
    for(i=0;i<=ultimaPosicao;i++){
        if(vMat[i]==mat)
           return i;
    }
    return -1;
}
void cadastro(int vMatriculas[],char vNomes[][100],
              float vSalarios[],int tamanho, int *ultimaPosicao){
    int mat,sair;
    if(*ultimaPosicao<tamanho-1){
        do{
            printf("Forneça a matrícula:");
            scanf("%d",&mat);
            if(pesquisa(vMatriculas,*ultimaPosicao,mat)==-1){
                (*ultimaPosicao)++;
                vMatriculas[*ultimaPosicao]=mat;
                setbuf(stdin,NULL);
                printf("Forneça o nome:");
                fgets(vNomes[*ultimaPosicao],100,stdin);
                retiraEnter(vNomes[*ultimaPosicao]);
                setbuf(stdin,NULL);
                printf("Forneça o salário:");
                scanf("%f",&vSalarios[*ultimaPosicao]);
            }
            else
               printf("\nMatrícula Repetida!!!\n");

            if(*ultimaPosicao<tamanho-1){
                printf("Desja sair do Cadastro? 1-Sim  2-Não:");
                scanf("%d",&sair);
            }

        }while((*ultimaPosicao<tamanho-1) && (sair !=1));
    }
    else
       printf("\nTodos os funcionários já cadastrados!!!!\n");

}

void listagem(int vMatriculas[],char vNomes[][100],float vSalarios[],int ultimaPosicao){
    int i;
    if(ultimaPosicao>=0){
        printf("\nListagem de Funcionários\n");
        printf("Matrícula\t\tNome\t\t\t\tSalário\n");
        for(i=0;i<=ultimaPosicao;i++)
           printf("%d\t\t\t%s\t\t\t\t%.1f\n",vMatriculas[i],vNomes[i],vSalarios[i]);
    }
    else
       printf("\nNenhum funcionário Cadastrado!!!\n");
}


void consultarMatricula(int vMatriculas[],char vNomes[][100],
                        float vSalarios[],int ultimaPosicao){
    int mat,sair,posicao;
    if(ultimaPosicao>=0){
        do{
            printf("Forneça a matrícula:") ;
            scanf("%d",&mat);
            posicao =pesquisa(vMatriculas,ultimaPosicao,mat);
            if(posicao!=-1){
               printf("\nDados do Funcionário\n");
               printf("Matricula: %d\n",vMatriculas[posicao]);
               printf("Nome: %s\n",vNomes[posicao]);
               printf("Salário: %.1f\n",vSalarios[posicao]);
            }
            else{
               printf("\nMatrícula Inexistente!!!!\n");
            }

            printf("\nDeseja sair da Consulta? 1-Sim  2-Não:")  ;
            scanf("%d",&sair);
        }while(sair!=1);
    }
    else
       printf("\nNenhum Funcionário Cadastrado!!!!\n");
}


int pesquisaNome(char vNomes[][100],int ultimaPosicao,char nome[]){
    int i;
    for(i=0;i<=ultimaPosicao;i++){
        if(strcmp(vNomes[i],nome)==0)
           return i;
    }
}

void consultarNome(int vMatriculas[],char vNomes[][100],
                        float vSalarios[],int ultimaPosicao){
    int sair,posicao;
    char nome[100];
    if(ultimaPosicao>=0){
        do{
            printf("Forneça o Nome:") ;
            setbuf(stdin,NULL);
            fgets(nome,100,stdin);
            retiraEnter(nome);
            setbuf(stdin,NULL);
            posicao =pesquisaNome(vNomes,ultimaPosicao,nome);
            if(posicao!=-1){
               printf("\nDados do Funcionário\n");
               printf("Matricula: %d\n",vMatriculas[posicao]);
               printf("Nome: %s\n",vNomes[posicao]);
               printf("Salário: %.1f\n",vSalarios[posicao]);
            }
            else{
               printf("\nMatrícula Inexistente!!!!\n");
            }

            printf("\nDeseja sair da Consulta? 1-Sim  2-Não:")  ;
            scanf("%d",&sair);
        }while(sair!=1);
    }
    else
       printf("\nNenhum Funcionário Cadastrado!!!!\n");
}

void exclusao(int vMatriculas[],char vNomes[][100],float vSalarios[],int *ultimaPosicao){
    int mat,sair,posicao;
    if(*ultimaPosicao>=0){
        do{
            printf("Forneça a matrícula:");
            scanf("%d",&mat);
            posicao=pesquisa(vMatriculas,*ultimaPosicao,mat);
            if(posicao!=-1){
                vMatriculas[posicao] = vMatriculas[*ultimaPosicao];
                strcpy(vNomes[posicao],vNomes[*ultimaPosicao]);
                vSalarios[posicao] = vSalarios[*ultimaPosicao];
                (*ultimaPosicao)--;
            }
            else
               printf("\nMatrícula Repetida!!!\n");

            if(*ultimaPosicao>=0){
                printf("Desja sair do Exclusão? 1-Sim  2-Não:");
                scanf("%d",&sair);
            }

        }while((*ultimaPosicao>=0) && (sair !=1));
    }
    else
       printf("\nNenhum Funcionário Cadastrado!!!!\n");

}

void alteracao(int vMatriculas[],char vNomes[][100],
              float vSalarios[], int ultimaPosicao){
    int mat,sair,posicao;
    if(ultimaPosicao>=0){
        do{
            printf("Forneça a matrícula:");
            scanf("%d",&mat);
            posicao = pesquisa(vMatriculas,ultimaPosicao,mat);
            if(posicao!=-1){
                setbuf(stdin,NULL);
                printf("Forneça um novo nome:");
                fgets(vNomes[posicao],100,stdin);
                retiraEnter(vNomes[posicao]);
                setbuf(stdin,NULL);
                printf("Forneça um novo  salário:");
                scanf("%f",&vSalarios[posicao]);
            }
            else
               printf("\nMatrícula Inexistente!!!\n");

            printf("Desja sair da Alteração? 1-Sim  2-Não:");
            scanf("%d",&sair);

        }while(sair !=1);
    }
    else
       printf("\nNenhum Funcionário  cadastrados!!!!\n");

}

int main(){
    int vMatriculas[MAX],opcao,ultimaPos=-1;
    float vSalarios[MAX];
    char vNomes[MAX][100];
    setlocale(LC_ALL,"");
    do{
        printf("Controle de Fucionários\n");
        printf("1-Cadastro\n2-Consulta Matrícula\n3-Consulta Nome");
        printf( "\n4-Alteração\n5-Exclusão\n6-Listagem\n7-FIm");
        printf("\nForneça sua Opção:");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
               cadastro(vMatriculas,vNomes,vSalarios,MAX,&ultimaPos);
               break;
            case 2:
               consultarMatricula(vMatriculas,vNomes,vSalarios,ultimaPos);
               break;
            case 3:
               consultarNome(vMatriculas,vNomes,vSalarios,ultimaPos);
               break;
            case 4:
               alteracao(vMatriculas,vNomes,vSalarios,ultimaPos);
               break;
            case 5:
               exclusao(vMatriculas,vNomes,vSalarios,&ultimaPos);
               break;
            case 6:
               listagem(vMatriculas,vNomes,vSalarios,ultimaPos);
               break;
        }

    }while(opcao!=7);

    return 0;
}
