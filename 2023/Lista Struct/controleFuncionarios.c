/*
1-Cadastro
2-Consultar matrÃ­cula
3 Consultar Nome
4-AlteraÃ§Ã£o
5-ExclusÃ£o
6-Listagem
7 - Fim
O programa irÃ¡ controlar os dados de funcionÃ¡rios(no mÃ¡ximo 100)
Cada funcionÃ¡rio  possui os dados: matrÃ­cula(Ã© Ãºnica),nome e salÃ¡rio */

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    int matricula;
    char nome[100];
    float salario;
}TFuncionario;

#define MAX 100 //nÃºmero mÃ¡ximo de funcionÃ¡rios
void retiraEnter(char *s){
    int t=strlen(s);

    if(s[t-1]=='\n' )
       s[t-1]='\0';
}

int pesquisa(TFuncionario v[],int ultimaPosicao,int mat){
    int i;
    for(i=0;i<=ultimaPosicao;i++){
        if(v[i].matricula==mat)
           return i;
    }
    return -1;
}
void cadastro(TFuncionario v[] ,int tamanho, int *ultimaPosicao){
    int mat,sair;
    if(*ultimaPosicao<tamanho-1){
        do{
            printf("ForneÃ§a a matrÃ­cula:");
            scanf("%d",&mat);
            if(pesquisa(v,*ultimaPosicao,mat)==-1){
                (*ultimaPosicao)++;
                v[*ultimaPosicao].matricula=mat;
                setbuf(stdin,NULL);
                printf("ForneÃ§a o nome:");
                fgets(v[*ultimaPosicao].nome,100,stdin);
                retiraEnter(v[*ultimaPosicao].nome);
                setbuf(stdin,NULL);
                printf("ForneÃ§a o salÃ¡rio:");
                scanf("%f",&v[*ultimaPosicao].salario);
            }
            else
               printf("\nMatrÃ­cula Repetida!!!\n");

            if(*ultimaPosicao<tamanho-1){
                printf("Desja sair do Cadastro? 1-Sim  2-NÃ£o:");
                scanf("%d",&sair);
            }

        }while((*ultimaPosicao<tamanho-1) && (sair !=1));
    }
    else
       printf("\nTodos os funcionÃ¡rios jÃ¡ cadastrados!!!!\n");

}

void listagem(TFuncionario v[],int ultimaPosicao){
    int i;
    if(ultimaPosicao>=0){
        printf("\nListagem de FuncionÃ¡rios\n");
        printf("MatrÃ­cula\t\tNome\t\t\t\tSalÃ¡rio\n");
        for(i=0;i<=ultimaPosicao;i++)
           printf("%d\t\t\t%s\t\t\t\t%.1f\n",v[i].matricula,v[i].nome,v[i].salario);
    }
    else
       printf("\nNenhum funcionÃ¡rio Cadastrado!!!\n");
}


void consultarMatricula(TFuncionario v[],int ultimaPosicao){
    int mat,sair,posicao;
    if(ultimaPosicao>=0){
        do{
            printf("ForneÃ§a a matrÃ­cula:") ;
            scanf("%d",&mat);
            posicao =pesquisa(v,ultimaPosicao,mat);
            if(posicao!=-1){
               printf("\nDados do FuncionÃ¡rio\n");
               printf("Matricula: %d\n",v[posicao].matricula);
               printf("Nome: %s\n",v[posicao].nome);
               printf("SalÃ¡rio: %.1f\n",v[posicao].salario);
            }
            else{
               printf("\nMatrÃ­cula Inexistente!!!!\n");
            }

            printf("\nDeseja sair da Consulta? 1-Sim  2-NÃ£o:")  ;
            scanf("%d",&sair);
        }while(sair!=1);
    }
    else
       printf("\nNenhum FuncionÃ¡rio Cadastrado!!!!\n");
}


int pesquisaNome(TFuncionario v[],int ultimaPosicao,char nome[]){
    int i;
    for(i=0;i<=ultimaPosicao;i++){
        if(strcmp(v[i].nome,nome)==0)
           return i;
    }
    return -1;
}

void consultarNome(TFuncionario v[],int ultimaPosicao){
    int sair,posicao;
    char nome[100];
    if(ultimaPosicao>=0){
        do{
            printf("ForneÃ§a o Nome:") ;
            setbuf(stdin,NULL);
            fgets(nome,100,stdin);
            retiraEnter(nome);
            setbuf(stdin,NULL);
            posicao =pesquisaNome(v,ultimaPosicao,nome);
            if(posicao!=-1){
               printf("\nDados do FuncionÃ¡rio\n");
               printf("Matricula: %d\n",v[posicao].matricula);
               printf("Nome: %s\n",v[posicao].nome);
               printf("SalÃ¡rio: %.1f\n",v[posicao].salario);
            }
            else{
               printf("\nMatrÃ­cula Inexistente!!!!\n");
            }

            printf("\nDeseja sair da Consulta? 1-Sim  2-NÃ£o:")  ;
            scanf("%d",&sair);
        }while(sair!=1);
    }
    else
       printf("\nNenhum FuncionÃ¡rio Cadastrado!!!!\n");
}

void exclusao(TFuncionario v[],int *ultimaPosicao){
    int mat,sair,posicao;
    if(*ultimaPosicao>=0){
        do{
            printf("ForneÃ§a a matrÃ­cula:");
            scanf("%d",&mat);
            posicao=pesquisa(v,*ultimaPosicao,mat);
            if(posicao!=-1){
                v[posicao] = v[*ultimaPosicao];
                (*ultimaPosicao)--;
            }
            else
               printf("\nMatrÃ­cula Repetida!!!\n");

            if(*ultimaPosicao>=0){
                printf("Desja sair do ExclusÃ£o? 1-Sim  2-NÃ£o:");
                scanf("%d",&sair);
            }

        }while((*ultimaPosicao>=0) && (sair !=1));
    }
    else
       printf("\nNenhum FuncionÃ¡rio Cadastrado!!!!\n");

}

void alteracao(TFuncionario v[], int ultimaPosicao){
    int mat,sair,posicao;
    if(ultimaPosicao>=0){
        do{
            printf("ForneÃ§a a matrÃ­cula:");
            scanf("%d",&mat);
            posicao = pesquisa(v,ultimaPosicao,mat);
            if(posicao!=-1){
                setbuf(stdin,NULL);
                printf("ForneÃ§a um novo nome:");
                fgets(v[posicao].nome,100,stdin);
                retiraEnter(v[posicao].nome);
                setbuf(stdin,NULL);
                printf("ForneÃ§a um novo  salÃ¡rio:");
                scanf("%f",&v[posicao].salario);
            }
            else
               printf("\nMatrÃ­cula Inexistente!!!\n");

            printf("Desja sair da AlteraÃ§Ã£o? 1-Sim  2-NÃ£o:");
            scanf("%d",&sair);

        }while(sair !=1);
    }
    else
       printf("\nNenhum FuncionÃ¡rio  cadastrados!!!!\n");

}

int main(){
    int opcao,ultimaPos=-1;
    TFuncionario vf[MAX];
    setlocale(LC_ALL,"");
    do{
        printf("Controle de FucionÃ¡rios\n");
        printf("1-Cadastro\n2-Consulta MatrÃ­cula\n3-Consulta Nome");
        printf( "\n4-AlteraÃ§Ã£o\n5-ExclusÃ£o\n6-Listagem\n7-FIm");
        printf("\nForneÃ§a sua OpÃ§Ã£o:");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
               cadastro(vf,MAX,&ultimaPos);
               break;
            case 2:
               consultarMatricula(vf,ultimaPos);
               break;
            case 3:
               consultarNome(vf,ultimaPos);
               break;
            case 4:
               alteracao(vf,ultimaPos);
               break;
            case 5:
               exclusao(vf,&ultimaPos);
               break;
            case 6:
               listagem(vf,ultimaPos);
               break;
        }

    }while(opcao!=7);

    return 0;
}
