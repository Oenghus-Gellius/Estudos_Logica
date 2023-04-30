#include <stdio.h>
#include <string.h>
#define NA 3//nÃºmero de alunos
int main(){
    int vIdades[NA],i,k,achou;
    float vNotas[NA],media=0;
    char vNomes[NA][100];
    
    for(i=0;i<NA;i++){
        printf("\nDados do %do. aluno\n",i+1);
        //validando o nome
        do{
           printf("Nome:");
           fgets(vNomes[i],100,stdin);
           setbuf(stdin,NULL);
           k=0;
           achou=0;
           while(k<i && achou==0){
               if(strcmp(vNomes[k],vNomes[i])==0)
                  achou=1;
               else
                  k++;
           }
           
           if(achou==1)
              printf("\nNome jÃ¡ cadastrado!!!\n");
        }while(achou==1);
        
        printf("Nota:");
        scanf("%f",&vNotas[i]);
        printf("Idade:");
        scanf("%d",&vIdades[i]);
        setbuf(stdin,NULL);
        media+=vNotas[i];
    }
    media=media/NA;//media/=NA;
    printf("\nMÃ©dia da Turma = %.1f",media);
    printf("\nAlunos com nota superior a mÃ©dia da turma\n");
    for(i=0;i<NA;i++){
        if(vNotas[i]>media){
            printf("Nome: %s",vNomes[i]);
            printf("Nota: %.1f",vNotas[i]);
            printf("\nIddade: %d\n\n",vIdades[i]);
        }
    }
    return 0;
}
