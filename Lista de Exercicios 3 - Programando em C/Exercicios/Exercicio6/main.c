#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[3][15];
    int matricula[3];
    char gabarito[10];
    char respostas[10];
    int i,x;
    int media[3]={0,0,0};
    printf("Digite O gabarito da prova:\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",&gabarito[i]);
    }
    system("cls");
    for (i=0; i<3; i++){
        system("cls");
        printf("Digite Matricula so aluno: ");
        scanf("%i",&matricula[i]);
        printf("Digite nome do aluno: ");
        scanf("%s",&nome[i]);
        printf("Digite seu gabarito da prova:\n");
        for (x=0;x<10;x++){
            printf("Questao %i:",x);
            scanf("%s",&respostas[x]);
            fflush(stdin);
            if (respostas[x] == gabarito[x])(media[i]=media[i]+1);
        }
    }
    for (i=0; i<3; i++){
    fflush(stdin);
    if (media[i]>=7){printf("\nParabens %s matricula %i media %.2i",nome[i],matricula[i],media[i]);}
    else{printf("\nTente outra vez, estude mais %s matricula %i media %.2i\n",nome[i],matricula[i],media[i]);}
    }
    system("pause");
}
