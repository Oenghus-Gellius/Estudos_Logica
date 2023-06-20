#include <stdio.h>
#define MAX 3
typedef struct {
    int matricula;
    char nome[100];
    float salario;
}TFuncionario;

void lerFuncionarios(TFuncionario v[],int tamanho){
    int i;
    for (i=0;i<tamanho;i++){
        printf("ForneÃ§a a matrÃ­cula:");
        scanf("%d",&v[i].matricula);
        setbuf(stdin,NULL);
        printf("ForneÃ§a o nome:");
        fgets(v[i].nome,100,stdin);
        setbuf(stdin,NULL);
        printf("ForneÃ§a o salÃ¡rio:");
        scanf("%f",&v[i].salario);
    }
}
int main(){
    TFuncionario vf[MAX];
    lerFuncionarios(vf,MAX);

    return 0;
}
