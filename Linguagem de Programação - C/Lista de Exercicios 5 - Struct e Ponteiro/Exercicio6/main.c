#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 1000

typedef struct dados
{
    char nomeNoiva[30];
    char nomeNoivo[30];
    char paiNoiva[30];
    char maeNoiva[30];
    char paiNoivo[30];
    char maeNoivo[30];
    char data[12];
    char hora[12];

} ARM;

ARM cadastro[40];
int controle = 0;
ARM *p[MAX];
void armazenar()
{
    char nome[30];
    printf("\nDigite o nome da noiva: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].nomeNoiva,nome);
    printf("\nDigite o nome da Mãe da noiva: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].maeNoiva,nome);
    printf("\nDigite o nome do Pai da noiva: ");
    fflush(stdin);
    gets(nome);
    strcpy(cadastro[controle].paiNoiva,nome);
    printf("\nDigite o nome do noivo: ");
    fflush(stdin);
    gets(nome);
    strcpy(p->nomeNoivo,nome);
    printf("\nDigite o nome da Mãe do noivo: ");
    fflush(stdin);
    gets(nome);
    strcpy(p->maeNoivo,nome);
    printf("\nDigite o nome do Pai do noivo: ");
    fflush(stdin);
    gets(nome);
    strcpy(p->paiNoivo,nome);
    printf("\nDigite a data do casamento: ");
    fflush(stdin);
    gets(nome);
    strcpy(p->data,nome);
    printf("\nDigite a hora do casamento: ");
    fflush(stdin);
    gets(nome);
    strcpy(p->hora,nome);
    controle++;
}

void casamentodata()
{
    char data[12];
    int i;
    printf("\nDigite uma data para saber os casamentos ocorridos na mesma: ");
    fflush(stdin);
    gets(data);
    for (i = 0; i < controle; ++i){
        if (strcmp(p->data, data) == 0){
            printf("%s e %s\n", p->nomeNoiva, p->nomeNoivo);
        }
    }
}

void nomenubente()
{
    char nome[30];
    int i;
    printf("\nDigite o nome do noivo(a) para saber o nubente: ");
    fflush(stdin);
    gets(nome);
    for (i = 0; i < controle; ++i){
        if (strcmp(p->nomeNoiva, nome) == 0)
            printf("%s\n", p->nomeNoivo);
            if (strcmp(p->nomeNoivo, nome) == 0)
                printf("%s\n", p->nomeNoiva);
    }
}

void dataehoracasamento()
{
    char nome1[30];
    char nome2[30];
    int i;
    printf("\nDigite o nome do noivo para saber a data e hora do casamento: ");
    fflush(stdin);
    gets(nome1);
    printf("Digite o nome do noiva para saber a data e hora do casamento: ");
    fflush(stdin);
    gets(nome2);
    for (i = 0; i < controle; ++i){
        if (strcmp(p->nomeNoivo, nome1) == 0 && strcmp(p->nomeNoiva, nome2) == 0)
            printf("\n%s\n", p->data);
            printf("\n%s\n", p->hora);
    }
}

int main()
{
    char op = 'c';
    while (op != 's'){
        printf("\nDeseja:\nA - Armazenar dados do casamento\nB - Casamentos ocorridos em determinada data\nC - Nome do noivo(a)\nD - Data e hora de determinado casamento\nS - Sair\n");
        op = getche();
        op = toupper(op);
        switch (op){
            case 'A': armazenar();
                    break;
            case 'B': casamentodata();
                    break;
            case 'C': nomenubente();
                    break;
            case 'D': dataehoracasamento();
                    break;
            case 'S': system("pause");
                    break;
            default: printf("Valor inválido!");
                    break;
        }
    }
    return 0;
}
